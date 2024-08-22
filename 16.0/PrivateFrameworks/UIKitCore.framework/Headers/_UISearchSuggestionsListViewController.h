// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHSUGGESTIONSLISTVIEWCONTROLLER_H
#define _UISEARCHSUGGESTIONSLISTVIEWCONTROLLER_H

@class NSString;
@protocol UICollectionViewDelegate;


#import "UICollectionViewController.h"
#import "UICollectionViewDiffableDataSource.h"
#import "UISearchController.h"

@interface _UISearchSuggestionsListViewController : UICollectionViewController <UICollectionViewDelegate>



@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 canPerformPrimaryActionForItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchController:(id)arg0 ;
-(void)collectionView:(id)arg0 performPrimaryActionForItemAtIndexPath:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateList;
-(void)viewDidLoad;


@end


#endif