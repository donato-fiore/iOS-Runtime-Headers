// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAREMOTESERVER_H
#define AAREMOTESERVER_H

@class NSString;
@protocol AARemoteServerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AARemoteServerConfigurationCache.h"
#import "AAURLSession.h"

@interface AARemoteServer : NSObject <AARemoteServerProtocol>

 {
    os_unfair_lock_s _configurationLock;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AARemoteServerConfigurationCache *_configurationCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AAURLSession *session; // ivar: _session
@property (retain, nonatomic) AAURLSession *signingSession; // ivar: _signingSession
@property (readonly) Class superclass;


+(id)sharedServer;
-(id)_bodyDictionaryWithProtocolVersion:(id)arg0 ;
-(id)_configurationCacheInvalidatingIfNecessary;
-(id)_configurationLock_configurationCacheInvalidatingIfNecessary;
-(id)_newURLRequestWithURLString:(id)arg0 ;
-(id)_redactedBodyStringWithPropertyList:(id)arg0 ;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg0 ;
-(id)init;
-(void)_configurationAndResponseWithCompletion:(id)arg0 ;
-(void)_fetchConfigurationAndResponseWithCompletion:(id)arg0 ;
-(void)_setConfigurationCache:(id)arg0 ;
-(void)_startRequest:(id)arg0 responseClass:(Class)arg1 mainThread:(BOOL)arg2 completion:(id)arg3 ;
-(void)authenticateAccount:(id)arg0 completion:(id)arg1 ;
-(void)configurationWithCompletion:(id)arg0 ;
-(void)loginDelegates:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)registerAccount:(id)arg0 withHSA:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif