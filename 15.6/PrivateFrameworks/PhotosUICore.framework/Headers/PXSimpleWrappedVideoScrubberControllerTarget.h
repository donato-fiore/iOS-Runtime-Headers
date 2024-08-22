// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSIMPLEWRAPPEDVIDEOSCRUBBERCONTROLLERTARGET_H
#define PXSIMPLEWRAPPEDVIDEOSCRUBBERCONTROLLERTARGET_H

@class NSString, ISWrappedAVPlayer;
@protocol ISChangeObserver, PXVideoScrubberControllerTarget;

#import <Foundation/Foundation.h>


@interface PXSimpleWrappedVideoScrubberControllerTarget : NSObject <ISChangeObserver, PXVideoScrubberControllerTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *durationChangeHandler; // ivar: durationChangeHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *playerItemChangeHandler; // ivar: playerItemChangeHandler
@property (copy, nonatomic) id *statusChangeHandler; // ivar: statusChangeHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer


-(NSInteger)playerStatus;
-(float)playRate;
-(id)addPeriodicTimeObserverForInterval:(struct ? )arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)initWithVideoPlayer:(id)arg0 ;
-(id)playerItem;
-(struct ? )currentItemDuration;
-(struct ? )playerCurrentTime;
-(void)cancelPendingSeeks;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeTimeObserver:(id)arg0 ;
-(void)videoScrubberController:(id)arg0 seekToTime:(struct ? )arg1 toleranceBefore:(struct ? )arg2 toleranceAfter:(struct ? )arg3 completionHandler:(id)arg4 ;


@end


#endif