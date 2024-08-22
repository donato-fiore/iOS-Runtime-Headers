// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDAEMONFPFS_H
#define BRCDAEMONFPFS_H

@class NSXPCListener, NSMutableDictionary, NSOperationQueue, NSString, NSXPCListenerEndpoint, NSDate;
@protocol BRCReachabilityDelegate, NSXPCListenerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRCDaemonFPFS : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSXPCListener *_xpcListener;
    NSXPCListener *_tokenListener;
    BOOL _unitTestMode;
    BOOL _resumed;
    NSObject<OS_dispatch_queue> *_xpcListenersReadyQueue;
    NSObject<OS_dispatch_queue> *_accountReadyQueue;
    NSObject<OS_dispatch_queue> *_accountResumedQueue;
    NSObject<OS_dispatch_queue> *_startupQueue;
    int _serverAvailabilityNotifyToken;
    NSObject<OS_dispatch_queue> *_accountLoaderQueue;
    NSMutableDictionary *_shareAcceptOperationsByToken;
    NSMutableDictionary *_shareAcceptWaitersByToken;
    NSObject<OS_dispatch_source> *_acceptWaiterTimer;
    NSOperationQueue *_shareAcceptQueue;
}


@property (retain, nonatomic) Class containerClass; // ivar: _containerClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAccountChangesHandling; // ivar: _disableAccountChangesHandling
@property (nonatomic) BOOL disableAppsChangesHandling; // ivar: _disableAppsChangesHandling
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) NSUInteger forceIsGreedyState; // ivar: _forceIsGreedyState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startupDate; // ivar: _startupDate
@property (readonly) Class superclass;


+(BOOL)isDaemonRunning;
+(id)UTIForExtension:(id)arg0 ;
+(id)daemon;
-(BOOL)_haveRequiredKernelFeatures;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)selfCheck:(struct __sFILE *)arg0 ;
-(NSUInteger)nonPurgeableSizeForSession:(id)arg0 givenPurgeableSize:(NSUInteger)arg1 ;
-(id)currentAccountHandler;
-(id)currentSession;
-(id)getCurrentSessionMustFinishedLoading:(BOOL)arg0 ;
-(id)init;
-(id)registerShareAcceptOperation:(id)arg0 forURL:(id)arg1 ;
-(void)_finishStartup;
-(void)_initSignals;
-(void)_setDoneXpcActivity:(id)arg0 description:(id)arg1 ;
-(void)_setupCacheDelete;
-(void)_setupVNodeRapidAging;
-(void)_startXPCListeners;
-(void)_startupAndLoadAccount;
-(void)dumpToContext:(id)arg0 ;
-(void)exitWithCode:(int)arg0 ;
-(void)handleExitSignal:(int)arg0 ;
-(void)localeDidChange;
-(void)networkReachabilityChanged:(BOOL)arg0 ;
-(void)networkReachabilityFlagsChanged:(unsigned int)arg0 ;
-(void)performWithSessionForVolume:(id)arg0 action:(id)arg1 ;
// -(void)registerWaiterBlock:(id)arg0 forShareURL:(unk)arg1  ;
-(void)restart;
-(void)resumeIPCAcceptation;
-(void)setUpAnonymousListener;
-(void)setUpSandbox;
-(void)start;
-(void)startedUpInSyncBubble;
-(void)suspendIPCAcceptation;
-(void)waitForConfiguration;
-(void)waitOnAccountResumedQueue;


@end


#endif