// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDCODEFUNCTIONINVOKEURLREQUEST_H
#define CKDCODEFUNCTIONINVOKEURLREQUEST_H

@class NSData, NSString, NSArray;


#import "CKDURLRequest.h"
#import "CKDTrustedTargetWrappedKey.h"

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *attestationEntropy; // ivar: _attestationEntropy
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (copy, nonatomic) NSArray *pccWrappedInvocationKeys; // ivar: _pccWrappedInvocationKeys
@property (retain, nonatomic) NSData *serializedParameters; // ivar: _serializedParameters
@property (copy, nonatomic) id *serializedResultsCallback; // ivar: _serializedResultsCallback
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (copy, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedInvocationKey; // ivar: _trustedTargetWrappedInvocationKey


-(BOOL)allowsAnonymousAccount;
-(BOOL)requestGETPreAuth;
-(NSInteger)databaseScope;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 serviceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 attestationEntropy:(id)arg4 pccWrappedInvocationKeys:(id)arg5 trustedTargetWrappedInvocationKey:(id)arg6 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif