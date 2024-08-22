// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LDAPTASK_H
#define LDAPTASK_H

@class DADisableableObject, NSDate, NSString, DATaskManager;
@protocol DATask, OS_ldap_connection;



@interface LDAPTask : DADisableableObject <DATask>



@property (retain, nonatomic) NSDate *dateConnectionWentOut; // ivar: _dateConnectionWentOut
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (retain, nonatomic) NSObject<OS_ldap_connection> *ldConnection; // ivar: _ldConnection
@property (readonly, nonatomic) int numDownloadedElements;
@property (readonly) Class superclass;
@property (weak, nonatomic) DATaskManager *taskManager; // ivar: _taskManager


-(BOOL)shouldHoldPowerAssertion;
-(NSInteger)taskStatusForError:(id)arg0 ;
-(id)daLevelErrorForLDAPError:(int)arg0 ;
-(void)_performQuery;
-(void)cancelTaskWithReason:(int)arg0 underlyingError:(id)arg1 ;
-(void)dealloc;
-(void)disable;
-(void)finishWithError:(id)arg0 ;
-(void)initializeConnection;
-(void)performTask;
-(void)reportStatusWithError:(id)arg0 ;


@end


#endif