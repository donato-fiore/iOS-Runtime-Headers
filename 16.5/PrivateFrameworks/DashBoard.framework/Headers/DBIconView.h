// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBICONVIEW_H
#define DBICONVIEW_H

@class SBIconView, UIView;


#import "DBIconDropShadowProvider.h"
#import "DBIconLabelBackdropView.h"

@interface DBIconView : SBIconView

@property (retain, nonatomic) DBIconDropShadowProvider *dropShadowProvider; // ivar: _dropShadowProvider
@property (retain, nonatomic) UIView *dropShadowView; // ivar: _dropShadowView
@property (retain, nonatomic) DBIconLabelBackdropView *labelLegibilityView; // ivar: _labelLegibilityView
@property (nonatomic) BOOL shadowHidden; // ivar: _shadowHidden


+(BOOL)_iconLabelsRequireBackground;
+(BOOL)allowsLabelAccessoryView;
+(BOOL)supportsCursorInteraction;
+(BOOL)supportsDragInteraction;
+(BOOL)supportsPreviewInteraction;
+(CGFloat)_labelHeight;
+(CGFloat)maximumIconViewHeightForIconImageSize:(struct CGSize )arg0 ;
+(id)defaultIconLocation;
+(id)environmentConfiguration;
+(id)focusColorForTraitCollection:(id)arg0 ;
+(id)focusTextColorForTraitCollection:(id)arg0 ;
+(id)labelFontForTraitCollection:(id)arg0 ;
+(id)textColorForTraitCollection:(id)arg0 ;
+(struct CGSize )maxLabelSizeForIconImageSize:(struct CGSize )arg0 ;
+(struct UIEdgeInsets )minimumInterIconSpacing;
+(void)_updateCharacteristicsWithTraitCollection:(id)arg0 ;
+(void)setEnvironmentConfiguration:(id)arg0 ;
-(BOOL)canBecomeFocused;
-(CGFloat)_labelBaselineOffsetFromImage;
-(id)initWithConfigurationOptions:(NSUInteger)arg0 listLayoutProvider:(id)arg1 ;
-(id)labelFont;
-(struct CGRect )_frameForLabelHighlight;
-(void)_configureIconImageView:(id)arg0 ;
-(void)_refreshDropShadowWithIconImage:(id)arg0 ;
-(void)_updateLabel;
-(void)_wallpaperChanged:(id)arg0 ;
-(void)configureLabelImageParametersBuilder:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setLabelHidden:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif