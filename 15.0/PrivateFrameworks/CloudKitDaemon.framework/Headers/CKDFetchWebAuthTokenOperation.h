// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDFETCHWEBAUTHTOKENOPERATION_H
#define CKDFETCHWEBAUTHTOKENOPERATION_H

@class NSString;
@protocol CKFetchWebAuthTokenOperationCallbacks;


#import "CKDDatabaseOperation.h"

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation

@property (copy, nonatomic) NSString *APIToken; // ivar: _APIToken
@property (retain, nonatomic) NSObject<CKFetchWebAuthTokenOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSString *webAuthToken; // ivar: _webAuthToken


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)main;


@end


#endif