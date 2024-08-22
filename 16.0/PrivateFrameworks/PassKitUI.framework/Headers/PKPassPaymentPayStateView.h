// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSPAYMENTPAYSTATEVIEW_H
#define PKPASSPAYMENTPAYSTATEVIEW_H

@class UIView, NSString, UILabel, PKGlyphView;
@protocol PKGlyphViewDelegate, PKPassPaymentPayStateViewDelegate;



@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate>

 {
    NSInteger _style;
    CGFloat _glyphViewPadding;
    CGFloat _labelTopPadding;
    BOOL _didLayout;
}


@property (nonatomic) BOOL accessPass; // ivar: _accessPass
@property (readonly, nonatomic) BOOL biometricsUnavailableHint; // ivar: _biometricsUnavailableHint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (weak, nonatomic) NSObject<PKPassPaymentPayStateViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKGlyphView *glyph; // ivar: _glyph
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL homeKeyPass; // ivar: _homeKeyPass
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat labelAlpha; // ivar: _labelAlpha
@property (nonatomic) CGFloat labelStateBottomInset; // ivar: _labelStateBottomInset
@property (readonly, nonatomic) NSInteger layoutState; // ivar: _layoutState
@property (nonatomic) BOOL persistentEmulationHint; // ivar: _persistentEmulationHint
@property (nonatomic) BOOL recognizingHint; // ivar: _recognizingHint
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userIntentStyle; // ivar: _userIntentStyle


-(BOOL)_canEmphasizeState:(NSInteger)arg0 ;
-(BOOL)_canPreserveGlyphForState:(NSInteger)arg0 ;
-(BOOL)labelWillChangeForState:(NSInteger)arg0 withOverrideText:(id)arg1 ;
-(NSInteger)_defaultGlyphStateForState:(NSInteger)arg0 ;
-(id)_attributedTextWithTitle:(id)arg0 ;
-(id)_attributedTextWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(id)_textForState:(NSInteger)arg0 textOverride:(id)arg1 ;
-(id)_titleForUserIntent;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_applyStatePreservingGlyphState:(BOOL)arg0 overridingText:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_configureLayoutMetrics;
-(void)_resolveLayout;
-(void)dealloc;
-(void)emphasizeStateIfPossible:(NSInteger)arg0 withOverrideText:(id)arg1 ;
-(void)glyphView:(id)arg0 revealingCheckmark:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)updateDebugLabel:(id)arg0 isErrorState:(BOOL)arg1 ;


@end


#endif