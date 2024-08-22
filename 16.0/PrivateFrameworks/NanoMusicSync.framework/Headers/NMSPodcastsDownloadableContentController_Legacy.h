// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSPODCASTSDOWNLOADABLECONTENTCONTROLLER_LEGACY_H
#define NMSPODCASTSDOWNLOADABLECONTENTCONTROLLER_LEGACY_H

@class NSString, NSPersistentHistoryToken;
@protocol MTDBExtensionAccessObserver, OS_dispatch_queue, OS_dispatch_source, NMSPodcastsDownloadableContentControllerDelegate_Legacy;

#import <Foundation/Foundation.h>


@interface NMSPodcastsDownloadableContentController_Legacy : NSObject <MTDBExtensionAccessObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_persistentHistorySource;
    BOOL _delegateNotificationPending;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMSPodcastsDownloadableContentControllerDelegate_Legacy> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPersistentHistoryToken *lastMergedToken; // ivar: _lastMergedToken
@property (readonly) Class superclass;


-(BOOL)_changeContainsRelevantChannelChanges:(id)arg0 ;
-(BOOL)_changeContainsRelevantEpisodeChanges:(id)arg0 ;
-(BOOL)_changeContainsRelevantShowChanges:(id)arg0 ;
-(BOOL)_changeContainsRelevantStationChanges:(id)arg0 ;
-(BOOL)_shouldMergeHistoryTransaction:(id)arg0 ;
-(id)_ctx;
-(id)_relevantChannelProperties;
-(id)_relevantEpisodeProperties;
-(id)_relevantShowProperties;
-(id)_relevantStationProperties;
-(id)init;
-(void)_handlePersistentStoreRemoteChangeNotification:(id)arg0 ;
-(void)_handlePodcastSizeInfoDidChangeNotification:(id)arg0 ;
-(void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)arg0 ;
-(void)_notifyDelegateContentDidChange;
-(void)_notifyDelegateContentDidChangeImmediately;
-(void)_processLatestPersistenHistoryChanges;
-(void)_resetPersistentHistoryTokenAndNotifyObservers;
-(void)extensionAccessDidChange;


@end


#endif