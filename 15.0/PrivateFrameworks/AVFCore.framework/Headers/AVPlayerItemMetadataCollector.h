// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYERITEMMETADATACOLLECTOR_H
#define AVPLAYERITEMMETADATACOLLECTOR_H

@protocol AVPlayerItemMetadataCollectorPushDelegate, OS_dispatch_queue;


#import "AVPlayerItemMediaDataCollector.h"
#import "AVPlayerItemMetadataCollectorInternal.h"

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {
    AVPlayerItemMetadataCollectorInternal *_metadataCollectorInternal;
}


@property (readonly, weak, nonatomic) NSObject<AVPlayerItemMetadataCollectorPushDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;


-(BOOL)_attachToPlayerItem:(id)arg0 ;
-(BOOL)_isAttachedToPlayerItem;
-(id)_getFilteredMetadataGroups:(id)arg0 fromIdentifiers:(id)arg1 andClassifyingLabels:(id)arg2 modifiedIndexesOut:(*id)arg3 newIndexesOut:(*id)arg4 ;
-(id)init;
-(id)initWithIdentifiers:(id)arg0 classifyingLabels:(id)arg1 ;
-(void)_detatchFromPlayerItem;
-(void)_updateTaggedRangeMetadataArray:(id)arg0 ;
-(void)dealloc;


@end


#endif