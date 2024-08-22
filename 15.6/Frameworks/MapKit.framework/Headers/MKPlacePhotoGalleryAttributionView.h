// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEPHOTOGALLERYATTRIBUTIONVIEW_H
#define MKPLACEPHOTOGALLERYATTRIBUTIONVIEW_H

@class UIView, UIButton, NSString, UIVisualEffectView, UILabel, NSArray;
@protocol MKActivityObserving, MUPlacePhotoGalleryAttributionViewDelegate;


#import "MKPlacePhotoGalleryAttributionViewModel.h"

@interface MKPlacePhotoGalleryAttributionView : UIView <MKActivityObserving>



@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlacePhotoGalleryAttributionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) NSArray *primaryLabelOnlyConstraints; // ivar: _primaryLabelOnlyConstraints
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) MKPlacePhotoGalleryAttributionViewModel *viewModel; // ivar: _viewModel


-(NSInteger)blurEffectWithStyle:(NSInteger)arg0 ;
-(id)init;
-(void)_updateAppearance;
-(void)beginAnimatingActivityIndicator;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)setAttributionLogoImage:(id)arg0 ;
-(void)setupSubviews;
-(void)updateFonts;
-(void)updateStyle:(NSInteger)arg0 ;


@end


#endif