// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUBCALDATASK_H
#define SUBCALDATASK_H

@class NSString, DAStatusReport, DATaskManager;
@protocol DATask;

#import <Foundation/Foundation.h>


@interface SubCalDATask : NSObject <DATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DAStatusReport *statusReport; // ivar: _statusReport
@property (readonly) Class superclass;
@property (weak, nonatomic) DATaskManager *taskManager; // ivar: _taskManager


-(BOOL)shouldHoldPowerAssertion;
-(id)consumerDictKey;
-(void)cancelTaskWithReason:(int)arg0 underlyingError:(id)arg1 ;
-(void)didFinish;
-(void)finishWithError:(id)arg0 ;
-(void)performDelegateCallbackWithError:(id)arg0 ;
-(void)performTask;
-(void)willFinish;


@end


#endif