// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPDOCUMENTUPDATEEVENTMONITOR_H
#define VUIAPPDOCUMENTUPDATEEVENTMONITOR_H

@class WLKPlaybackSummary, NSDate, NSMapTable;

#import <Foundation/Foundation.h>


@interface VUIAppDocumentUpdateEventMonitor : NSObject {
    WLKPlaybackSummary *_pendingPlayActivity;
    BOOL _playbackIsActive;
}


@property (retain, nonatomic) NSDate *lastAppDidBecomeActive; // ivar: _lastAppDidBecomeActive
@property (retain, nonatomic) NSDate *lastProcesssedPlayActivity; // ivar: _lastProcesssedPlayActivity
@property (retain, nonatomic) NSMapTable *observerMapTable; // ivar: _observerMapTable
@property (nonatomic) int playbackReportToken; // ivar: _playbackReportToken


+(BOOL)_isAppRefreshEventType:(id)arg0 ;
+(id)sharedMonitor;
-(id)_init;
-(id)init;
-(void)_handleAccountDidChangeNotification:(id)arg0 ;
-(void)_handleAppDidBecomeActive:(id)arg0 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg0 ;
-(void)_handleAppLibraryDidChangeNotification:(id)arg0 ;
-(void)_handleAppWillEnterForegroundNotification:(id)arg0 ;
-(void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg0 ;
-(void)_handleClearPlayHistoryNotification:(id)arg0 ;
-(void)_handleDeviceDiscoveryDataAvailableNotification:(id)arg0 ;
-(void)_handleEntitlementsDidChangeNotification:(id)arg0 ;
-(void)_handleFamilyUpdate:(id)arg0 ;
-(void)_handleFavoritesRequestDidFinishNotification:(id)arg0 ;
-(void)_handleIAMMessageDidReceiveNotification:(id)arg0 ;
-(void)_handleLocationAuthorizationDidChangeNotification:(id)arg0 ;
-(void)_handleLocationDidChangeNotification:(id)arg0 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg0 ;
-(void)_handleNowPlayingDidEndNotification:(id)arg0 ;
-(void)_handleNowPlayingWillStartNotification:(id)arg0 ;
-(void)_handlePlayHistoryUpdatedNotification:(id)arg0 ;
-(void)_handlePlaybackReportNotification:(id)arg0 ;
-(void)_handlePreferredVideoFormatDidChangeNotification:(id)arg0 ;
-(void)_handlePurchaseFlowDidFinishNotification:(id)arg0 ;
-(void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg0 ;
-(void)_handleRestrictionsDidChangeNotification:(id)arg0 ;
-(void)_handleSettingsDidChangeNotification:(id)arg0 ;
-(void)_handleSubscriptionDidChangeNotification:(id)arg0 ;
-(void)_handleSyndicationInfoUpdatedNotification:(id)arg0 ;
-(void)_handleTVSubscriptionEntitlementsChanged:(id)arg0 ;
-(void)_handleUTSKDidChangeNotification:(id)arg0 ;
-(void)_handleUpNextLockupArtSettingDidChange:(id)arg0 ;
-(void)_handleUpNextRequestDidFinishNotification:(id)arg0 ;
-(void)_handleVPPADidChangeNotification:(id)arg0 ;
-(void)_handleXPUpNextRequestDidFinishNotification:(id)arg0 ;
-(void)_notifyObserver:(id)arg0 ofRefreshEvent:(id)arg1 ;
-(void)_notifyObserversOfEvent:(id)arg0 ;
-(void)_postPurchaseNotification:(id)arg0 error:(id)arg1 ;
-(void)_postSubscriptionNotification:(id)arg0 interruptedOfferDetails:(id)arg1 error:(id)arg2 ;
-(void)addObserver:(id)arg0 forEventDescriptors:(id)arg1 ;
-(void)addObserver:(id)arg0 forEventDescriptors:(id)arg1 viewController:(id)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)updateDescriptorsForObserver:(id)arg0 eventDescriptors:(id)arg1 ;


@end


#endif