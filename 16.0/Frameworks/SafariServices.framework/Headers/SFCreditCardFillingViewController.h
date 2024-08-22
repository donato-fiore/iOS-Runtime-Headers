// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCREDITCARDFILLINGVIEWCONTROLLER_H
#define SFCREDITCARDFILLINGVIEWCONTROLLER_H

@class UIViewController, NSArray, UICollectionView, UIImageView, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UIPredictiveViewController;


#import "SFFormAutocompleteState.h"

@interface SFCreditCardFillingViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPredictiveViewController>

 {
    NSArray *_creditCards;
    UICollectionView *_collectionView;
    UIImageView *_leftShadowView;
    UIImageView *_rightShadowView;
    CGFloat _lastLayoutWidth;
    CGFloat _cachedCellWidth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly, weak, nonatomic) SFFormAutocompleteState *formAutocompleteState; // ivar: _formAutocompleteState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(CGFloat)_calculateCellWidthForCollectionViewWidth:(CGFloat)arg0 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithFormAutocompleteState:(id)arg0 ;
-(void)_cardDataChanged:(id)arg0 ;
-(void)_loadCardData;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif