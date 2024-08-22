// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSCGIMAGEFROMIOSURFACEBUILDER_H
#define BSCGIMAGEFROMIOSURFACEBUILDER_H

@class IOSurface;

#import <Foundation/Foundation.h>


@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    IOSurface *_surface;
    *CGImage _image;
    BOOL _isDirty;
}


@property (readonly, nonatomic, getter=isOpaque) BOOL opaque; // ivar: _isOpaque


-(struct CGImage *)buildCGImage;
-(void)dealloc;


@end


#endif