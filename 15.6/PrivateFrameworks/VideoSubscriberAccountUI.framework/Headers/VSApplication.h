// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAPPLICATION_H
#define VSAPPLICATION_H

@class IKAppContext, VSAuditToken, NSURL, NSHTTPCookieStorage, NSString, NSError, VSStateMachine;
@protocol IKAppContextDelegate, VSStateMachineDelegate, IKApplication, VSApplicationDelegate;

#import <Foundation/Foundation.h>

#import "VSAppDeviceConfig.h"

@interface VSApplication : NSObject <IKAppContextDelegate, VSStateMachineDelegate, IKApplication>



@property (retain, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) VSAppDeviceConfig *appDeviceConfig; // ivar: _appDeviceConfig
@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy, nonatomic) NSURL *bootURL; // ivar: _bootURL
@property (retain, nonatomic) NSHTTPCookieStorage *cookieStorage; // ivar: _cookieStorage
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSApplicationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *failureToStart; // ivar: _failureToStart
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldAllowRemoteInspection; // ivar: _shouldAllowRemoteInspection
@property (retain, nonatomic) VSStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(BOOL)appContext:(id)arg0 validateDOMDocument:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)appIsTrusted;
-(BOOL)shouldIgnoreJSValidation;
-(id)activeDocument;
-(id)appIdentifier;
-(id)appJSURL;
-(id)appLaunchParams;
-(id)deviceConfigForContext:(id)arg0 ;
-(id)init;
-(id)initWithBootURL:(id)arg0 ;
-(id)localStorage;
-(id)objectForMediaItem:(id)arg0 ;
-(id)objectForPlayer:(id)arg0 ;
-(id)objectForPlaylist:(id)arg0 ;
-(id)sourceApplicationAuditTokenDataForContext:(id)arg0 ;
-(id)sourceApplicationBundleIdentifierForContext:(id)arg0 ;
-(id)userDefaultsStorage;
-(id)vendorIdentifier;
-(id)vendorStorage;
-(id)viewElementRegistry;
-(id)xhrSessionConfigurationForContext:(id)arg0 ;
-(void)appContext:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appContext:(id)arg0 didStartWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 didStopWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)appDocumentForDocument:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
// -(void)evaluate:(id)arg0 completionHandler:(unk)arg1  ;
-(void)release;
-(void)sendErrorWithMessage:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)transitionToInvalidState;
-(void)transitionToNotifyingOfFailureToStartState;
-(void)transitionToReadyState;
-(void)transitionToStartingState;
-(void)transitionToStoppingState;
-(void)willPerformXhrRequest:(id)arg0 ;


@end


#endif