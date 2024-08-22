// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDCODELOCALFUNCTIONINVOKEURLREQUEST_H
#define CKDCODELOCALFUNCTIONINVOKEURLREQUEST_H

@class NSString, NSURL, NSData;


#import "CKDURLRequest.h"

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (copy, nonatomic) NSURL *resolvedBaseURL; // ivar: _resolvedBaseURL
@property (retain, nonatomic) NSData *serializedParameters; // ivar: _serializedParameters
@property (copy, nonatomic) id *serializedResultsCallback; // ivar: _serializedResultsCallback
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName


-(BOOL)allowsAnonymousAccount;
-(BOOL)parsingStandaloneMessage;
-(BOOL)requestGETPreAuth;
-(BOOL)shouldCompressBody;
-(Class)expectedResponseClass;
-(Class)requestMessageClass;
-(NSInteger)databaseScope;
-(NSInteger)partitionType;
-(NSInteger)serverType;
-(id)additionalHeaderValues;
-(id)initWithOperation:(id)arg0 serviceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 resolvedBaseURL:(id)arg4 ;
-(id)requestBodyStream;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)url;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif