// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIHEROCARDSECTIONVIEW_H
#define SEARCHUIHEROCARDSECTIONVIEW_H

@class NUIContainerStackView, SFImage, NSString, UIVisualEffectView, SFHeroCardSection;
@protocol TLKImageViewDelegate, NUIContainerViewDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIImageView.h"
#import "SearchUIFeatheredBlurView.h"
#import "SearchUILabel.h"

@interface SearchUIHeroCardSectionView : SearchUICardSectionView <TLKImageViewDelegate, NUIContainerViewDelegate>



@property (retain) SearchUIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain) SearchUIFeatheredBlurView *blurEffectView; // ivar: _blurEffectView
@property (retain) NUIContainerStackView *buttonStackView; // ivar: _buttonStackView
@property (retain) NUIContainerStackView *containerStackView; // ivar: _containerStackView
@property (retain) SFImage *currentImage; // ivar: _currentImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NUIContainerStackView *labelsStackView; // ivar: _labelsStackView
@property (retain) UIVisualEffectView *punchoutIndicatorBackgroundBlurView; // ivar: _punchoutIndicatorBackgroundBlurView
@property (retain) SearchUIImageView *punchoutIndicatorImageView; // ivar: _punchoutIndicatorImageView
@property (readonly, nonatomic) SFHeroCardSection *section;
@property (retain) SearchUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain) NUIContainerStackView *thumbnailAndLabelsStackView; // ivar: _thumbnailAndLabelsStackView
@property (retain) SearchUIImageView *thumbnailImageView; // ivar: _thumbnailImageView
@property (retain) SearchUILabel *titleLabel; // ivar: _titleLabel


+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg0 ;
+(BOOL)showsBackgroundImageViewForCardSection:(id)arg0 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg0 ;
-(BOOL)hasBackground;
-(BOOL)showBackgroundImageView;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)buttonPressed:(id)arg0 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)didFailToLoadImage;
-(void)didUpdateWithImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)showGradientAnimated:(BOOL)arg0 ;
-(void)updateButtonsForCardSection:(id)arg0 ;
-(void)updatePunchoutIconForRowModel:(id)arg0 ;
-(void)updatePunchoutImageWithBundleIdentifier:(id)arg0 ;
-(void)updateWithButtonViews:(id)arg0 visible:(BOOL)arg1 addBackground:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)updateWithPunchoutImage:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif