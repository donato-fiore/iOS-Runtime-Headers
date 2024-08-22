// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHUSERQUOTAOPERATION_H
#define CKDFETCHUSERQUOTAOPERATION_H

@protocol CKFetchUserQuotaOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSObject<CKFetchUserQuotaOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) NSUInteger quotaAvailable; // ivar: _quotaAvailable


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)main;


@end


#endif