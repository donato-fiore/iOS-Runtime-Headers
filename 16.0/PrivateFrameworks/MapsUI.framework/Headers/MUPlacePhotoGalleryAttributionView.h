// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEPHOTOGALLERYATTRIBUTIONVIEW_H
#define MUPLACEPHOTOGALLERYATTRIBUTIONVIEW_H

@class UIView, UIButton, UILabel, NSLayoutConstraint, NSString, UIVisualEffectView, UIMenu;
@protocol UITextViewDelegate, MKActivityObserving, MUPlacePhotoGalleryAttributionViewDelegate;


#import "MULinkView.h"
#import "MUPlacePhotoGalleryAttributionViewModel.h"

@interface MUPlacePhotoGalleryAttributionView : UIView <UITextViewDelegate, MKActivityObserving>



@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (readonly, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UILabel *captionLabel; // ivar: _captionLabel
@property (retain, nonatomic) NSLayoutConstraint *captionToPrimaryLabelConstraint; // ivar: _captionToPrimaryLabelConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlacePhotoGalleryAttributionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (retain, nonatomic) MULinkView *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) MUPlacePhotoGalleryAttributionViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(void)_attributionTapped;
-(void)_buildAndUpdateDescription;
-(void)_updateAppearance;
-(void)beginAnimatingActivityIndicator;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)setupSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFonts;


@end


#endif