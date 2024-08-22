// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEREVIEWPLATTERVIEW_H
#define MUPLACEREVIEWPLATTERVIEW_H

@class UIView, UIView<MULabelViewProtocol>, UILabel, UIImageView, UILayoutGuide, UITapGestureRecognizer, NSAttributedString;


#import "MUPlaceReviewViewModel.h"

@interface MUPlaceReviewPlatterView : UIView {
    UIView<MULabelViewProtocol> *_reviewTextView;
    UILabel *_starLabel;
    UIView<MULabelViewProtocol> *_userLabel;
    UIImageView *_userAvatarImageView;
    UILayoutGuide *_userLabelLayoutGuide;
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) NSAttributedString *starString;
@property (readonly, nonatomic) NSAttributedString *userLabelString;
@property (retain, nonatomic) MUPlaceReviewViewModel *viewModel; // ivar: _viewModel


-(id)_attributesWithFont:(id)arg0 color:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeDidChange;
-(void)_platterTapped;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;


@end


#endif