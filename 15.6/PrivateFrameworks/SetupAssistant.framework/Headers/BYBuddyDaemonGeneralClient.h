// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYBUDDYDAEMONGENERALCLIENT_H
#define BYBUDDYDAEMONGENERALCLIENT_H

@class NSLock, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface BYBuddyDaemonGeneralClient : NSObject {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}




+(id)factory:(SEL)arg0 ;
-(BOOL)setupAssistantNeedsToRun;
-(id)_daemonConnection;
-(id)backupMetadata;
-(id)fetchAuthenticationContextForApplePay;
-(id)fetchAuthenticationContextForBiometric;
-(id)init;
-(void)cancelDataMigratorDeferredExit;
-(void)cancelInternalSkipInfo;
-(void)deferDataMigratorExit;
-(void)enrollInSeedProgramNamed:(id)arg0 withAssetAudience:(id)arg1 ;
-(void)ensureShortLivedTokenUpgrade;
-(void)ensureSilentLoginUpgrade;
-(void)getInternalSkipInfo:(id)arg0 ;
-(void)observeFinishSetupTriggers;
-(void)performSilentICDPUpgrade;
-(void)setInternalShouldSkipFlows:(BOOL)arg0 skipExceptions:(id)arg1 ;
-(void)startExpressSettingsUpload;
-(void)storeAuthenticationContextforApplyPay:(id)arg0 ;
-(void)storeAuthenticationContextforBiometric:(id)arg0 ;


@end


#endif