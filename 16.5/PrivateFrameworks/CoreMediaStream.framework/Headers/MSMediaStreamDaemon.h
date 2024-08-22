// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSMEDIASTREAMDAEMON_H
#define MSMEDIASTREAMDAEMON_H

@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;


#import "MSDaemon.h"

@interface MSMediaStreamDaemon : MSDaemon {
    NSCountedSet *_retainedObjects;
}


@property (nonatomic) NSObject<MSMediaStreamDaemonDelegate> *delegate; // ivar: _delegate


-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg0 personID:(id)arg1 outError:(*id)arg2 ;
-(BOOL)enqueueAssetCollection:(id)arg0 personID:(id)arg1 outError:(*id)arg2 ;
-(BOOL)hasOutstandingActivity;
-(BOOL)isInRetryState;
-(BOOL)mayDownloadPersonID:(id)arg0 ;
-(BOOL)personIDHasOutstandingPublications:(id)arg0 ;
-(id)_boundDeleterForPersonID:(id)arg0 ;
-(id)_boundPublisherForPersonID:(id)arg0 ;
-(id)_boundServerSideConfigManagerForPersonID:(id)arg0 ;
-(id)_boundSubscriberForPersonID:(id)arg0 ;
-(id)init;
-(id)nextActivityDate;
-(id)ownSubscribedStreamForPersonID:(id)arg0 ;
-(id)serverSideConfigurationForPersonID:(id)arg0 ;
-(id)subscribedStreamsForPersonID:(id)arg0 ;
-(void)abortAllActivityForPersonID:(id)arg0 ;
-(void)computeHashForAsset:(id)arg0 personID:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg0 forPersonID:(id)arg1 ;
-(void)didExceedPublishQuotaForPersonID:(id)arg0 retryDate:(id)arg1 ;
-(void)didIdle;
-(void)didReceiveAuthenticationFailureForPersonID:(id)arg0 ;
-(void)didReceiveAuthenticationSuccessForPersonID:(id)arg0 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg0 ;
-(void)didReceiveNewServerSideConfigurationForPersonID:(id)arg0 ;
-(void)didReceiveNewShareState:(id)arg0 oldShareState:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceivePushNotificationForPersonID:(id)arg0 ;
-(void)didReceiveServerSideConfigurationVersion:(id)arg0 forPersonID:(id)arg1 ;
-(void)didUnidle;
-(void)forgetPersonID:(id)arg0 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg0 ;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg0 ;
-(void)reenqueueQuarantinedActivitiesWithReason:(id)arg0 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg0 ;
-(void)resetSubscriberSyncForPersonID:(id)arg0 ;
-(void)retryOutstandingActivities;
-(void)showInvitationFailureAlertForPersonID:(id)arg0 failures:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)stopAllActivities;


@end


#endif