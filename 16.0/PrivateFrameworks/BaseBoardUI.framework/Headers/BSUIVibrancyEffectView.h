// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSUIVIBRANCYEFFECTVIEW_H
#define BSUIVIBRANCYEFFECTVIEW_H

@class UIView;


#import "BSUIVibrancyView.h"
#import "BSUIVibrancyEffectValues.h"
#import "BSUIVibrancyBackdropView.h"

@interface BSUIVibrancyEffectView : BSUIVibrancyView {
    ? _needsUpdate;
    BSUIVibrancyEffectValues *_values;
}


@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled; // ivar: _blurEnabled
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly; // ivar: _captureOnly
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) UIView *maskView; // ivar: _maskView
@property (readonly, nonatomic) BSUIVibrancyBackdropView *materialBackdropView; // ivar: _materialBackdropView
@property (readonly, nonatomic) UIView *vibrancyView; // ivar: _vibrancyView


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateSubviews;
-(void)_updateSubviewsIfNeeded;
-(void)invalidateSubviews;
-(void)layoutSubviews;
-(void)updateFilters;


@end


#endif