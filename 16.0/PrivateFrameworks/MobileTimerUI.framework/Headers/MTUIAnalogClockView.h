// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUIANALOGCLOCKVIEW_H
#define MTUIANALOGCLOCKVIEW_H

@class UIView, UIImage, UIImageView, NSCalendar, NSDate, NSTimeZone;
@protocol MTClock;



@interface MTUIAnalogClockView : UIView <MTClock>

 {
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIView" _dayHands;
    UIView" _nightHands;
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    CGFloat _seconds;
    int _flutterIndex;
    BOOL _isRenderStateStale;
    NSCalendar *_calendar;
    BOOL _minuteHourAnimationTriggered;
}


@property (readonly, nonatomic) UIImageView *faceView; // ivar: _faceView
@property (readonly, nonatomic) NSInteger hour;
@property (readonly, nonatomic) NSInteger minute;
@property (readonly, nonatomic, getter=isNighttime) BOOL nighttime; // ivar: _nighttime
@property (nonatomic) NSInteger runMode; // ivar: _runMode
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (readonly, nonatomic) NSInteger style;
@property (retain, nonatomic) NSDate *time; // ivar: _time
@property (retain, nonatomic) NSTimeZone *timeZone;


+(BOOL)doesFaceHaveShadow;
+(BOOL)hasOverHourHandDot;
+(BOOL)hasOverSecondHandDot;
+(BOOL)isClockRegistered:(id)arg0 ;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg0 dayTime:(BOOL)arg1 ;
+(CGFloat)antialiasPaddingRatio;
+(CGFloat)faceRadius;
+(CGFloat)numeralInset;
+(CGFloat)overHourHandDotSize;
+(CGFloat)overSecondHandDotSize;
+(CGFloat)secondHandLength;
+(CGFloat)secondHandMainLength;
+(CGFloat)secondHandOverhangLength;
+(CGFloat)secondHandWidth;
+(Class)classForStyle:(NSInteger)arg0 ;
+(id)analogClockWithStyle:(NSInteger)arg0 ;
+(id)cacheTopLevelPath;
+(id)cacheVersionHash;
+(id)cacheVersionedPath;
+(id)clockFaceForDaytime:(BOOL)arg0 ;
+(id)clockFaceForDaytime:(BOOL)arg0 ignoreCache:(BOOL)arg1 ;
+(id)clockHand:(NSInteger)arg0 daytime:(BOOL)arg1 ;
+(id)dayTimeFaceColor;
+(id)dayTimeHourHandColor;
+(id)dayTimeMinuteHandColor;
+(id)dayTimeOverHourHandDotColor;
+(id)dayTimeSecondHandColor;
+(id)dayTimeTextColor;
+(id)imageCacheNameForType:(int)arg0 daytime:(BOOL)arg1 ;
+(id)imageForType:(int)arg0 dayTime:(BOOL)arg1 generation:(id)arg2 ;
// +(id)imageForType:(int)arg0 dayTime:(BOOL)arg1 generation:(id)arg2 ignoreCache:(unk)arg3  ;
+(id)imageInBundleForName:(id)arg0 ;
+(id)makeClockFaceForDaytime:(BOOL)arg0 ;
+(id)makeClockHand:(NSInteger)arg0 daytime:(BOOL)arg1 ;
+(id)makeDotImageSize:(CGFloat)arg0 color:(id)arg1 ;
+(id)makeOverSecondHandDotImage;
+(id)nightTimeFaceColor;
+(id)nightTimeHourHandColor;
+(id)nightTimeMinuteHandColor;
+(id)nightTimeOverHourHandDotColor;
+(id)nightTimeSecondHandColor;
+(id)nightTimeTextColor;
+(id)numeralFont;
+(id)overHourHandDotForDayTime:(BOOL)arg0 ;
+(id)overHourHandDotImageForDaytime:(BOOL)arg0 ;
+(id)overSecondHandDotColor;
+(id)overSecondHandDotImage;
+(id)resourcePath;
+(id)shadowInfoAtIndex:(NSUInteger)arg0 ;
+(struct CGPoint )handRotationalCenterForHand:(NSInteger)arg0 ;
+(struct CGPoint )shadowRotationalCenterForHand:(NSInteger)arg0 ;
+(struct CGSize )clockSize;
+(struct CGSize )sizeForStyle:(NSInteger)arg0 ;
+(struct UIEdgeInsets )insetsForStyle:(NSInteger)arg0 ;
+(struct UIEdgeInsets )shadowInsets;
+(void)adjustNumberalCenter:(struct CGPoint *)arg0 forNumeralIndex:(NSInteger)arg1 ;
+(void)initialize;
+(void)registerClock:(id)arg0 ;
+(void)registerSweepingClock:(id)arg0 ;
+(void)registerTickingClock:(id)arg0 ;
+(void)unregisterClock:(id)arg0 ;
+(void)unregisterSweepingClock:(id)arg0 ;
+(void)unregisterTickingClock:(id)arg0 ;
+(void)updateFlutterForAllTicking;
+(void)updateTimeForAllSweeping;
+(void)updateTimeForAllTicking;
-(CGFloat)coarseUpdateInterval;
-(CGFloat)updateInterval;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)handleLocaleChange;
-(void)redrawSecondHand;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHandAngle:(CGFloat)arg0 forHandIndex:(NSInteger)arg1 ;
-(void)setHandTransformForHandIndex:(NSInteger)arg0 ;
-(void)start;
-(void)stop;
-(void)updateFlutter;
-(void)updateTime;
-(void)updateTimeAnimated:(BOOL)arg0 ;
-(void)updateTimeContinuously:(NSInteger)arg0 ;


@end


#endif