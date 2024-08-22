// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDEXTENSIONSESSION_H
#define FPDEXTENSIONSESSION_H

@class NSExtension, NSXPCConnection, NSUUID, NSCountedSet, NSMutableDictionary, NSMapTable, FPGracePeriodTimer, RBSAssertion, NSString;
@protocol FPDProcessMonitorDelegate, FPDExtensionSessionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDExtension.h"
#import "FPDDomain.h"
#import "FPDProcessMonitor.h"

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol>

 {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSMapTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    FPGracePeriodTimer *_gracePeriodTimer;
    FPGracePeriodTimer *_networkingGracePeriodTimer;
    FPDProcessMonitor *_processMonitor;
    int _notifyTokenForFramework;
    BOOL _invalidated;
    BOOL _isForeground;
    int _pid;
    RBSAssertion *_foregroundAssertion;
    RBSAssertion *_backgroundAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;
@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess; // ivar: _hasFileProviderPresenceTCCAccess
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_setUpConnectionWithError:(*id)arg0 ;
-(BOOL)terminateExtensionWithError:(*id)arg0 ;
-(id)_alternateContentsDictionary;
-(id)_connectionWithError:(*id)arg0 ;
-(id)existingFileProviderProxyWithTimeout:(CGFloat)arg0 onlyAlreadyLifetimeExtended:(BOOL)arg1 pid:(int)arg2 ;
-(id)initWithDomain:(id)arg0 extension:(id)arg1 queue:(id)arg2 ;
-(id)newAssertionWithAttributeName:(id)arg0 reason:(id)arg1 ;
-(id)newBackgroundAssertion;
-(id)newFileProviderProxyWithTimeout:(CGFloat)arg0 pid:(int)arg1 ;
-(id)newFileProviderProxyWithTimeoutValue:(CGFloat)arg0 pid:(int)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)newForegroundAssertion;
-(void)__invalidate;
-(void)_evaluateExtensionForegroundness;
-(void)_invalidate;
-(void)_invalidateExtensionIfPossible;
-(void)_networkingGracePeriodOver;
-(void)_notifyNetworkingProviderMonitorWithState:(BOOL)arg0 ;
-(void)_unregisterLifetimeExtensionForObject:(id)arg0 ;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)dumpStateTo:(id)arg0 ;
-(void)invalidate;
-(void)processMonitor:(id)arg0 didBecomeForeground:(BOOL)arg1 ;
-(void)registerLifetimeExtensionForObject:(id)arg0 ;
-(void)start;
-(void)terminateWithReason:(id)arg0 ;
-(void)unregisterLifetimeExtensionForObject:(id)arg0 ;
-(void)updatePresenceTCCWithAuditToken:(struct ? )arg0 ;


@end


#endif