// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCLIPSCRUBBERTIMECONTROLLER_H
#define HUCLIPSCRUBBERTIMECONTROLLER_H


#import <Foundation/Foundation.h>


@interface HUClipScrubberTimeController : NSObject

@property (readonly, nonatomic) CGFloat maximumGestureScale;
@property (nonatomic) CGFloat maximumPosterFrameDuration; // ivar: _maximumPosterFrameDuration
@property (nonatomic) CGFloat minimumPosterFrameDuration; // ivar: _minimumPosterFrameDuration
@property (nonatomic) BOOL portraitMode; // ivar: _portraitMode
@property (nonatomic) CGFloat timeScale; // ivar: _timeScale
@property (nonatomic) BOOL userControlled; // ivar: _userControlled


-(BOOL)isAtMinimumZoom;
-(CGFloat)_numberOfPosterFrameUnitsForEvent:(id)arg0 timeScale:(CGFloat)arg1 ;
-(CGFloat)clampGestureScale:(CGFloat)arg0 ;
-(CGFloat)numberOfPosterFrameUnitsForEvent:(id)arg0 ;
-(CGFloat)posterFrameWidth;
-(CGFloat)posterFrameWidthFromCameraLiveSource;
-(CGFloat)timelineWidthForEvent:(id)arg0 ;
-(CGFloat)updateTimeScaleForGestureScale:(CGFloat)arg0 ;
-(id)init;
-(void)dealloc;
-(void)expandTimelineToMaximumZoom;
-(void)reloadEvents:(id)arg0 ;
-(void)shrinkTimelineToMinimumZoom;
-(void)updateTimeScaleIfNeeded;


@end


#endif