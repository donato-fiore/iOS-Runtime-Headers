// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARCUSTOMIZATIONITEMRESERVOIRVIEW_H
#define _UIBARCUSTOMIZATIONITEMRESERVOIRVIEW_H

@class NSString, NSMutableArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;


#import "UIView.h"
#import "_UIShapeView.h"
#import "UICollectionView.h"
#import "UILabel.h"
#import "_UIDiffuseShadowView.h"
#import "UINavigationBar.h"

@interface _UIBarCustomizationItemReservoirView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

 {
    BOOL _computedInitialSize;
    BOOL _isEmpty;
}


@property (retain, nonatomic) _UIShapeView *arrowView; // ivar: _arrowView
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) UILabel *noContentLabel; // ivar: _noContentLabel
@property (retain, nonatomic) _UIDiffuseShadowView *shadowView; // ivar: _shadowView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *tipLabel; // ivar: _tipLabel
@property (retain, nonatomic) UINavigationBar *topBar; // ivar: _topBar


-(BOOL)canBecomeFirstResponder;
-(CGFloat)_minimumLineSpacing;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_collectionView:(id)arg0 layout:(id)arg1 flowLayoutRowAlignmentOptionsForSection:(NSInteger)arg2 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)flowLayout;
-(id)initWithItems:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_updateArrowColor;
-(void)_updateEmptyState;
-(void)addItem:(id)arg0 ;
-(void)invalidateLayoutAndForceUpdate:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)removeItem:(id)arg0 ;
-(void)scrollViewDidChangeContentSize:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setDoneAction:(id)arg0 ;
-(void)setExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setResetAction:(id)arg0 ;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif