// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATEGORIESDATASOURCE_H
#define CATEGORIESDATASOURCE_H

@class NSArray, NSString, NSMutableArray;
@protocol UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegate, PopUpDataSource, PopUpDelegate, STSCategorySelectionDelegate, STSSearchModelUpdateDelegate;

#import <Foundation/Foundation.h>

#import "STSSearchModel.h"

@interface CategoriesDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegate, PopUpDataSource, PopUpDelegate>



@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isScrolling; // ivar: _isScrolling
@property (retain, nonatomic) NSMutableArray *model; // ivar: _model
@property (retain, nonatomic) NSMutableArray *recents; // ivar: _recents
@property (retain, nonatomic) STSSearchModel *searchModel; // ivar: _searchModel
@property (weak, nonatomic) NSObject<STSCategorySelectionDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<STSSearchModelUpdateDelegate> *updateDelegate; // ivar: _updateDelegate


-(BOOL)isGroupRow:(NSInteger)arg0 ;
-(BOOL)rowHasClearButton:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)_searchResultIdentifierForSuggestion:(id)arg0 recent:(BOOL)arg1 ;
-(id)headerTitleForRow:(NSInteger)arg0 ;
-(id)initWithSearchModel:(id)arg0 ;
-(id)recentQueries;
-(id)stringValueForRowAtIndex:(NSInteger)arg0 ;
-(id)visibleResultsForIndexPaths:(id)arg0 ;
-(void)_commitClearRecents;
-(void)addQueryToRecents:(id)arg0 ;
-(void)didSelectItemAtIndex:(NSInteger)arg0 ;
-(void)sendRankSectionsFeedback;
-(void)updateModel;
-(void)updateRecents:(id)arg0 ;


@end


#endif