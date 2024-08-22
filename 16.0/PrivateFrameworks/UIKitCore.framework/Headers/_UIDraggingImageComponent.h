// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDRAGGINGIMAGECOMPONENT_H
#define _UIDRAGGINGIMAGECOMPONENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UIView.h"

@interface _UIDraggingImageComponent : NSObject <NSCopying>

 {
    CAPoint3D _origin;
    ? _size;
}


@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) BOOL hidesImage; // ivar: _hidesImage
@property (readonly, nonatomic) BOOL ignoresAccessibilityFilters; // ivar: _ignoresAccessibilityFilters
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(id)_initWithNoImageAndFrame:(struct CGRect )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initHidingDragImage;
-(id)initWithImage:(id)arg0 frame:(struct CGRect )arg1 ignoreAccessibilityFilters:(BOOL)arg2 ;
-(id)initWithView:(id)arg0 ;


@end


#endif