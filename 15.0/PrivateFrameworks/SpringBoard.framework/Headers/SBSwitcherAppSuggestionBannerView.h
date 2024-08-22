// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERAPPSUGGESTIONBANNERVIEW_H
#define SBSWITCHERAPPSUGGESTIONBANNERVIEW_H

@class PLPlatterView, UIImageView, UILabel, UIView;


#import "SBBestAppSuggestion.h"

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {
    SBBestAppSuggestion *_suggestion;
    UIImageView *_iconView;
    UILabel *_appLabel;
    UILabel *_descriptionLabel;
    BOOL _highlighted;
    UIView *_highlightDarkeningView;
}


@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) SBBestAppSuggestion *representedAppSuggestion;
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(BOOL)_isSingleLine;
-(id)_appTitleForSuggestion:(id)arg0 ;
-(id)_borderView;
-(id)_descriptionFont;
-(id)_descriptionStringForSuggestion:(id)arg0 ;
-(id)_firstWakeGreetingString;
-(id)_iconImageFromAppWithBundleIdentifier:(id)arg0 withIconImageCache:(id)arg1 ;
-(id)_meCardShortName;
-(id)_textStyle;
-(id)_titleFont;
-(id)initWithFrame:(struct CGRect )arg0 appSuggestion:(id)arg1 style:(NSUInteger)arg2 ;
-(id)initWithRecipe:(NSInteger)arg0 ;
-(void)_configureConstraints;
-(void)_createAppLabelForSuggestion:(id)arg0 ;
-(void)_createDarkeningView;
-(void)_createDescriptionLabelForSuggestion:(id)arg0 ;
-(void)_createIconViewForSuggestion:(id)arg0 ;
-(void)_updateAppearanceForCurrentUserInterfaceStyle;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif