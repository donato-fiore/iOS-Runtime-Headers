// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTURLREQUESTMESSAGE_H
#define FTURLREQUESTMESSAGE_H

@class NSData, NSDictionary, NSURL, NSNumber;
@protocol NSCopying;


#import "FTIDSMessage.h"

@interface FTURLRequestMessage : FTIDSMessage <NSCopying>



@property (copy, nonatomic) NSData *requestBody; // ivar: _requestBody
@property (copy, nonatomic) NSDictionary *requestHeaders; // ivar: _requestHeaders
@property (copy, nonatomic) NSDictionary *requestStringParams; // ivar: _requestStringParams
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (copy, nonatomic) NSURL *requestURL; // ivar: _requestURL
@property (copy, nonatomic) NSData *responseBody; // ivar: _responseBody
@property (copy, nonatomic) NSDictionary *responseHeaders; // ivar: _responseHeaders
@property (copy, nonatomic) NSNumber *responseStatusCode; // ivar: _responseStatusCode
@property (copy, nonatomic) NSDictionary *timingData; // ivar: _timingData


-(BOOL)allowDualDelivery;
-(BOOL)isIDSMessage;
-(BOOL)wantsBodySignature;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsIDSServer;
-(BOOL)wantsIDSSignatures;
-(BOOL)wantsManagedRetries;
-(id)additionalMessageHeaders;
-(id)additionalQueryStringParameters;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURL:(id)arg0 type:(NSUInteger)arg1 headers:(id)arg2 stringParams:(id)arg3 body:(id)arg4 ;
-(id)messageBodyDataOverride;
-(void)handleResponseBody:(id)arg0 ;
-(void)handleResponseHeaders:(id)arg0 ;
-(void)handleResponseStatus:(NSUInteger)arg0 ;


@end


#endif