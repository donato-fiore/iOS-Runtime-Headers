// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONLISTACCESSORYVIEW_H
#define CKCONVERSATIONLISTACCESSORYVIEW_H

@class UIControl, UIVisualEffectView, UIView, NSDictionary, UIImageView, NSNumber, UIImageSymbolConfiguration;



@interface CKConversationListAccessoryView : UIControl

@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *colorView; // ivar: _colorView
@property (retain, nonatomic) NSDictionary *configStateMap; // ivar: _configStateMap
@property (nonatomic) BOOL imageNeedsEdgeAntiAliasing; // ivar: _imageNeedsEdgeAntiAliasing
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSNumber *lastKnownState; // ivar: _lastKnownState
@property (nonatomic) BOOL needsVibrancy; // ivar: _needsVibrancy
@property (nonatomic) BOOL needsVisualEffects; // ivar: _needsVisualEffects
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView; // ivar: _vibrancyView


+(CGFloat)defaultDiameter;
+(id)defaultStateConfigMap;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)configForState:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDiameter:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setConfig:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setNeedsVisualAppearanceUpdate;
-(void)_updateVisualAppearanceForCurrentStateIfNeeded;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setBlurEffect:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setBlurEffect:(id)arg0 withVibrancyEffectStyle:(NSInteger)arg1 forState:(NSUInteger)arg2 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setVibrancyEffectStyle:(NSInteger)arg0 forState:(NSUInteger)arg1 ;


@end


#endif