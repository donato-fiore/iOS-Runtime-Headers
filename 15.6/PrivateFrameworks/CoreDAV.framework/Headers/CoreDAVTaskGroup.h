// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVTASKGROUP_H
#define COREDAVTASKGROUP_H

@class NSString, NSError, NSMutableSet;
@protocol CoreDAVSubmittable, CoreDAVAccountInfoProvider, CoreDAVTaskGroupDelegate, CoreDAVTaskManager;

#import <Foundation/Foundation.h>


@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable>

 {
    BOOL _isCancelling;
    BOOL _isTearingDown;
    BOOL _isFinished;
}


@property (weak, nonatomic) NSObject<CoreDAVAccountInfoProvider> *accountInfoProvider; // ivar: _accountInfoProvider
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVTaskGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *outstandingTasks; // ivar: _outstandingTasks
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CoreDAVTaskManager> *taskManager; // ivar: _taskManager
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 ;
-(void)_tearDownAllTasks;
-(void)bailWithError:(id)arg0 ;
-(void)cancelTaskGroup;
-(void)dealloc;
-(void)finishCoreDAVTaskGroupWithError:(id)arg0 ;
-(void)finishCoreDAVTaskGroupWithError:(id)arg0 delegateCallbackBlock:(id)arg1 ;
-(void)finishEarlyWithError:(id)arg0 ;
-(void)startTaskGroup;
-(void)submitWithTaskManager:(id)arg0 ;
-(void)syncAway;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif