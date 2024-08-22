// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERITEMSAMPLEBUFFEROUTPUT_H
#define AVPLAYERITEMSAMPLEBUFFEROUTPUT_H

@protocol OS_dispatch_queue, AVPlayerItemSampleBufferOutputDelegate;


#import "AVPlayerItemOutput.h"
#import "AVWeakReference.h"
#import "AVWeakReferencingDelegateStorage.h"

@interface AVPlayerItemSampleBufferOutput : AVPlayerItemOutput {
    NSObject<OS_dispatch_queue> *_stateQueue;
    AVWeakReference *_weakReference;
    AVWeakReference *_weakReferenceToPlayerItemTrack;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    *OpaqueFigPlaybackItem _figPlaybackItem;
    int _trackID;
    int _extractionID;
    CGFloat _advanceInterval;
}


@property (readonly, weak) NSObject<AVPlayerItemSampleBufferOutputDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;


+(void)initialize;
-(CGFloat)_advanceInterval;
-(id)_weakReference;
-(id)_weakReferenceToPlayerItemTrack;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(int)_extractionID;
-(int)_trackID;
-(struct OpaqueFigPlaybackItem *)_figPlaybackItem;
-(struct opaqueCMSampleBuffer *)copyNextSampleBufferForTrackID:(int)arg0 flags:(*unsigned int)arg1 ;
-(void)_addFigPlaybackItemListeners;
-(void)_attachToPlayerItemTrack:(id)arg0 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 ;
-(void)_detachFromPlayerItemTrack;
-(void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:(int)arg0 extractionID:(int)arg1 ;
-(void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:(int)arg0 extractionID:(int)arg1 ;
-(void)_removeFigPlaybackItemListeners;
-(void)_setExtractionID:(int)arg0 ;
-(void)_setFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 ;
-(void)_setTrackID:(int)arg0 ;
-(void)dealloc;


@end


#endif