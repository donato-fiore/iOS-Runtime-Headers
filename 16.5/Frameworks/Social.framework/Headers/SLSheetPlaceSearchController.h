// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHEETPLACESEARCHCONTROLLER_H
#define SLSHEETPLACESEARCHCONTROLLER_H

@class NSTimer, NSString, NSLock, UISearchDisplayController, NSArray;
@protocol UITableViewDataSource, SLPlaceDataSourceDelegate, SLPlaceDataSource;

#import <Foundation/Foundation.h>


@interface SLSheetPlaceSearchController : NSObject <UITableViewDataSource, SLPlaceDataSourceDelegate>

 {
    NSTimer *_delayTimer;
    BOOL _isSearching;
    NSString *_searchString;
    int _retryCount;
    NSLock *_retryLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<SLPlaceDataSource> *placeDataSource; // ivar: _placeDataSource
@property (retain) UISearchDisplayController *searchDisplayController; // ivar: _searchDisplayController
@property (retain) NSArray *searchResults; // ivar: _searchResults
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPlaceDataSource:(id)arg0 searchDisplayController:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancelSearch;
-(void)performDelayedFetch:(id)arg0 ;
-(void)placeManager:(id)arg0 failedWithError:(id)arg1 ;
-(void)placeManager:(id)arg0 updatedPlaces:(id)arg1 ;
-(void)searchWithSearchString:(id)arg0 ;


@end


#endif