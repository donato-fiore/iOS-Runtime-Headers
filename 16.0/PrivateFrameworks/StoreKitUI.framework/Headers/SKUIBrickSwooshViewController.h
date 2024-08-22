// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBRICKSWOOSHVIEWCONTROLLER_H
#define SKUIBRICKSWOOSHVIEWCONTROLLER_H

@class UICollectionView, NSMutableIndexSet, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;


#import "SKUISwooshViewController.h"
#import "SKUISwooshView.h"

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    BOOL _delegateWantsWillDisplay;
    NSMutableIndexSet *_hiddenImageIndexSet;
    ? _metrics;
    BOOL _showBrickTitles;
    NSString *_swooshTitle;
    SKUISwooshView *_swooshView;
}


@property (copy, nonatomic) NSArray *bricks; // ivar: _bricks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathsForVisibleItems;
-(id)initWithSwoosh:(id)arg0 ;
-(id)popImageViewForItemAtIndex:(NSInteger)arg0 ;
-(struct ? )_brickSwooshMetrics;
-(struct CGRect )frameForItemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)deselectAllItems;
-(void)loadView;
-(void)setClientContext:(id)arg0 ;
-(void)setColorScheme:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setImage:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)unhideImages;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif