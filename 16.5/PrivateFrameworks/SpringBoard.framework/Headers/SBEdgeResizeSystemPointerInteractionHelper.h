// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEDGERESIZESYSTEMPOINTERINTERACTIONHELPER_H
#define SBEDGERESIZESYSTEMPOINTERINTERACTIONHELPER_H


#import <Foundation/Foundation.h>


@interface SBEdgeResizeSystemPointerInteractionHelper : NSObject



+(BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg0 frame:(struct CGRect )arg1 innerLengthOfInteractionRegion:(CGFloat)arg2 outerLengthOfInteractionRegion:(CGFloat)arg3 cornerLengthOfInteractionRegion:(CGFloat)arg4 occupiedCorners:(NSUInteger)arg5 hoveringOverEdge:(*NSUInteger)arg6 pointerRegion:(struct CGRect *)arg7 ;
+(NSUInteger)latchingAxesForHoveredEdge:(NSUInteger)arg0 ;
+(id)fancyResizePointerShapeHoveringOverEdge:(NSUInteger)arg0 innerLengthOfInteractionRegion:(CGFloat)arg1 outerLengthOfInteractionRegion:(CGFloat)arg2 cornerRadii:(struct UIRectCornerRadii )arg3 ;


@end


#endif