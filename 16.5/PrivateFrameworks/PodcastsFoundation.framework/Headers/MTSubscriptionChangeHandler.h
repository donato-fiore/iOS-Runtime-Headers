// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSUBSCRIPTIONCHANGEHANDLER_H
#define MTSUBSCRIPTIONCHANGEHANDLER_H

@protocol MTLegacyDownloadManagerProtocol;

#import <Foundation/Foundation.h>


@interface MTSubscriptionChangeHandler : NSObject

@property (retain, nonatomic) NSObject<MTLegacyDownloadManagerProtocol> *downloadManager; // ivar: _downloadManager


-(BOOL)_updateEntitledAttributes:(id)arg0 subscriptionActive:(BOOL)arg1 ;
-(void)_unsafeRedownloadEpisodesOnSubscriptionChangeForEpisodeUuids:(id)arg0 channel:(id)arg1 ;
-(void)_unsafeSendNotificationsForNewlyEntitledEpisodes:(id)arg0 latestEpisodeUUID:(id)arg1 newlyEntitledEpisodeUUIDs:(id)arg2 ;
-(void)_unsafeUpdateEntitlementStateAndCheckForNewEntitlement:(id)arg0 newlyEntitledEpisodeUUIDs:(id)arg1 latestEpisodeDate:(*CGFloat)arg2 latestEpisodeUUID:(id)arg3 ;
-(void)_unsafeUpdatePriceTypeAndSendNotificationsIfNeededFor:(id)arg0 subscriptionActive:(BOOL)arg1 episodesToRedownload:(id)arg2 ;
-(void)unsafeHandleSubscriptionChangeForChannel:(id)arg0 subscriptionBecameActive:(BOOL)arg1 subscriptionEnabledDate:(CGFloat)arg2 ;


@end


#endif