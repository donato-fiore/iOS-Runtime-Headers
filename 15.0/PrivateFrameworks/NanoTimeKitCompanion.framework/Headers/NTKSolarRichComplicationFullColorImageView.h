// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKSOLARRICHCOMPLICATIONFULLCOLORIMAGEVIEW_H
#define NTKSOLARRICHCOMPLICATIONFULLCOLORIMAGEVIEW_H

@class UIView, CAGradientLayer, CALayer, NSDictionary, CLKClockTimerToken, CLKDevice, NSString, CLLocation, NSDate;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;


#import "NTKBezierPathView.h"
#import "NTKSolarTimeModel.h"
#import "NTKSolarPath.h"
#import "NTKBezierPathPointModel.h"

@interface NTKSolarRichComplicationFullColorImageView : UIView <CLKFullColorImageView>

 {
    ? _layoutConstants;
    UIView *_backgroundView;
    CAGradientLayer *_gradientLayer;
    CALayer *_gradientAdjustmentLayer;
    UIView *_lineView;
    NTKBezierPathView *_pathView;
    NTKSolarTimeModel *_solarTimeModel;
    NTKSolarPath *_solarPath;
    NTKBezierPathPointModel *_pointModel;
    CALayer *_strokeDiskMaskLayer;
    CALayer *_strokeDiskBorderLayer;
    CALayer *_fillDiskLayer;
    CALayer *_fillDiskHaloLayer;
    CALayer *_belowHorizonLayer;
    UIView *_fillDiskHaloContainerView;
    NSDictionary *_waypoints;
    CGFloat _horizonYInCurve;
    CGFloat _sunsetXInCurve;
    CGRect _solarPathViewRect;
    CGFloat _prevDiskTimePercentage;
    CLKClockTimerToken *_clockTimerToken;
    CLKDevice *_device;
    BOOL _paused;
    BOOL _solarPathNeedsUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timeTravelDate; // ivar: _timeTravelDate
@property (readonly, nonatomic) BOOL usingIdealizedTime; // ivar: _usingIdealizedTime


-(BOOL)_shouldAnimateWithTemplateUpdateReason:(NSInteger)arg0 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 family:(NSInteger)arg1 ;
-(void)_dateDidUpdate;
-(void)_didReceiveSignificantTimeChangeNotification;
-(void)_didReceiveTimeZoneDidChangeNotification;
-(void)_setSolarPathNeedsUpdate;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(void)_updateGradientBackgroundWithYPosition:(CGFloat)arg0 xPercentage:(CGFloat)arg1 topDistanceAboveHorizonLine:(CGFloat)arg2 bottomDistanceBelowHorizonLine:(CGFloat)arg3 ;
-(void)_updateSolarDiskWithUsingIdealizedTime:(BOOL)arg0 forceUpdate:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateSolarPathWithAnimated:(BOOL)arg0 ;
-(void)_updateWaypoints;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;
-(void)updateWithLocation:(id)arg0 useIdealizedTime:(BOOL)arg1 forceUpdate:(BOOL)arg2 animated:(BOOL)arg3 ;


@end


#endif