// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSURFACE_H
#define RBSURFACE_H


#import <Foundation/Foundation.h>

#import "RBDisplayList.h"

@interface RBSurface : NSObject {
    objc_ptr<RBDisplayList *> _displayList;
    refcounted_ptr<RB::Drawable> _drawable;
    objc_ptr<id<MTLDevice>> _device;
    refcounted_ptr<RB::Texture> _texture;
    *void _lastItem;
    Bounds _dirty;
}


@property (nonatomic) ? clearColor; // ivar: _clearColor
@property (nonatomic) BOOL clearsBackground; // ivar: _clearsBackground
@property (nonatomic) int colorMode; // ivar: _colorMode
@property (retain, nonatomic) RBDisplayList *displayList;
@property (nonatomic, getter=isOpaque) BOOL opaque; // ivar: _opaque
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size; // ivar: _size


-(id)init;
-(struct CGImage *)copyCGImageUsingDevice:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)updateUsingDevice:(id)arg0 ;


@end


#endif