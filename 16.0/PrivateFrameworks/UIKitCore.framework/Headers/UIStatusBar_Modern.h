// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBAR_MODERN_H
#define UISTATUSBAR_MODERN_H

@class Base;


#import "_UIStatusBar.h"

@interface UIStatusBar_Modern : Base

@property (retain, nonatomic) _UIStatusBar *statusBar; // ivar: _statusBar


+(CGFloat)_heightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 forStatusBarFrame:(BOOL)arg2 inWindow:(id)arg3 isAzulBLinked:(BOOL)arg4 ;
+(Class)_implementationClass;
+(NSInteger)_defaultStyleForRequestedStyle:(NSInteger)arg0 styleOverrides:(NSUInteger)arg1 activeStyleOverride:(*NSUInteger)arg2 ;
+(id)sensorActivityIndicator;
+(void)setSensorActivityIndicator:(id)arg0 ;
-(CGFloat)alphaForPartWithIdentifier:(id)arg0 ;
-(CGFloat)defaultDoubleHeight;
-(NSInteger)_effectiveStyleFromStyle:(NSInteger)arg0 ;
-(NSInteger)currentStyle;
-(NSUInteger)_implicitStyleOverrideForStyle:(NSInteger)arg0 ;
-(id)_dataFromLegacyData:(struct ? *)arg0 ;
-(id)_effectiveDataFromData:(id)arg0 activeOverride:(NSUInteger)arg1 canUpdateBackgroundActivity:(BOOL)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 showForegroundView:(BOOL)arg1 wantsServer:(BOOL)arg2 inProcessStateProvider:(id)arg3 ;
-(id)actionForPartWithIdentifier:(id)arg0 ;
-(id)clockFont;
-(id)disabledPartIdentifiers;
-(id)enabledPartIdentifiers;
-(struct CGRect )frameForPartWithIdentifier:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIOffset )offsetForPartWithIdentifier:(id)arg0 ;
-(void)_requestStyle:(NSInteger)arg0 partStyles:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(void)_requestStyle:(NSInteger)arg0 partStyles:(id)arg1 legibilityStyle:(NSInteger)arg2 foregroundColor:(id)arg3 animationParameters:(id)arg4 forced:(BOOL)arg5 ;
-(void)_updateSemanticContentAttributeFromLegacyData:(struct ? *)arg0 ;
-(void)_updateWithData:(id)arg0 force:(BOOL)arg1 ;
-(void)forceUpdate:(BOOL)arg0 ;
-(void)forceUpdateData:(BOOL)arg0 ;
-(void)jiggleLockIcon;
-(void)layoutSubviews;
-(void)setAction:(id)arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setAlpha:(CGFloat)arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setAvoidanceFrame:(struct CGRect )arg0 animationSettings:(id)arg1 ;
-(void)setAvoidanceFrame:(struct CGRect )arg0 animationSettings:(id)arg1 isInteractive:(BOOL)arg2 ;
-(void)setDisabledPartIdentifiers:(id)arg0 ;
-(void)setEnabledPartIdentifiers:(id)arg0 ;
-(void)setForegroundAlpha:(CGFloat)arg0 animationParameters:(id)arg1 ;
-(void)setForegroundColor:(id)arg0 animationParameters:(id)arg1 ;
-(void)setLegibilityStyle:(NSInteger)arg0 animationParameters:(id)arg1 ;
-(void)setMode:(NSInteger)arg0 ;
-(void)setOffset:(struct UIOffset )arg0 forPartWithIdentifier:(id)arg1 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setStyleRequest:(id)arg0 animationParameters:(id)arg1 ;
-(void)statusBarServer:(id)arg0 didReceiveDoubleHeightStatusString:(id)arg1 forStyle:(NSInteger)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;
-(void)statusBarServer:(id)arg0 didReceiveStyleOverrides:(NSUInteger)arg1 ;
-(void)statusBarStateProvider:(id)arg0 didPostStatusBarData:(struct ? *)arg1 withActions:(int)arg2 ;


@end


#endif