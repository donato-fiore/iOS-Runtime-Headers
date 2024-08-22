// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ELSMANAGER_H
#define ELSMANAGER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>

#import "ELSSnapshot.h"

@interface ELSManager : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) ELSSnapshot *snapshot; // ivar: _snapshot


+(id)sharedManager;
-(BOOL)commitConsentTransaction:(id)arg0 ;
-(BOOL)commitDatesTransaction:(id)arg0 ;
-(BOOL)commitFollowUpOptions:(id)arg0 ;
-(BOOL)commitIdentifiersToRetryTransaction:(id)arg0 ;
-(BOOL)commitMetadataTransaction:(id)arg0 ;
-(BOOL)commitQueueTransaction:(id)arg0 ;
-(BOOL)commitRetriesRemainingTransaction:(id)arg0 ;
-(BOOL)commitStatusTransaction:(id)arg0 ;
-(BOOL)commitUploadCompletedPercentage:(id)arg0 ;
-(BOOL)object:(id)arg0 isEqualToObject:(id)arg1 ;
-(id)initSingleton;
-(void)beginUpdates;
-(void)commitBatchTransaction:(id)arg0 ;
-(void)dealloc;
-(void)finish;
-(void)finishWithCompletion:(id)arg0 ;
-(void)finishWithFailure;
-(void)finishWithFailureBlock:(id)arg0 ;
-(void)flush;
-(void)flushWithCompletion:(id)arg0 ;
-(void)getBugSessionActivityWithCompletion:(id)arg0 ;
-(void)refreshWithCompletion:(id)arg0 ;
-(void)transactionWithBlock:(id)arg0 ;
// -(void)transactionWithBlock:(id)arg0 completion:(unk)arg1  ;


@end


#endif