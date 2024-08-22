// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUICARDSECTIONVIEW_H
#define SIRIUICARDSECTIONVIEW_H

@class UIView, NSString, UIView<CRKComposableView>, UIView<SiriUIReusableView>;
@protocol CRKCardSectionView;



@interface SiriUICardSectionView : UIView <CRKCardSectionView>



@property (copy, nonatomic) NSString *cardSectionViewIdentifier; // ivar: _cardSectionViewIdentifier
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview; // ivar: _composedSuperview
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView<SiriUIReusableView> *footerView; // ivar: _footerView
@property (nonatomic) CGFloat footerViewHeight; // ivar: _footerViewHeight
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView<SiriUIReusableView> *headerView; // ivar: _headerView
@property (nonatomic) CGFloat headerViewHeight; // ivar: _headerViewHeight
@property (readonly) Class superclass;


+(struct CGSize )sizeThatFitsCardSection:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(id)accessibilityIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)removeFromComposedSuperview;


@end


#endif