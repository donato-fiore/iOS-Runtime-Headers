// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITSYSTEMFILTERVIEW_H
#define MKTRANSITSYSTEMFILTERVIEW_H

@class UIView, UICollectionView, UICollectionViewDiffableDataSource, NSIndexPath, NSLayoutConstraint, NSString, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MKTransitSystemFilterViewDelegate;



@interface MKTransitSystemFilterView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

 {
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSIndexPath *_selectedIndexPath;
    NSLayoutConstraint *_heightConstraint;
    CGFloat _cachedHeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKTransitSystemFilterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *transitSystems; // ivar: _transitSystems


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_contentSizeDidChange;
-(void)_setupCollectionView;
-(void)_setupConstraints;
-(void)_updateAppearance;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;


@end


#endif