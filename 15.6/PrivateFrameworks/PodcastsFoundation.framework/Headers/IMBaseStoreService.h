// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMBASESTORESERVICE_H
#define IMBASESTORESERVICE_H

@class NSURLSessionConfiguration;
@protocol IMRequestEncoding;

#import <Foundation/Foundation.h>

#import "IMURLSession.h"

@interface IMBaseStoreService : NSObject

@property (retain, nonatomic) IMURLSession *amsUrlSession; // ivar: _amsUrlSession
@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSURLSessionConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL personalizeRequests; // ivar: _personalizeRequests
@property (retain, nonatomic) NSObject<IMRequestEncoding> *requestEncoder; // ivar: _requestEncoder
@property (nonatomic) BOOL wantsJSSignature; // ivar: _wantsJSSignature


+(BOOL)isValidResponseJson:(id)arg0 response:(id)arg1 error:(id)arg2 ;
+(BOOL)shouldFollowRedirects;
+(id)signatureQueryParams;
-(id)bag;
-(id)init;
-(id)initWithConcurrentOperationCount:(NSInteger)arg0 requestEncodingType:(NSUInteger)arg1 ;
-(void)cancelAllRequests;
-(void)performDataRequest:(id)arg0 account:(id)arg1 callback:(id)arg2 ;
-(void)performDataRequest:(id)arg0 callback:(id)arg1 ;
-(void)performRequest:(id)arg0 ;
-(void)performUrlRequest:(id)arg0 callback:(id)arg1 ;
-(void)setURLProtocolDelegate:(id)arg0 ;
-(void)signRequest:(id)arg0 ;


@end


#endif