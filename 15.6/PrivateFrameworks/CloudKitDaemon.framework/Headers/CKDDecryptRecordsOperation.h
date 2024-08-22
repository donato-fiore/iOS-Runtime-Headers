// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDDECRYPTRECORDSOPERATION_H
#define CKDDECRYPTRECORDSOPERATION_H

@class NSMutableArray, NSDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;


#import "CKDDatabaseOperation.h"

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation

@property (nonatomic) BOOL forcePCSDecrypt; // ivar: _forcePCSDecrypt
@property (getter=isMarkedToFinish) BOOL markedToFinish; // ivar: _markedToFinish
@property (nonatomic) NSUInteger maxUnwrapAttempts; // ivar: _maxUnwrapAttempts
@property (retain, nonatomic) NSMutableArray *outstandingDecryptions; // ivar: _outstandingDecryptions
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // ivar: _recordDecryptGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue; // ivar: _recordDecryptQueue
@property (getter=isStarted) BOOL started; // ivar: _started
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // ivar: _webSharingIdentityDataByRecordID


-(BOOL)operationShouldBeFlowControlled;
-(BOOL)shouldCheckAppVersion;
-(BOOL)supportsClearAssetEncryption;
-(id)_decryptRecordPCSForRecord:(id)arg0 usingChainPCS:(id)arg1 ;
-(id)_decryptRecordPCSForRecord:(id)arg0 usingSharePCS:(id)arg1 ;
-(id)_decryptRecordPCSForRecord:(id)arg0 usingZonePCS:(id)arg1 ;
-(id)_possiblyWrapError:(id)arg0 forRecordWithID:(id)arg1 withCode:(NSInteger)arg2 format:(id)arg3 ;
-(id)_unwrapAssetKeyForAsset:(id)arg0 inRecordWithID:(id)arg1 forField:(id)arg2 withPCS:(struct _OpaquePCSShareProtection *)arg3 ;
-(id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)_unwrapEncryptedPropertiesOnRecord:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(id)_unwrapPackageAssets:(id)arg0 inRecordWithID:(id)arg1 forField:(id)arg2 withPCS:(struct _OpaquePCSShareProtection *)arg3 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(void)_clearProtectionDataForRecordInfo:(id)arg0 ;
-(void)_decryptRecordInfo:(id)arg0 ;
-(void)_decryptRecordInfo:(id)arg0 usingWebSharingIdentityData:(id)arg1 ;
-(void)_finishDecryptOperation;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleProtectionDataForRecordInfo:(id)arg0 ;
-(void)_handleShareProtectionDataForRecordInfo:(id)arg0 ;
-(void)_handleZoneProtectionDataForRecordInfo:(id)arg0 ;
-(void)_recordInfoWasDecrypted:(id)arg0 nextSteps:(id)arg1 ;
-(void)decryptRecord:(id)arg0 withCompletion:(id)arg1 ;
-(void)finishDecryption;
-(void)main;


@end


#endif