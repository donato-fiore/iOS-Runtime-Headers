// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSCALARGRAPHCOLLECTIONVIEWCONTROLLER_H
#define HKSCALARGRAPHCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, NSArray, UICollectionView, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, HKScalarGraphCollectionViewDelegate;


#import "HKScalarGraphCollectionViewCell.h"
#import "HKUnitPreferenceController.h"

@interface HKScalarGraphCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>



@property (copy, nonatomic) NSArray *audiograms; // ivar: _audiograms
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) CGFloat collectionViewHeight; // ivar: _collectionViewHeight
@property (weak, nonatomic) HKScalarGraphCollectionViewCell *currentCell; // ivar: _currentCell
@property (nonatomic) NSInteger currentIndex; // ivar: _currentIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKScalarGraphCollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (readonly) Class superclass;
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_buildCollectionViewLayout;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithMinimumHeight:(CGFloat)arg0 unitController:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )preferredContentSize;
-(void)_pinView:(id)arg0 toParentGuide:(id)arg1 ;
-(void)_setupChartCollectionView;
-(void)redrawCurrentCell;
-(void)reload;
-(void)resetToIndex:(NSInteger)arg0 ;
-(void)resetToMostRecent;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif