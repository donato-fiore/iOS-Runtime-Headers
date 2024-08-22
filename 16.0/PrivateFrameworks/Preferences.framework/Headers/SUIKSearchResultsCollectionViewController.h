// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUIKSEARCHRESULTSCOLLECTIONVIEWCONTROLLER_H
#define SUIKSEARCHRESULTSCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, UICollectionViewDiffableDataSource;
@protocol PSKeyboardNavigationSearchResultsController, SUIKSearchResultsCollectionViewControllerDelegate;


#import "_SUIKSearchResultsUpdateOperation.h"

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>



@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation; // ivar: _updateOperation


-(CGFloat)iconWidth;
-(NSUInteger)totalSearchResults;
-(id)init;
-(void)_selectAndScrollToIndexPath:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchQueryCompleted;
-(void)searchQueryFoundItems:(id)arg0 ;
-(void)searchQueryStarted;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)setResults:(id)arg0 ;
-(void)showSelectedSearchResult;
-(void)viewDidLoad;


@end


#endif