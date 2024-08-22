// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMODIFYWEBSHARINGOPERATION_H
#define CKMODIFYWEBSHARINGOPERATION_H

@class NSMutableDictionary, NSArray, NSMutableArray;
@protocol CKModifyWebSharingOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKModifyWebSharingOperationInfo.h"

@interface CKModifyWebSharingOperation : CKDatabaseOperation <CKModifyWebSharingOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKModifyWebSharingOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyWebSharingOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *recordErrors; // ivar: _recordErrors
@property (retain, nonatomic) NSArray *recordIDsToShare; // ivar: _recordIDsToShare
@property (copy, nonatomic) NSArray *recordIDsToShareReadWrite; // ivar: _recordIDsToShareReadWrite
@property (retain, nonatomic) NSArray *recordIDsToUnshare; // ivar: _recordIDsToUnshare
@property (copy, nonatomic) id *recordSharedBlock; // ivar: _recordSharedBlock
@property (copy, nonatomic) id *recordUnsharedBlock; // ivar: _recordUnsharedBlock
@property (retain, nonatomic) NSMutableArray *sharedRecordIDs; // ivar: _sharedRecordIDs
@property (retain, nonatomic) NSMutableArray *unsharedRecordIDs; // ivar: _unsharedRecordIDs
@property (copy, nonatomic) id *webShareRecordsCompletionBlock; // ivar: _webShareRecordsCompletionBlock


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithRecordIDsToWebShare:(id)arg0 recordIDsToUnshare:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleWebSharingInitiationForRecordID:(id)arg0 sharingKey:(id)arg1 baseSharingToken:(id)arg2 error:(id)arg3 ;
-(void)handleWebSharingRevocationForRecordID:(id)arg0 error:(id)arg1 ;


@end


#endif