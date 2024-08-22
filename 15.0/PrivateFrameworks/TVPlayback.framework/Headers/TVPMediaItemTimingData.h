// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPMEDIAITEMTIMINGDATA_H
#define TVPMEDIAITEMTIMINGDATA_H


#import <Foundation/Foundation.h>


@interface TVPMediaItemTimingData : NSObject

@property (nonatomic) CGFloat endTimeForAVPlayerItemLoading; // ivar: _endTimeForAVPlayerItemLoading
@property (nonatomic) CGFloat endTimeForBuffering; // ivar: _endTimeForBuffering
@property (nonatomic) CGFloat endTimeForLoadingAVAssetKeys; // ivar: _endTimeForLoadingAVAssetKeys
@property (nonatomic) CGFloat endTimeForPreparingForLoading; // ivar: _endTimeForPreparingForLoading
@property (nonatomic) CGFloat endTimeForPreparingForPlaybackInitiation; // ivar: _endTimeForPreparingForPlaybackInitiation
@property (nonatomic) BOOL initialLoadingComplete; // ivar: _initialLoadingComplete
@property (nonatomic) CGFloat startTimeForAVPlayerItemLoading; // ivar: _startTimeForAVPlayerItemLoading
@property (nonatomic) CGFloat startTimeForBuffering; // ivar: _startTimeForBuffering
@property (nonatomic) CGFloat startTimeForLoadingAVAssetKeys; // ivar: _startTimeForLoadingAVAssetKeys
@property (nonatomic) CGFloat startTimeForPreparingForLoading; // ivar: _startTimeForPreparingForLoading
@property (nonatomic) CGFloat startTimeForPreparingForPlaybackInitiation; // ivar: _startTimeForPreparingForPlaybackInitiation
@property (nonatomic) CGFloat totalInitialLoadingTime; // ivar: _totalInitialLoadingTime




@end


#endif