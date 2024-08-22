// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACKDRAGSNAPPINGBEHAVIOR_H
#define _UIFEEDBACKDRAGSNAPPINGBEHAVIOR_H

@class UIDragSnappingFeedbackGenerator;



@interface _UIFeedbackDragSnappingBehavior : UIDragSnappingFeedbackGenerator



+(id)dragBehaviorWithCoordinateSpace:(id)arg0 configuration:(id)arg1 ;
+(id)dragBehaviorWithStyle:(NSInteger)arg0 coordinateSpace:(id)arg1 ;
+(id)retargetBehaviorWithStyle:(NSInteger)arg0 coordinateSpace:(id)arg1 ;
-(void)snappedToFinalPosition;
-(void)targetUpdated;


@end


#endif