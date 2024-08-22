// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERACLIPPLAYER_H
#define HFCAMERACLIPPLAYER_H

@class HMCameraProfile, NSArray, NSString, NSError, AVQueuePlayer;
@protocol HFCameraClipQueueing, HFCameraClipPlaying, HFCameraClipPlayerDelegate, HFCameraClipScrubbing;

#import <Foundation/Foundation.h>

#import "HFCameraClipPosition.h"
#import "HFCameraClipPlayerItem.h"
#import "HFCameraClipQueuePlayer.h"

@interface HFCameraClipPlayer : NSObject <HFCameraClipQueueing, HFCameraClipPlaying>



@property (readonly, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) NSArray *clips; // ivar: _clips
@property (copy, nonatomic) HFCameraClipPosition *currentPosition;
@property (nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HFCameraClipPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasFatalError;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HFCameraClipPlayerItem *lastPlayerItem; // ivar: _lastPlayerItem
@property (nonatomic, getter=isMutatingQueue) BOOL mutatingQueue; // ivar: _mutatingQueue
@property (readonly, nonatomic) AVQueuePlayer *player;
@property (readonly, nonatomic) NSArray *queuableItems;
@property (readonly, nonatomic) HFCameraClipQueuePlayer *queuePlayer; // ivar: _queuePlayer
@property (weak, nonatomic) NSObject<HFCameraClipScrubbing> *scrubber; // ivar: _scrubber
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (nonatomic) BOOL shouldBypassScrubbing; // ivar: _shouldBypassScrubbing
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger timeControlStatus;


-(id)addPeriodicTimeObserverForInterval:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(id)createQueueableItemForClipManager:(id)arg0 clip:(id)arg1 ;
-(id)init;
-(id)initWithCameraProfile:(id)arg0 clips:(id)arg1 ;
-(id)initWithCameraProfile:(id)arg0 clips:(id)arg1 queuePlayer:(id)arg2 ;
-(void)_rebuildPlayerQueueForPosition:(id)arg0 ;
-(void)_setupObservationForLastPlayerItem:(id)arg0 ;
-(void)_setupPlayerObservation;
-(void)_updateErrorState;
-(void)_updatePlayerActionAtItemEnd;
-(void)dealloc;
-(void)endScrubbingWithOffset:(CGFloat)arg0 ;
-(void)insertQueueableItem:(id)arg0 afterItem:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)playerItemDidPlayToEndTime:(id)arg0 ;
-(void)removeQueueableItem:(id)arg0 ;
-(void)removeTimeObserver:(id)arg0 ;
-(void)seekToOffset:(CGFloat)arg0 inItem:(id)arg1 ;


@end


#endif