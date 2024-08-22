// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONTAINERCARDSECTIONVIEW_H
#define CRKCONTAINERCARDSECTIONVIEW_H

@class UIView, NSString, UIView<CRKComposableView>;
@protocol CRKCardSectionView;



@interface CRKContainerCardSectionView : UIView <CRKCardSectionView>

 {
    UIView *_userInputEventInterceptView;
}


@property (copy, nonatomic) NSString *cardSectionViewIdentifier; // ivar: _cardSectionViewIdentifier
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview; // ivar: _composedSuperview
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interceptsTouches;
@property (readonly) Class superclass;


+(struct CGSize )sizeThatFitsCardSection:(id)arg0 boundingSize:(struct CGSize )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)removeFromComposedSuperview;


@end


#endif