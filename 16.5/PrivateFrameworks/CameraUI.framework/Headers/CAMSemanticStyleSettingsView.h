// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSEMANTICSTYLESETTINGSVIEW_H
#define CAMSEMANTICSTYLESETTINGSVIEW_H

@class UIView, UILabel, NSLayoutConstraint, UIScrollView, UIButton, NSArray, NSString;
@protocol CAMSemanticStylePickerDelegate, CEKBadgeViewDelegate, CAMSemanticStyleSettingsViewDelegate;


#import "CAMSemanticStyleDetailView.h"
#import "CAMSemanticStylePicker.h"

@interface CAMSemanticStyleSettingsView : UIView <CAMSemanticStylePickerDelegate, CEKBadgeViewDelegate>



@property (readonly, nonatomic) UILabel *_descriptionLabel; // ivar: __descriptionLabel
@property (retain, nonatomic, setter=_setDescriptionLabelTopConstraint:) NSLayoutConstraint *_descriptionLabelTopConstraint; // ivar: __descriptionLabelTopConstraint
@property (readonly, nonatomic) UIScrollView *_scrollView; // ivar: __scrollView
@property (readonly, nonatomic) UIButton *_selectButton; // ivar: __selectButton
@property (readonly, nonatomic) NSArray *_semanticStyleBadges; // ivar: __semanticStyleBadges
@property (readonly, nonatomic) CAMSemanticStyleDetailView *_semanticStyleDetailView; // ivar: __semanticStyleDetailView
@property (readonly, nonatomic) NSArray *_semanticStyleImageViews; // ivar: __semanticStyleImageViews
@property (readonly, nonatomic) CAMSemanticStylePicker *_semanticStylePicker; // ivar: __semanticStylePicker
@property (readonly, nonatomic) NSArray *_semanticStyles; // ivar: __semanticStyles
@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMSemanticStyleSettingsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsTitle; // ivar: _showsTitle
@property (readonly) Class superclass;


-(id)_previewImageNameForSemanticStylePreset:(NSInteger)arg0 ;
-(id)init;
-(void)_handleUseStyleButtonReleased:(id)arg0 ;
-(void)_layoutSemanticStyleMaskedBadgesForContentFrame:(struct CGRect )arg0 ;
-(void)_updateUIForShowsTitle;
-(void)_updateUIForStyle:(id)arg0 ;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)layoutSubviews;
-(void)semanticStylePickerDidChangeSelectedStyle:(id)arg0 ;
-(void)semanticStylePickerDidScroll:(id)arg0 ;


@end


#endif