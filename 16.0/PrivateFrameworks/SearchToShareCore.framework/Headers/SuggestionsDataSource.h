// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUGGESTIONSDATASOURCE_H
#define SUGGESTIONSDATASOURCE_H

@class NSString;
@protocol UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, PopUpDataSource, PopUpDelegate, STSSuggestionSelectionDelegate, STSSearchModelUpdateDelegate;

#import <Foundation/Foundation.h>

#import "STSSearchModel.h"

@interface SuggestionsDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource, UIScrollViewDelegate, PopUpDataSource, PopUpDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isScrolling; // ivar: _isScrolling
@property (retain, nonatomic) STSSearchModel *searchModel; // ivar: _searchModel
@property (weak, nonatomic) NSObject<STSSuggestionSelectionDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<STSSearchModelUpdateDelegate> *updateDelgate; // ivar: _updateDelgate


-(BOOL)isGroupRow:(NSInteger)arg0 ;
-(BOOL)rowHasClearButton:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)headerTitleForRow:(NSInteger)arg0 ;
-(id)initWithSearchModel:(id)arg0 ;
-(id)stringValueForRowAtIndex:(NSInteger)arg0 ;
-(void)clearSuggestions;
-(void)didSelectItemAtIndex:(NSInteger)arg0 ;
-(void)updateQuerySuggestions:(id)arg0 ;


@end


#endif