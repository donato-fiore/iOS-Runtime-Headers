// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMULTIRESULTCOLLECTIONVIEW_H
#define SEARCHUIMULTIRESULTCOLLECTIONVIEW_H

@class UICollectionView, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SearchUIHomeScreenEngagementDelegate, SearchUIFeedbackDelegateInternal;


#import "SearchUIMultiResultRowModel.h"

@interface SearchUIMultiResultCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SearchUIHomeScreenEngagementDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegateInternal> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightFirstCell; // ivar: _highlightFirstCell
@property (nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (retain) SearchUIMultiResultRowModel *rowModel; // ivar: _rowModel
@property (readonly) Class superclass;
@property (retain) NSArray *visibleResults; // ivar: _visibleResults


+(CGFloat)distanceToTopOfAppIconsForMultiResultCell;
+(CGFloat)idealHorizontalSpacingBetweenIcons;
+(NSInteger)numberOfIcons;
+(struct CGSize )itemSize;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)focusGroupIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)deleteIcon:(id)arg0 ;
-(void)didUpdateKeyboardFocusToResult:(id)arg0 cardSection:(id)arg1 ;
-(void)updateCountsAnimated:(BOOL)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif