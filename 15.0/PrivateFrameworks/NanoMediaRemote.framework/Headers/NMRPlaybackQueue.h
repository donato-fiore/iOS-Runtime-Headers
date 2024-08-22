// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRPLAYBACKQUEUE_H
#define NMRPLAYBACKQUEUE_H

@class NSDictionary, NSData;
@protocol OS_dispatch_queue, NMRPlaybackQueueDelegate;

#import <Foundation/Foundation.h>

#import "_NMRPlaybackQueue.h"
#import "NMRMediaRemoteUpdater.h"
#import "NMROrigin.h"

@interface NMRPlaybackQueue : NSObject {
    _NMRPlaybackQueue *_upNextPlaybackQueue;
    BOOL _observingMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NMRMediaRemoteUpdater *_playbackQueueUpdater;
    NSDictionary *_nowPlayingInfo;
}


@property (weak, nonatomic) NSObject<NMRPlaybackQueueDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSData *fullPlaybackQueueData;
@property (nonatomic) ? observedRange; // ivar: _observedRange
@property (retain, nonatomic) NMROrigin *origin; // ivar: _origin


-(*void)_mediaRemotePlaybackQueueWithRange:(struct ? )arg0 includeMetadata:(BOOL)arg1 ;
-(*void)copyFullMediaRemotePlaybackQueueIncludingMetadata:(BOOL)arg0 ;
-(*void)copyMediaRemotePlaybackQueueWithRange:(struct ? )arg0 includeMetadata:(BOOL)arg1 ;
-(BOOL)_needsMetadataForMediaRemoteItem:(*void)arg0 ;
-(BOOL)_needsUpdateForMediaRemoteQueue:(*void)arg0 ;
-(id)_contentItemIdentifiers;
-(id)_itemWithIdentifier:(id)arg0 ;
-(id)_metadataForItemWithIdentifier:(id)arg0 ;
-(id)deltaPlaybackQueueDataFromPreviousData:(id)arg0 invalidatedMetadataIdentifiers:(id)arg1 ;
-(id)init;
-(struct ? )_rangeOfItemsNeedingMetadataForMediaRemoteQueue:(*void)arg0 ;
-(void)_refreshCurrentPlaybackQueueFromMediaRemoteWithCompletion:(id)arg0 ;
-(void)_updateMetadataWithMediaRemoteItems:(id)arg0 ;
-(void)_updateWithMediaRemoteQueue:(*void)arg0 ;
-(void)beginObservingMediaRemotePlaybackQueueForOrigin:(id)arg0 ;
-(void)dealloc;
-(void)setNowPlayingInfo:(id)arg0 ;
-(void)updateWithData:(id)arg0 ;


@end


#endif