// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKAVPLAYERTIMECONTROLLER_H
#define TSKAVPLAYERTIMECONTROLLER_H


#import <Foundation/Foundation.h>

#import "TSKAVPlayerController.h"

@interface TSKAVPlayerTimeController : NSObject {
    id *mTimeObserver;
    BOOL mObservingPlayerStatus;
}


@property (nonatomic) CGFloat absoluteCurrentTime; // ivar: mAbsoluteCurrentTime
@property (nonatomic) CGFloat currentTime; // ivar: mCurrentTime
@property (readonly, retain, nonatomic) TSKAVPlayerController *playerController; // ivar: mPlayerController
@property (readonly, nonatomic) CGFloat remainingTime; // ivar: mRemainingTime
@property (nonatomic) CGFloat updateInterval; // ivar: mUpdateInterval


-(id)initWithPlayerController:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_beginScrubbingIfNeeded;
-(void)p_createTimeObserver;
-(void)p_endScrubbing;
-(void)p_setTimeValuesWithoutScrubbing;
-(void)p_teardownTimeObserver;
-(void)startObservingTime;
-(void)stopObservingTime;


@end


#endif