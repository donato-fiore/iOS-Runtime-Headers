// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUICONCONTENTVIEW_H
#define HUICONCONTENTVIEW_H

@class UIView, UIVisualEffect;
@protocol HUIconContentViewDelegate, HFIconDescriptor;



@interface HUIconContentView : UIView

@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (weak, nonatomic) NSObject<HUIconContentViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableContinuousAnimation; // ivar: _disableContinuousAnimation
@property (nonatomic) NSUInteger displayContext; // ivar: _displayContext
@property (readonly, nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (nonatomic) NSUInteger iconSize; // ivar: _iconSize
@property (nonatomic) NSInteger primaryState; // ivar: _primaryState
@property (nonatomic) NSInteger renderingMode; // ivar: _renderingMode
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect; // ivar: _vibrancyEffect


+(Class)iconContentViewClassForIconDescriptor:(id)arg0 ;
+(id)iconImageNamed:(id)arg0 withSize:(NSUInteger)arg1 displayStyle:(NSUInteger)arg2 ;
-(BOOL)shouldFlipForRTL;
-(BOOL)wantsManagedVibrancyEffect;
-(NSInteger)renderingModeForSubview:(id)arg0 suggestedRenderingMode:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)managedVisualEffectViews;
-(void)_updateOverrideRenderingModeForSubviewsOfView:(id)arg0 ;
-(void)invalidateRenderingMode;
-(void)reclaimIconIfPossible;
-(void)renounceIconIfPossible;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif