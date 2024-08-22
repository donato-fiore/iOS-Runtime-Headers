// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSDAEMONCONNECTION_H
#define CPSDAEMONCONNECTION_H

@class NSString, NSXPCConnection;
@protocol CPSSessionObserving, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPSSessionProxy.h"

@interface CPSDaemonConnection : NSObject <CPSSessionObserving>

 {
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPSSessionProxy *sessionProxy; // ivar: _sessionProxy
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (readonly, nonatomic) NSXPCConnection *xpcConnectionNotEntitled; // ivar: _xpcConnectionNotEntitled


+(id)sharedConnection;
-(id)init;
-(void)cancelPrewarmingClipWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)checkAndConsumeShowsAppAttributionBannerForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)confirmLocationWithURL:(id)arg0 inRegion:(id)arg1 completion:(id)arg2 ;
-(void)didDetermineAvailability:(BOOL)arg0 options:(id)arg1 ;
-(void)didFinishLoadingWithError:(id)arg0 ;
-(void)didFinishTestingAtTime:(CGFloat)arg0 ;
-(void)didInstallApplicationPlaceholder;
-(void)didRetrieveApplicationIcon:(id)arg0 ;
-(void)didRetrieveBusinessIcon:(id)arg0 ;
-(void)didRetrieveHeroImage:(id)arg0 ;
-(void)didUpdateInstallProgress:(id)arg0 ;
-(void)didUpdateMetadata:(id)arg0 ;
-(void)fetchClipMetadataAndImagesWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchClipMetadataWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchClipURLWithURLHash:(id)arg0 completionHandler:(id)arg1 ;
-(void)getLastLaunchOptionsWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)getUserNotificationConsentForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)installClipWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)isClipURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)notifyWebClipActivationWithBundleID:(id)arg0 referrerBundleID:(id)arg1 ;
-(void)openClipWithInvocationUIIfNeededWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)openClipWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)openClipWithURL:(id)arg0 launchOptions:(id)arg1 completion:(id)arg2 ;
-(void)performValidationWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)prewarmClipWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerSessionProxy:(id)arg0 ;
-(void)remoteServiceDidCrash;
-(void)stopStallingCurrentInstallationWithCompletionHandler:(id)arg0 ;
-(void)uninstallClipWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)uninstallClipsWithBundleIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)unregisterSessionProxy:(id)arg0 ;


@end


#endif