// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUISNIPPETCONTROLLERCELL_H
#define SIRIUISNIPPETCONTROLLERCELL_H

@class UICollectionViewCell, UIView, UILabel, UICollectionReusableView<SiriUIReusableView>, NSString;
@protocol SiriUIReusableView;


#import "SiriUIKeyline.h"
#import "SiriUIContentButton.h"
#import "SiriUISnippetViewController.h"

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView>

 {
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UIView *_materialView;
    UIView *_clippingContainerView;
    UIView *_cancelledTouchPreventionView;
    UILabel *_cancelledLabel;
    BOOL _cellIsUsingPlatterStyle;
    CGFloat _topPadding;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) UIEdgeInsets snippetEdgeInsets; // ivar: _snippetEdgeInsets
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController; // ivar: _snippetViewController
@property (readonly) Class superclass;


+(CGFloat)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
+(struct CGRect )contentBoundsForCollectionViewCellBounds:(struct CGRect )arg0 snippetViewController:(id)arg1 ;
-(CGFloat)_heightForFooterView;
-(CGFloat)_heightForHeaderView;
-(CGFloat)_heightForTransparentFooterView;
-(CGFloat)_heightForTransparentHeaderView;
-(id)accessibilityIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureSubviewsForCurrentInset;
-(void)_setFooterView:(id)arg0 ;
-(void)_setHeaderView:(id)arg0 ;
-(void)_setTransparentFooterView:(id)arg0 ;
-(void)_setTransparentHeaderView:(id)arg0 ;
-(void)_snippetPunchOutButtonTapped:(id)arg0 ;
-(void)animateSnippetCancellationWithCompletion:(id)arg0 ;
-(void)animateSnippetConfirmationWithCompletion:(id)arg0 ;
-(void)animateSnippetResizeToSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setShowBackgroundView:(BOOL)arg0 ;
-(void)setTopPadding:(CGFloat)arg0 ;


@end


#endif