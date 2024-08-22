// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBHEADERVIEW_H
#define OBHEADERVIEW_H

@class UIView, NSArray, UIImage;


#import "OBHeaderAccessoryButton.h"
#import "OBAnimationView.h"
#import "OBTemplateHeaderDetailLabel.h"
#import "OBTemplateLabel.h"
#import "OBImageView.h"

@interface OBHeaderView : UIView {
    BOOL _usingSymbolImage;
}


@property (retain, nonatomic) OBHeaderAccessoryButton *accessoryButton; // ivar: _accessoryButton
@property (nonatomic) BOOL allowFullWidthIcon; // ivar: _allowFullWidthIcon
@property (retain, nonatomic) OBAnimationView *animationView; // ivar: _animationView
@property (retain, nonatomic) UIView *customIconContainerView; // ivar: _customIconContainerView
@property (retain, nonatomic) OBTemplateHeaderDetailLabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) NSArray *detailLabelConstraints; // ivar: _detailLabelConstraints
@property (retain, nonatomic) OBTemplateLabel *headerLabel; // ivar: _headerLabel
@property (nonatomic) BOOL iconInheritsTint; // ivar: _iconInheritsTint
@property (retain, nonatomic) OBImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSArray *imageViewConstraints; // ivar: _imageViewConstraints
@property (retain, nonatomic) UIImage *originalIconImage; // ivar: _originalIconImage
@property (retain, nonatomic) OBTemplateLabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSArray *subtitleLabelConstraints; // ivar: _subtitleLabelConstraints
@property (nonatomic) NSUInteger templateType; // ivar: _templateType
@property (retain, nonatomic) UIView *topAssetContainer; // ivar: _topAssetContainer
@property (retain, nonatomic) NSArray *topAssetContainerConstraints; // ivar: _topAssetContainerConstraints
@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks


-(CGFloat)_setupAssistantIconHeight;
-(CGFloat)bottomPadding;
-(CGFloat)iconHeight;
-(CGFloat)iconToHeaderLabelPadding;
-(CGFloat)topPadding;
-(id)_createDetailLabelIfNeeded;
-(id)_createImageView:(id)arg0 ;
-(id)_detailFont;
-(id)_subtitleFont;
-(id)_symbolIconForHeaderStyle:(id)arg0 configuration:(id)arg1 ;
-(id)headerFont;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 ;
-(id)initWithTitle:(id)arg0 symbolName:(id)arg1 ;
-(id)symbolConfiguration;
-(id)title;
-(void)_animateDetailLabelAlpha:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)_insertAndLayoutImageViewIfNeeded;
-(void)_layoutTopAssetContainer;
-(void)_updateConstraintsForDetailLabel;
-(void)_updateConstraintsForSubtitle;
-(void)addAccessoryButton:(id)arg0 ;
-(void)extendedInitWithTitle:(id)arg0 detailText:(id)arg1 ;
-(void)removeAccessoryButton;
-(void)removeDetailLabel;
-(void)setDetailText:(id)arg0 ;
-(void)setDetailedTextHeader:(id)arg0 detailedTextBody:(id)arg1 ;
-(void)setIcon:(id)arg0 accessibilityLabel:(id)arg1 ;
-(void)setLanguage:(id)arg0 ;
-(void)setSubtitleText:(id)arg0 ;
-(void)setSymbol:(id)arg0 accessibilityLabel:(id)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitleHyphenationFactor:(float)arg0 ;
-(void)setTitleTrailingSymbol:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif