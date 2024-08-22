// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEHEADERVIEW_H
#define MUPLACEHEADERVIEW_H

@class UIView, UILabel, UIButton, MKTransitInfoLabelView, NSLayoutConstraint, NSString;
@protocol MKActivityObserving, MUPlaceHeaderViewDelegate, MUPlaceHeaderViewModel;


#import "MUImageView.h"

@interface MUPlaceHeaderView : UIView <MKActivityObserving>

 {
    MUImageView *_heroImageView;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    UIButton *_containmentLabel;
    UILabel *_verifiedLabel;
    MKTransitInfoLabelView *_transitInfoLabelView;
    id *_trailingConstraintProvider;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_secondaryTitleTrailingConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressContainmentTap; // ivar: _suppressContainmentTap
@property (readonly, nonatomic) NSObject<MUPlaceHeaderViewModel> *viewModel; // ivar: _viewModel


+(CGFloat)minimalModeHeight;
-(CGFloat)_trailingPadding;
-(id)_verifiedAttributedString;
-(id)initWithViewModel:(id)arg0 trailingConstraintProvider:(id)arg1 ;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_tappedEnclosingPlace;
-(void)_updateAppearance;
-(void)_updateContainmentLineWithAttributedString;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)hideTitle:(BOOL)arg0 ;
-(void)reloadTrailingConstraint;


@end


#endif