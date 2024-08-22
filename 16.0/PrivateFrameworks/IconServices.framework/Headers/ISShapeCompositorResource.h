// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISSHAPECOMPOSITORRESOURCE_H
#define ISSHAPECOMPOSITORRESOURCE_H

@class NSString, IFColor;
@protocol ISScalableCompositorResource;

#import <Foundation/Foundation.h>


@interface ISShapeCompositorResource : NSObject <ISScalableCompositorResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) IFColor *fillColor; // ivar: _fillColor
@property (readonly) NSUInteger hash;
@property (retain) IFColor *lineColor; // ivar: _lineColor
@property CGFloat lineWidth; // ivar: _lineWidth
@property (readonly) Class superclass;


+(CGFloat)continuousCornerRadiusForSize:(struct CGSize )arg0 ;
+(id)circleShape;
+(id)continuousRoundedRectShape;
-(id)_init;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif