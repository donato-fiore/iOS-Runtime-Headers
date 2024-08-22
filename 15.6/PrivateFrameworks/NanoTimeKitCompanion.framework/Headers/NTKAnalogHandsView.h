// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKANALOGHANDSVIEW_H
#define NTKANALOGHANDSVIEW_H

@class UIView, NSNumber, NSTimer, CALayer, NSCalendar, NSString, CLKDevice, UIColor, NSDate, NSTimeZone;
@protocol NTKTimeView, NTKAnalogHandsViewDelegate;


#import "NTKColoringImageView.h"
#import "NTKHandView.h"

@interface NTKAnalogHandsView : UIView <NTKTimeView>

 {
    NTKColoringImageView *_colorTransitionSecondHandLowerView;
    NTKColoringImageView *_colorTransitionSecondHandUpperView;
    NTKColoringImageView *_colorTransitionSecondHandSmallCircleView;
    NTKColoringImageView *_colorTransitionSecondHandLargeCircleView;
    BOOL _animatingToNewDate;
    NSNumber *_displayLinkToken;
    NSTimer *_animationUpdateTimer;
    CGFloat _timeOffset;
    CALayer *_minuteHandTransitionBodyLayer;
    CALayer *_minuteHandTransitionStemLayer;
    CALayer *_minuteHandTransitionPegLayer;
    CALayer *_hourHandTransitionBodyLayer;
    CALayer *_hourHandTransitionStemLayer;
    BOOL _shadowCompositingEnabled;
    BOOL _useDirectionalShadows;
    UIView *_directionalShadowContainerView;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (nonatomic) NSInteger dataMode; // ivar: _dataMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKAnalogHandsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKHandView *hourHandView; // ivar: _hourHandView
@property (readonly, nonatomic) NTKHandView *hourHandView_clientSide; // ivar: _hourHandView_clientSide
@property (retain, nonatomic) UIColor *inlayColor; // ivar: _inlayColor
@property (readonly, nonatomic) UIView *minuteHandDot;
@property (nonatomic) CGFloat minuteHandDotDiameter; // ivar: _minuteHandDotDiameter
@property (retain, nonatomic) NTKHandView *minuteHandView; // ivar: _minuteHandView
@property (readonly, nonatomic) NTKHandView *minuteHandView_clientSide; // ivar: _minuteHandView_clientSide
@property (readonly, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (readonly, nonatomic) UIView *secondHandDot;
@property (nonatomic) CGFloat secondHandDotDiameter; // ivar: _secondHandDotDiameter
@property (retain, nonatomic) NTKHandView *secondHandView; // ivar: _secondHandView
@property (readonly, nonatomic) NTKHandView *secondHandView_clientSide; // ivar: _secondHandView_clientSide
@property (nonatomic) BOOL shouldRestoreSecondHandAfterScrubbing; // ivar: _shouldRestoreSecondHandAfterScrubbing
@property (nonatomic) BOOL showDebugClientSideHands; // ivar: _showDebugClientSideHands
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL timeScrubbing; // ivar: _timeScrubbing
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(CGFloat)hourHandAngleForDate:(id)arg0 ;
+(CGFloat)minuteHandAngleForDate:(id)arg0 ;
+(NSInteger)preferredCountOfInstancesToCache;
-(BOOL)_canRunTimeAnimation;
-(BOOL)_dontRepointDebugHands;
-(BOOL)shadowCompositingEnabled;
-(BOOL)useDirectionalShadows;
-(CGFloat)_timeAnimationFramesPerSecondForDevice:(id)arg0 ;
-(id)createHourHandView;
-(id)createMinuteHandView;
-(id)createSecondHandView;
-(id)displayTime;
-(id)hourHandConfiguration;
-(id)initForDevice:(id)arg0 ;
-(id)minuteHandConfiguration;
-(id)secondHandConfiguration;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accessibilityInvalidateElements;
-(void)_addHourMinuteHandsTransitionLayers;
-(void)_deregisterFromDisplayLinkManager;
-(void)_enumerateHandViews:(id)arg0 ;
-(void)_enumerateSecondHandViewsWithBlock:(id)arg0 ;
-(void)_enumerateShadowViews:(id)arg0 ;
-(void)_handleDisplayLink;
-(void)_removeColorTransitionViews;
-(void)_removeHourMinuteHandsTransitionLayers;
-(void)_repointDebugHandsToCurrentTime;
-(void)_significantTimeChanged;
-(void)_startNewTimeAnimation;
-(void)_stopTimeAnimation;
-(void)applyHourMinuteHandsStrokeColor:(id)arg0 fillColor:(id)arg1 ;
-(void)applyHourMinuteHandsTransitionFraction:(CGFloat)arg0 fromStrokeColor:(id)arg1 fromFillColor:(id)arg2 toStrokeColor:(id)arg3 toFillColor:(id)arg4 ;
-(void)applySecondHandColor:(id)arg0 ;
-(void)applySecondHandTransitionFraction:(CGFloat)arg0 fromColor:(id)arg1 toColor:(id)arg2 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)endScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)layoutHandViews;
-(void)layoutShadowViews;
-(void)layoutSubviews;
-(void)scrubToDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setUseDirectionalShadows:(BOOL)arg0 ;
-(void)startScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;


@end


#endif