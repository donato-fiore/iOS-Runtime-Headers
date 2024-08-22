// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTTESTSERVICE_H
#define BLTTESTSERVICE_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface BLTTestService : NSObject {
    NSXPCConnection *_connection;
}




+(id)sharedTestService;
-(id)init;
-(void)_connectIfNecessary;
-(void)addBulletin:(id)arg0 forFeed:(NSUInteger)arg1 playLightsAndSirens:(BOOL)arg2 attachment:(id)arg3 attachmentType:(NSInteger)arg4 alwaysSend:(BOOL)arg5 completion:(id)arg6 ;
-(void)addBulletin:(id)arg0 forFeed:(NSUInteger)arg1 playLightsAndSirens:(BOOL)arg2 attachment:(id)arg3 attachmentType:(NSInteger)arg4 completion:(id)arg5 ;
-(void)clearSectionInfoSentCacheWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)disableStandaloneTestModeWithCompletion:(id)arg0 ;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg0 maximumSendDelay:(NSUInteger)arg1 minimumResponseDelay:(NSUInteger)arg2 maximumResponseDelay:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)getStandaloneTestModeEnabledWithCompletion:(id)arg0 ;
-(void)logFaultWithCompletion:(id)arg0 ;
-(void)originalSettingsWithCompletion:(id)arg0 ;
-(void)overriddenSettingsWithCompletion:(id)arg0 ;
-(void)removeSectionID:(id)arg0 completion:(id)arg1 ;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg0 completion:(id)arg1 ;
-(void)sendSectionInfoWithSectionID:(id)arg0 completion:(id)arg1 ;
-(void)settingOverridesWithCompletion:(id)arg0 ;
-(void)simulateAnalytics:(id)arg0 completion:(id)arg1 ;
-(void)spoolSectionInfoWithCompletion:(id)arg0 ;
-(void)willAlertForSectionID:(id)arg0 subtype:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif