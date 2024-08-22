// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERABADGEVIEW_H
#define HUCAMERABADGEVIEW_H

@class UIView, UIVisualEffectView, NSArray, NSString, _UILegibilitySettings;


#import "HULegibilityLabel.h"

@interface HUCameraBadgeView : UIView

@property (readonly, nonatomic) UIVisualEffectView *blurEffectView; // ivar: _blurEffectView
@property (readonly, nonatomic) HULegibilityLabel *label; // ivar: _label
@property (retain, nonatomic) NSArray *labelConstraints; // ivar: _labelConstraints
@property (copy, nonatomic) NSString *labelText;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) NSArray *staticConstraints; // ivar: _staticConstraints
@property (readonly, nonatomic) UIVisualEffectView *vibrancyEffectView; // ivar: _vibrancyEffectView


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithSize:(NSUInteger)arg0 ;
-(void)updateConstraints;


@end


#endif