// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYCHANNEL_H
#define OSPREYCHANNEL_H

@class NSURL, NSURLSessionConfiguration, NSError, NSString;
@protocol OspreyRPC, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "OspreyGRPCChannel.h"
#import "OspreyDeviceAuthentication.h"
#import "OspreyPreferences.h"
#import "OspreyConnectionPreferences.h"
#import "OspreyChannelRequestOptions.h"

@interface OspreyChannel : NSObject <OspreyRPC>

 {
    NSURL *_url;
    NSURLSessionConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    OspreyGRPCChannel *_channel;
    OspreyDeviceAuthentication *_deviceAuthenticator;
    NSObject<OS_dispatch_group> *_validationGroup;
    BOOL _waitingForSignature;
    NSError *_signatureError;
    OspreyPreferences *_preferences;
    OspreyConnectionPreferences *_connectionPreferences;
    OspreyChannelRequestOptions *_defaultRequestOptions;
}


@property (copy, nonatomic) NSString *clientTraceId; // ivar: _clientTraceId
@property (copy, nonatomic) id *connectionMetricsHandler; // ivar: _connectionMetricsHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableDeviceAuthentication; // ivar: _enableDeviceAuthentication
@property (nonatomic) BOOL forceHTTPv2;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useAbsinthe;


-(id)_buildRequestWithMethodName:(id)arg0 requestBuilder:(id)arg1 ;
// -(id)bidirectionalStreamingRequestWithMethodName:(id)arg0 requestBuilder:(id)arg1 streamingResponseHandler:(unk)arg2 completion:(id)arg3  ;
// -(id)clientStreamingRequestWithMethodName:(id)arg0 requestBuilder:(id)arg1 responseHandler:(unk)arg2  ;
-(id)getConnectionMetricsHandler:(SEL)arg0 ;
-(id)initWithURL:(id)arg0 configuration:(id)arg1 ;
-(id)initWithURL:(id)arg0 configuration:(id)arg1 useCache:(BOOL)arg2 ;
-(void)_prepareChannelWithRequest:(id)arg0 continueWith:(id)arg1 ;
-(void)_prepareDeviceAuthenticationWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)initializeAbsintheSessionWithCompletion:(id)arg0 ;
-(void)initializeDeviceAuthenticationSessionWithCompletion:(id)arg0 ;
-(void)ocp_setAssociatedHandle:(id)arg0 ;
// -(void)performBidirectionalStreamingRequest:(id)arg0 handler:(id)arg1 completion:(unk)arg2  ;
-(void)performRequest:(id)arg0 handler:(id)arg1 ;
-(void)preconnect;
// -(void)serverStreamingRequestWithMethodName:(id)arg0 requestData:(id)arg1 requestBuilder:(id)arg2 streamingResponseHandler:(unk)arg3 completion:(id)arg4  ;
-(void)setUseCompression:(BOOL)arg0 ;
// -(void)unaryRequestWithMethodName:(id)arg0 requestData:(id)arg1 requestBuilder:(id)arg2 responseHandler:(unk)arg3  ;


@end


#endif