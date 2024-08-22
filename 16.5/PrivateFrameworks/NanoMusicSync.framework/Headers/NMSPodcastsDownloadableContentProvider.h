// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTSDOWNLOADABLECONTENTPROVIDER_H
#define NMSPODCASTSDOWNLOADABLECONTENTPROVIDER_H

@class NSString, NSPersistentHistoryToken;
@protocol MTDBExtensionAccessObserver, ICEnvironmentMonitorObserver, NMSDownloadableContentProvider, OS_dispatch_queue, OS_dispatch_source, NMSDownloadableContentProviderDelegate;

#import <Foundation/Foundation.h>


@interface NMSPodcastsDownloadableContentProvider : NSObject <MTDBExtensionAccessObserver, ICEnvironmentMonitorObserver, NMSDownloadableContentProvider>

 {
    NSObject<OS_dispatch_queue> *_mergeQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_source> *_persistentHistorySource;
    BOOL _delegateNotificationPending;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMSDownloadableContentProviderDelegate> *delegate; // ivar: _delegate
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
-(id)createItemEnumerator;
-(id)init;
-(void)_handlePersistentStoreRemoteChangeNotification:(id)arg0 ;
-(void)_handlePodcastSizeInfoDidChangeNotification:(id)arg0 ;
-(void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)arg0 ;
-(void)_notifyDelegateContentDidChange;
-(void)_notifyDelegateContentDidChangeImmediately;
-(void)_processLatestPersistenHistoryChanges;
-(void)_resetPersistentHistoryTokenAndNotifyObservers;
-(void)environmentMonitorDidChangePower:(id)arg0 ;
-(void)extensionAccessDidChange;


@end


#endif