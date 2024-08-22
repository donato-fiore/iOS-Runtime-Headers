// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCENDPOINTCONNECTION_H
#define FCENDPOINTCONNECTION_H

@class NSString, NSURLSession;
@protocol NSURLSessionDelegate, FCCoreConfigurationObserving, FCEndpointConnectionType;

#import <Foundation/Foundation.h>

#import "FCNetworkBehaviorMonitor.h"

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCCoreConfigurationObserving, FCEndpointConnectionType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // ivar: _networkBehaviorMonitor
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)errorForStatus:(NSInteger)arg0 url:(id)arg1 ;
-(id)init;
-(id)initWithNetworkBehaviorMonitor:(id)arg0 ;
-(id)initWithSourceApplicationBundleIdentifier:(id)arg0 ;
-(id)initWithSourceApplicationBundleIdentifier:(id)arg0 networkBehaviorMonitor:(id)arg1 ;
-(void)performAuthenticatedHTTPRequestWithURL:(id)arg0 valuesByHTTPHeaderField:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 reauthenticateIfNeeded:(BOOL)arg6 callbackQueue:(id)arg7 completion:(id)arg8 ;
-(void)performAuthenticatedHTTPRequestWithURL:(id)arg0 valuesByHTTPHeaderField:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 reauthenticateIfNeeded:(BOOL)arg6 networkEventType:(int)arg7 callbackQueue:(id)arg8 completion:(id)arg9 ;
-(void)performHTTPRequestWithURL:(id)arg0 method:(id)arg1 data:(id)arg2 contentType:(id)arg3 priority:(float)arg4 requiresMescalSigning:(BOOL)arg5 callbackQueue:(id)arg6 completion:(id)arg7 ;
-(void)performHTTPRequestWithURL:(id)arg0 method:(id)arg1 data:(id)arg2 contentType:(id)arg3 priority:(float)arg4 requiresMescalSigning:(BOOL)arg5 networkEventType:(int)arg6 callbackQueue:(id)arg7 completion:(id)arg8 ;
-(void)performHTTPRequestWithURL:(id)arg0 valuesByHTTPHeaderField:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 callbackQueue:(id)arg7 completion:(id)arg8 ;
-(void)performHTTPRequestWithURL:(id)arg0 valuesByHTTPHeaderField:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 networkEventType:(int)arg7 callbackQueue:(id)arg8 completion:(id)arg9 ;
-(void)performHTTPRequestWithURL:(id)arg0 valuesByHTTPHeaderField:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 requiresAuthKitHeaders:(BOOL)arg7 networkEventType:(int)arg8 callbackQueue:(id)arg9 completion:(id)arg10 ;


@end


#endif