// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPSTASHVIEW_H
#define SBPIPSTASHVIEW_H

@class UIView, UIImageView, NSString;
@protocol PTSettingsKeyObserver;


#import "SBPIPStashVisualSettings.h"
#import "SBPIPBackdropView.h"

@interface SBPIPStashView : UIView <PTSettingsKeyObserver>

 {
    CGFloat _startBlurThreshold;
    CGFloat _completeBlurThreshold;
    SBPIPStashVisualSettings *_settings;
    SBPIPBackdropView *_backdropView;
    UIView *_lightTintView;
    UIView *_darkTintView;
    UIImageView *_leftChevron;
    UIImageView *_rightChevron;
    BOOL _chevronsHidden;
    BOOL _isChevronShownLeft;
}


@property (nonatomic) CGFloat blurProgress; // ivar: _blurProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat stashedTabWidth; // ivar: _stashedTabWidth
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateSettingsDerivedValues;
-(void)dealloc;
-(void)layoutStashChevrons;
-(void)layoutSubviews;
-(void)resetChevronState;
-(void)setChevronHidden:(BOOL)arg0 left:(BOOL)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif