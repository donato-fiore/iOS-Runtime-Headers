// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBACKDROPVIEWSETTINGSCOMBINER_H
#define _UIBACKDROPVIEWSETTINGSCOMBINER_H

@class UIBackdropViewSettings;


#import "_UIBackdropViewSettings.h"

@interface _UIBackdropViewSettingsCombiner : UIBackdropViewSettings

@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsA; // ivar: _inputSettingsA
@property (retain, nonatomic) _UIBackdropViewSettings *inputSettingsB; // ivar: _inputSettingsB
@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsA; // ivar: _outputSettingsA
@property (retain, nonatomic) _UIBackdropViewSettings *outputSettingsB; // ivar: _outputSettingsB
@property (nonatomic) CGFloat weighting; // ivar: _weighting


-(BOOL)isBackdropVisible;
-(BOOL)requiresBackdropLayer;
-(void)computeOutputSettingsUsingModel:(id)arg0 ;
-(void)copyAdditionalSettingsFromSettings:(id)arg0 ;
-(void)setDefaultValues;
-(void)setRequiresColorStatistics:(BOOL)arg0 ;


@end


#endif