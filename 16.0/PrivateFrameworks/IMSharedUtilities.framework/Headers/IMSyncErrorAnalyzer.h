// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSYNCERRORANALYZER_H
#define IMSYNCERRORANALYZER_H


#import <Foundation/Foundation.h>


@interface IMSyncErrorAnalyzer : NSObject



+(id)sharedInstance;
-(BOOL)CKPartialError:(id)arg0 hasErrorCode:(id)arg1 ;
-(BOOL)CKPartialError:(id)arg0 onlyHasErrorCodes:(id)arg1 ;
-(BOOL)_isCKErrorPartialFailure:(id)arg0 ;
-(BOOL)acceptableErrorCodeWhileDeleting:(id)arg0 ;
-(BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg0 ;
-(BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg0 ;
-(BOOL)errorIndicatesIdentityWasLost:(id)arg0 ;
-(BOOL)errorIndicatesMaxAttemptsFailed:(id)arg0 ;
-(BOOL)errorIndicatesQuotaExceeded:(id)arg0 ;
-(BOOL)errorIndicatesUserDeletedZone:(id)arg0 ;
-(BOOL)errorIndicatesZoneNotCreated:(id)arg0 ;
-(NSInteger)responseForError:(id)arg0 attempt:(NSUInteger)arg1 retryInterval:(*id)arg2 ;
-(NSUInteger)calculateDelay:(NSUInteger)arg0 forAttempt:(NSUInteger)arg1 maxInterval:(NSUInteger)arg2 ;
-(id)_errorsFromPartialError:(id)arg0 ;
-(id)extractRecordIDsDeletedFromCKPartialError:(id)arg0 ;
-(id)extractRecordIDsNotFoundFromCKPartialError:(id)arg0 ;


@end


#endif