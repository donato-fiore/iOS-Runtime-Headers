// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBCOREAVFMOVIEOBSERVER_H
#define WEBCOREAVFMOVIEOBSERVER_H

@class NSString;
@protocol AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate>

 {
    WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> m_player;
    int m_delayCallbacks;
    RefPtr<WTF::WorkQueue, WTF::RawPtrTraits<WTF::WorkQueue>, WTF::DefaultRefDerefTraits<WTF::WorkQueue>> m_backgroundQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPlayer:(*void)arg0 ;
-(void)chapterMetadataDidChange:(id)arg0 ;
-(void)didEnd:(id)arg0 ;
-(void)disconnect;
-(void)legibleOutput:(id)arg0 didOutputAttributedStrings:(id)arg1 nativeSampleBuffers:(id)arg2 forItemTime:(struct ? )arg3 ;
-(void)metadataCollector:(id)arg0 didCollectDateRangeMetadataGroups:(id)arg1 indexesOfNewGroups:(id)arg2 indexesOfModifiedGroups:(id)arg3 ;
-(void)metadataLoaded;
-(void)metadataOutput:(id)arg0 didOutputTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(int)arg3 ;
-(void)outputSequenceWasFlushed:(id)arg0 ;


@end


#endif