// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13NEWSANALYTICS15SESSIONOBSERVER_H
#define _TTC13NEWSANALYTICS15SESSIONOBSERVER_H

@class NSString;
@protocol FCBundleSubscriptionChangeObserver, FCCoreConfigurationObserving, FCUserInfoObserving, FCNewsletterSubscriptionObserver, FCSubscriptionObserving;

#import <Foundation/Foundation.h>


@interface _TtC13NewsAnalytics15SessionObserver : NSObject <FCBundleSubscriptionChangeObserver, FCCoreConfigurationObserving, FCUserInfoObserving, FCNewsletterSubscriptionObserver, FCSubscriptionObserving>

 {
    ? sessionManager;
    ? cloudContext;
    ? client;
    ? fsidProvider;
    ? onboardingVersion;
    ? appExtensionCommunicator;
    ? kind;
    ? tracker;
    ? sessionStartSource;
    ? window;
    ? sceneSessionIdentifier;
}


@property (nonatomic, copy) NSString *sceneSessionIdentifier;


-(id)init;
-(void)bundleSubscriptionDidChange:(id)arg0 previousBundleSubscription:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg0 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg0 ;
-(void)configurationManagerScienceExperimentFieldsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)familySharingStatusDidChange:(id)arg0 ;
-(void)newsletterSubscriptionChangedFromSubscription:(NSInteger)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)offerDidChange:(id)arg0 ;
-(void)pushContentEnvironmentData;
-(void)pushMobileData;
-(void)pushOrientationData;
-(void)pushSessionDataWithRegionIDs:(id)arg0 notificationSettings:(id)arg1 ;
-(void)pushUserSubscriptionContextData;
-(void)subscriptionController:(id)arg0 didAddTags:(id)arg1 changeTags:(id)arg2 moveTags:(id)arg3 removeTags:(id)arg4 subscriptionType:(NSUInteger)arg5 eventInitiationLevel:(NSInteger)arg6 ;
-(void)userInfoDidChangeAdsUserID:(id)arg0 fromCloud:(BOOL)arg1 ;
-(void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg0 fromCloud:(BOOL)arg1 ;
-(void)userInfoDidChangeFeldsparID:(id)arg0 fromCloud:(BOOL)arg1 ;
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg0 fromCloud:(BOOL)arg1 ;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg0 fromCloud:(BOOL)arg1 ;


@end


#endif