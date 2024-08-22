// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERLAYOUTINFO_H
#define PUPARALLAXLAYERLAYOUTINFO_H


#import <Foundation/Foundation.h>


@interface PUParallaxLayerLayoutInfo : NSObject

@property (readonly, nonatomic) BOOL canApplyParallax; // ivar: _canApplyParallax
@property (readonly, nonatomic) CGRect containerFrame; // ivar: _containerFrame
@property (readonly, nonatomic) CGFloat parallaxAmount; // ivar: _parallaxAmount
@property (readonly, nonatomic) CGPoint parallaxVector; // ivar: _parallaxVector
@property (readonly, nonatomic) CGFloat visibilityAmount; // ivar: _visibilityAmount
@property (readonly, nonatomic) NSUInteger visibilityEdge; // ivar: _visibilityEdge
@property (readonly, nonatomic) CGRect visibleFrame; // ivar: _visibleFrame


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithVisibleFrame:(struct CGRect )arg0 containerFrame:(struct CGRect )arg1 canApplyParallax:(BOOL)arg2 parallaxVector:(struct CGPoint )arg3 parallaxAmount:(CGFloat)arg4 visibilityAmount:(CGFloat)arg5 visibilityEdge:(NSUInteger)arg6 ;
-(struct CGRect )viewFrameForLayerFrame:(struct CGRect )arg0 ;


@end


#endif