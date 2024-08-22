// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADSERVER_H
#define ADSERVER_H

@class NSDictionary, NSString, NSURLSession;
@protocol NSURLSessionDelegate;


#import "ADSingleton.h"

@interface ADServer : ADSingleton <NSURLSessionDelegate>



@property int configurationExpirationTime; // ivar: _configurationExpirationTime
@property (retain) NSDictionary *configurations; // ivar: _configurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *resourceConnectProxyURL; // ivar: _resourceConnectProxyURL
@property (retain) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)workQueue;
+(void)initialize;
-(BOOL)shouldRestoreConfiguration;
-(id)deserializeMessage:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)routingHeaderForClass:(Class)arg0 serverURL:(id)arg1 ;
-(id)serializeMessage:(id)arg0 ;
-(id)serverURLForMessageClass:(Class)arg0 serverURL:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)buildConfigurationDictionary:(id)arg0 ;
-(void)handleRequest:(id)arg0 serverURL:(id)arg1 responseHandler:(id)arg2 ;
-(void)restoreConfiguration;
-(void)saveConfig;
-(void)saveProxyURL;


@end


#endif