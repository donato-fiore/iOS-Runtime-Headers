// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCENDPOINTOPERATION_H
#define RCENDPOINTOPERATION_H

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue;


#import "RCOperation.h"
#import "RCConfigurationSettings.h"

@interface RCEndpointOperation : RCOperation

@property (retain, nonatomic) NSDictionary *changeTagsByRequestKey; // ivar: _changeTagsByRequestKey
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (copy, nonatomic) id *configurationCompletionHandler; // ivar: _configurationCompletionHandler
@property (retain, nonatomic) NSDictionary *configurationResourcesByRequestKey; // ivar: _configurationResourcesByRequestKey
@property (retain, nonatomic) RCConfigurationSettings *configurationSettings; // ivar: _configurationSettings
@property (retain, nonatomic) NSURL *endpointURL; // ivar: _endpointURL
@property (copy, nonatomic) id *networkEventHandler; // ivar: _networkEventHandler


-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)validateOperation;
-(NSUInteger)maxRetries;
-(id)_configurationErrorForErrorDicts:(id)arg0 ;
-(id)requestDataForSettings:(id)arg0 ;
-(void)_fetchConfigurationWithSettings:(id)arg0 ;
-(void)_parseEndpointResponse:(id)arg0 configurationSettings:(id)arg1 maxAge:(id)arg2 completion:(id)arg3 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif