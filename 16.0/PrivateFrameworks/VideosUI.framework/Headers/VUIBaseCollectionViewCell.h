// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIBASECOLLECTIONVIEWCELL_H
#define VUIBASECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIColor, NSString, UIView, CALayer;
@protocol VUICollectionCellEventIntercepting, VUICollectionViewCellInteractor;



@interface VUIBaseCollectionViewCell : UICollectionViewCell <VUICollectionCellEventIntercepting>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic, getter=isBeingDisplayed) BOOL beingDisplayed; // ivar: _beingDisplayed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (retain, nonatomic) UIView *preview; // ivar: _preview
@property (nonatomic) BOOL shouldAppearSelected; // ivar: _shouldAppearSelected
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect vuiBounds;
@property (readonly, nonatomic) UIView *vuiCellView;
@property (weak, nonatomic) NSObject<VUICollectionViewCellInteractor> *vuiCollectionViewCellInteractor; // ivar: _vuiCollectionViewCellInteractor
@property (readonly, nonatomic) UIView *vuiContentView;
@property (readonly, nonatomic) CALayer *vuiLayer;


-(BOOL)vui_addSubview:(id)arg0 oldView:(id)arg1 ;
-(BOOL)vui_highlighted;
-(BOOL)vui_selected;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_sizeThatFits:(struct CGSize )arg0 ;
-(void)didEndDisplaying;
-(void)didSelect;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setupPreview;
-(void)vui_cellDidEndDisplaying;
-(void)vui_cellDidSelect;
-(void)vui_cellWillBeDisplayed;
-(void)vui_prepareForReuse;
-(void)vui_setHighlighted:(BOOL)arg0 ;
-(void)vui_setNeedsLayout;
-(void)vui_setSelected:(BOOL)arg0 ;
-(void)vui_setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willBeDisplayed;


@end


#endif