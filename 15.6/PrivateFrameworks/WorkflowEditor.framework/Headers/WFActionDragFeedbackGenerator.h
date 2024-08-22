// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONDRAGFEEDBACKGENERATOR_H
#define WFACTIONDRAGFEEDBACKGENERATOR_H

@class NSDate;


#import "WFDragFeedbackGenerator.h"

@interface WFActionDragFeedbackGenerator : WFDragFeedbackGenerator

@property (nonatomic) BOOL initializedReorderSound; // ivar: _initializedReorderSound
@property (retain, nonatomic) NSDate *lastDragStartDate; // ivar: _lastDragStartDate
@property (nonatomic) unsigned int reorderSound; // ivar: _reorderSound


-(void)dealloc;
-(void)draggingActionsEnteredDeletionZone:(id)arg0 ;
-(void)draggingInsertedActions:(id)arg0 intoWorkflow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)draggingItemSnapped;
-(void)draggingMovedActions:(id)arg0 fromIndexes:(id)arg1 toIndexes:(id)arg2 inWorkflow:(id)arg3 ;
-(void)draggingRemovedActions:(id)arg0 ;
-(void)draggingStarted;
-(void)playReorderSound;


@end


#endif