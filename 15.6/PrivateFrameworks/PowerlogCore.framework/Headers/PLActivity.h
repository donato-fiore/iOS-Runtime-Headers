// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACTIVITY_H
#define PLACTIVITY_H

@class NSArray, NSString, NSDate;
@protocol PLActivityCriterionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLEntry.h"
#import "PLActivityCriterion.h"

@interface PLActivity : NSObject <PLActivityCriterionDelegate>



@property (copy) id *activityBlock; // ivar: _activityBlock
@property (retain) PLEntry *activityEntry; // ivar: _activityEntry
@property (retain) NSArray *criteria; // ivar: _criteria
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (copy) id *interruptBlock; // ivar: _interruptBlock
@property (retain) NSDate *lastCompletedDate; // ivar: _lastCompletedDate
@property (retain) PLActivityCriterion *mustRunCriterion; // ivar: _mustRunCriterion
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)activityStatesEntryKey;
+(id)workQueue;
-(BOOL)allCriteriaSatisfied;
// -(id)initWithIdentifier:(id)arg0 withCriteria:(id)arg1 withMustRunCriterion:(id)arg2 withQueue:(id)arg3 withInterruptBlock:(id)arg4 withActivityBlock:(unk)arg5  ;
-(void)didChangeCriterion:(id)arg0 ;
-(void)disable;
-(void)enable;
-(void)enumerateCriteriaWithBlock:(id)arg0 ;
-(void)interruptActivity;
-(void)logEntry;
-(void)runActivity;
-(void)syncWithDB;


@end


#endif