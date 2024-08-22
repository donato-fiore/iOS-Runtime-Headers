// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERITEMINTERSTITIALEVENTCOLLECTOR_H
#define AVPLAYERITEMINTERSTITIALEVENTCOLLECTOR_H

@protocol OS_dispatch_queue;


#import "AVPlayerItemMediaDataCollector.h"
#import "AVPlayerItem.h"

@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    id *_obtainCoordinator;
    AVPlayerItem *_weakReferenceToPlayerItem;
}




-(BOOL)_attachToPlayerItem:(id)arg0 ;
-(id)initWithCoordinatorGenerator:(id)arg0 ;
-(void)_detatchFromPlayerItem;
-(void)_updateTaggedRangeMetadataArray:(id)arg0 ;
-(void)dealloc;


@end


#endif