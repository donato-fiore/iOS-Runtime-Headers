// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULIGHTBULBICONCONTENTVIEW_H
#define HULIGHTBULBICONCONTENTVIEW_H

@class NSString, UIVisualEffectView;


#import "HUIconContentView.h"
#import "HUAnimatableFilterImageView.h"

@interface HULightbulbIconContentView : HUIconContentView

@property (nonatomic) CGFloat brightness; // ivar: _brightness
@property (retain, nonatomic) HUAnimatableFilterImageView *coloredBaseView; // ivar: _coloredBaseView
@property (retain, nonatomic) HUAnimatableFilterImageView *coloredBulbView; // ivar: _coloredBulbView
@property (copy, nonatomic) NSString *lastUsedIconIdentifier; // ivar: _lastUsedIconIdentifier
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (retain, nonatomic) UIVisualEffectView *vibrantBaseEffectView; // ivar: _vibrantBaseEffectView
@property (retain, nonatomic) HUAnimatableFilterImageView *vibrantBaseView; // ivar: _vibrantBaseView
@property (retain, nonatomic) HUAnimatableFilterImageView *vibrantBulbView; // ivar: _vibrantBulbView
@property (retain, nonatomic) UIVisualEffectView *vibrantOutlineEffectView; // ivar: _vibrantOutlineEffectView


-(BOOL)wantsManagedVibrancyEffect;
-(NSInteger)renderingModeForSubview:(id)arg0 suggestedRenderingMode:(NSInteger)arg1 ;
-(id)_allImageViews;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBulbState;
-(void)_updateDisplayContextState;
-(void)_updateImages;
-(void)_updateVisualEffect;
-(void)layoutSubviews;
-(void)setDisplayContext:(NSUInteger)arg0 ;
-(void)setIconSize:(NSUInteger)arg0 ;
-(void)setVibrancyEffect:(id)arg0 ;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif