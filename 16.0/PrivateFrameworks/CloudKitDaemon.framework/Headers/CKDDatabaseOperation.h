// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDDATABASEOPERATION_H
#define CKDDATABASEOPERATION_H



#import "CKDOperation.h"

@interface CKDDatabaseOperation : CKDOperation

@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope


-(BOOL)supportsClearAssetEncryption;
-(id)CKStatusReportProperties;
-(id)activityCreate;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(void)_encryptMergeableDeltas:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPCSData:(id)arg0 forFetchedRecordID:(id)arg1 ;
-(void)setPCSData:(id)arg0 forFetchedShareID:(id)arg1 ;
-(void)setPCSData:(id)arg0 forFetchedZoneID:(id)arg1 ;
-(void)spawnAndRunOperationOfClass:(Class)arg0 operationInfo:(id)arg1 spawnQueue:(id)arg2 container:(id)arg3 operationConfigurationBlock:(id)arg4 ;


@end


#endif