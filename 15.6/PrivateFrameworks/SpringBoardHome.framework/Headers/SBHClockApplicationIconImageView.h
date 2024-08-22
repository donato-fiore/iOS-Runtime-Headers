// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHCLOCKAPPLICATIONICONIMAGEVIEW_H
#define SBHCLOCKAPPLICATIONICONIMAGEVIEW_H

@class CALayer, UIImage, NSString;
@protocol SBDateTimeOverrideObserver;


#import "SBLiveIconImageView.h"

@interface SBHClockApplicationIconImageView : SBLiveIconImageView <SBDateTimeOverrideObserver>

 {
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_hourMinuteDot;
    CALayer *_secondDot;
    UIImage *_mappedContentsImage;
    UIImage *_squareMappedContentsImage;
}


@property (copy, nonatomic) NSString *currentNumberingSystem; // ivar: _currentNumberingSystem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)overrideDateOffset;
+(id)backgroundImageNameWithImageInfo:(struct SBIconImageInfo )arg0 ;
+(id)effectiveDate;
+(id)fallbackBackgroundImageWithIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(id)hoursMinutesHandColor;
+(id)iconImageWithImageInfo:(struct SBIconImageInfo )arg0 includingMask:(BOOL)arg1 ;
+(id)imageSetForMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
+(id)makeComponentImageWithMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 size:(struct CGSize )arg1 actions:(id)arg2 ;
+(id)makeComponentImageWithMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 size:(struct CGSize )arg1 path:(struct CGPath *)arg2 fillColor:(id)arg3 options:(NSUInteger)arg4 ;
+(id)makeDotImageWithOuterDiameter:(CGFloat)arg0 innerDiameter:(CGFloat)arg1 color:(id)arg2 isSeconds:(BOOL)arg3 metrics:(struct SBHClockApplicationIconImageMetrics *)arg4 ;
+(id)makeDotLayerWithOuterDiameter:(CGFloat)arg0 innerDiameter:(CGFloat)arg1 isSeconds:(BOOL)arg2 imageSet:(id)arg3 ;
+(id)makeHoursHandImageWithMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
+(id)makeHoursHandLayerWithImageSet:(id)arg0 ;
+(id)makeImageSetForMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
+(id)makeMinutesHandImageWithMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
+(id)makeMinutesHandLayerWithImageSet:(id)arg0 ;
+(id)makeSecondsHandImageWithMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
+(id)makeSecondsHandLayerWithImageSet:(id)arg0 ;
+(id)overrideDate;
+(id)secondsHandColor;
+(id)systemNumberingSystem;
+(void)_handleTimeChange:(id)arg0 ;
+(void)_timerFired:(id)arg0 ;
+(void)configureHandLayer:(id)arg0 metrics:(struct SBHClockApplicationIconImageMetrics *)arg1 ;
+(void)getMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 forIconImageInfo:(struct SBIconImageInfo )arg1 ;
+(void)initialize;
+(void)precacheDataWithIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(void)setOverrideDate:(id)arg0 ;
+(void)setOverrideDateOffset:(CGFloat)arg0 ;
-(BOOL)isAnimationAllowed;
-(id)contentsImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)squareContentsImage;
-(void)_setAnimating:(BOOL)arg0 ;
-(void)_timerFiredWithComponents:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)_updateUnanimatedWithComponents:(id)arg0 ;
-(void)applyMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
-(void)controller:(id)arg0 didChangeOverrideDateFromDate:(id)arg1 ;
-(void)getMetrics:(struct SBHClockApplicationIconImageMetrics *)arg0 ;
-(void)layoutSubviews;
-(void)localeDidChange:(id)arg0 ;
-(void)prepareForReuse;
-(void)setIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)updateAnimatingState;
-(void)updateUnanimated;


@end


#endif