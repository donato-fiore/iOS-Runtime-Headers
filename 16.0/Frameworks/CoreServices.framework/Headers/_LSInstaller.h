// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSINSTALLER_H
#define _LSINSTALLER_H

@class NSString, NSXPCConnection;
@protocol LSInstallationServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // ivar: _databaseQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)dispatchRegistrationOfInstallDict:(id)arg0 ;
-(BOOL)registerBundle:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)unregisterBundle:(id)arg0 placeholderOnly:(BOOL)arg1 notification:(*int)arg2 ;
-(BOOL)validateEntitlementsForInstallCall:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)invokeInstallCall:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)invokeUninstallCall:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(void)_doPerformInstallCall:(id)arg0 withOptions:(id)arg1 installType:(NSUInteger)arg2 notificationJournaller:(id)arg3 reply:(id)arg4 ;
-(void)_doPerformUninstallCall:(id)arg0 withOptions:(id)arg1 uninstallType:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)_postProcessingForApp:(id)arg0 type:(id)arg1 notification:(int)arg2 ;
-(void)_preflightAppDeletion:(id)arg0 ;
-(void)finishInstallationWithInstalledBundleIDs:(id)arg0 lastWasPlaceholder:(BOOL)arg1 installationError:(id)arg2 replyBlock:(id)arg3 ;
-(void)performInstallCall:(id)arg0 withOptions:(id)arg1 installType:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)performShimmedInstallOfArtifact:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)performShimmedUninstallOfApplicationWithIdentifier:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)performUninstallCall:(id)arg0 withOptions:(id)arg1 uninstallType:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)sendCallbackDeliveryComplete;
-(void)sendCallbackWithDictionary:(id)arg0 ;


@end


#endif