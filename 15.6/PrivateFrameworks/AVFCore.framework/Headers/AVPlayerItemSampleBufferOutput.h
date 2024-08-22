// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERITEMSAMPLEBUFFEROUTPUT_H
#define AVPLAYERITEMSAMPLEBUFFEROUTPUT_H

@protocol AVPlayerItemSampleBufferOutputDelegate, OS_dispatch_queue;


#import "AVPlayerItemOutput.h"
#import "AVPlayerItemSampleBufferOutputInternal.h"

@interface AVPlayerItemSampleBufferOutput : AVPlayerItemOutput {
    AVPlayerItemSampleBufferOutputInternal *_internal;
}


@property (readonly, weak) NSObject<AVPlayerItemSampleBufferOutputDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;


+(void)initialize;
-(id)_weakReferenceToPlayerItemTrack;
-(id)init;
-(int)_extractionID;
-(int)_trackID;
-(struct OpaqueFigPlaybackItem *)_figPlaybackItem;
-(struct opaqueCMSampleBuffer *)copyNextSampleBufferForTrackID:(int)arg0 flags:(*unsigned int)arg1 ;
-(void)_attachToPlayerItemTrack:(id)arg0 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 ;
-(void)_detachFromPlayerItemTrack;
-(void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:(int)arg0 extractionID:(int)arg1 ;
-(void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:(int)arg0 extractionID:(int)arg1 ;
-(void)_setExtractionID:(int)arg0 ;
-(void)_setFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 ;
-(void)_setTrackID:(int)arg0 ;
-(void)dealloc;


@end


#endif