// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFTCONTACTSEARCHCONTROLLER_H
#define SKUIGIFTCONTACTSEARCHCONTROLLER_H

@class NSMutableArray, NSArray, MFContactsSearchManager, UIView, NSNumber, UITableView, NSString;
@protocol MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate, SKUIGiftContactSearchDelegate;

#import <Foundation/Foundation.h>


@interface SKUIGiftContactSearchController : NSObject <MFContactsSearchConsumer, UITableViewDataSource, UITableViewDelegate>

 {
    NSMutableArray *_autocompleteSearchResults;
    NSArray *_results;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIGiftContactSearchDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfResults;
@property (readonly, nonatomic) UIView *searchResultsView;
@property (readonly) Class superclass;


-(BOOL)cancelSearch;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_tableView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_finishSearchWithResults:(id)arg0 ;
-(void)_setResults:(id)arg0 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)dealloc;
-(void)finishedSearchingForAutocompleteResults;
-(void)makeChildLabelsSupportDarkMode:(id)arg0 ;
-(void)resetSearch;
-(void)searchForText:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif