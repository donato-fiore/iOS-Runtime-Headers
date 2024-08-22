// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPAGEDIVIDERCOLLECTIONVIEWCELL_H
#define SKUIPAGEDIVIDERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UIColor, NSString;
@protocol SKUIViewElementView;



@interface SKUIPageDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView>

 {
    UIEdgeInsets _contentInset;
    UIView *_topDividerLine;
    UIView *_bottomDividerLine;
    UIView *_insetView;
    UIColor *_insetColor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dividerHeight; // ivar: _dividerHeight
@property (nonatomic) NSInteger dividerType; // ivar: _dividerType
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat leftEdgeInset; // ivar: _leftEdgeInset
@property (nonatomic) CGFloat rightEdgeInset; // ivar: _rightEdgeInset
@property (readonly) Class superclass;
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setColoringWithStyle:(id)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setInsetColor:(id)arg0 ;


@end


#endif