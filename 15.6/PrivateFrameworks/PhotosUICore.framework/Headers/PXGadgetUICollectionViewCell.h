// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGADGETUICOLLECTIONVIEWCELL_H
#define PXGADGETUICOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView;



@interface PXGadgetUICollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *gadgetContentView; // ivar: _gadgetContentView


+(Class)_contentViewClass;
-(id)focusEffect;
-(void)_updateFocusRing;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif