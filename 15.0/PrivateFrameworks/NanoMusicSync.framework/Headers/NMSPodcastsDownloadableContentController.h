// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSPODCASTSDOWNLOADABLECONTENTCONTROLLER_H
#define NMSPODCASTSDOWNLOADABLECONTENTCONTROLLER_H

@class NSString, NSPersistentHistoryToken;
@protocol MTDBExtensionAccessObserver, NMSPodcastsDownloadableContentControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSPodcastsDownloadableContentController : NSObject <MTDBExtensionAccessObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMSPodcastsDownloadableContentControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL delegateNotificationPending; // ivar: _delegateNotificationPending
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPersistentHistoryToken *lastMergedToken; // ivar: _lastMergedToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
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
-(void)_resetPersistentHistoryTokenAndNotifyObservers;
-(void)extensionAccessDidChange;


@end


#endif