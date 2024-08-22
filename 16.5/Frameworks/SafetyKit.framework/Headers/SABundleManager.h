// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SABUNDLEMANAGER_H
#define SABUNDLEMANAGER_H

@protocol SAApplicationLauncher, OS_tcc_server, OS_tcc_service, OS_tcc_message_options;

#import <Foundation/Foundation.h>


@interface SABundleManager : NSObject {
    id<SAApplicationLauncher> *_applicationLauncher;
    NSObject<OS_tcc_server> *_server;
    NSObject<OS_tcc_service> *_service;
    NSObject<OS_tcc_message_options> *_options;
}




+(id)approvedBundleIdsForService:(struct __CFString *)arg0 ;
+(id)bundleURLForAuditToken:(struct ? )arg0 ;
+(id)bundleURLForCurrentConnection;
+(id)crashDetectionManager;
+(id)locationBundle;
+(id)reasonToAttributeName:(NSInteger)arg0 ;
+(id)remoteApplicationWithBundleId:(id)arg0 error:(*id)arg1 ;
+(void)getRemoteApplicationNameWithBundleId:(id)arg0 withCompletion:(id)arg1 ;
-(id)approvedApps;
-(id)initWithServiceName:(struct __CFString *)arg0 ;
-(id)pairedDeviceBundleIdForId:(id)arg0 ;
-(void)openApplicationInBackgroundWithBundleId:(id)arg0 withReason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)openApplicationInForegroundWithBundleId:(id)arg0 withReason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)wakeApprovedAppsWithReason:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif