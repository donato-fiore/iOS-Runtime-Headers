// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDRAGFEEDBACKGENERATOR_H
#define WFDRAGFEEDBACKGENERATOR_H

@class _UIDragSnappingFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface WFDragFeedbackGenerator : NSObject

@property (nonatomic) NSInteger activeDragSessions; // ivar: _activeDragSessions
@property (retain, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator


-(id)init;
-(id)initWithCollectionView:(id)arg0 ;
-(void)draggedObjectLanded;
-(void)draggedObjectLifted;
-(void)draggingCancelled;
-(void)draggingItemDropped;
-(void)draggingItemSnapped;
-(void)draggingPositionUpdated;
-(void)draggingStarted;
-(void)dropTargetUpdated;
-(void)objectSnapped;
-(void)performFeedbackWithDelay:(CGFloat)arg0 insideBlock:(id)arg1 ;
-(void)positionUpdated;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif