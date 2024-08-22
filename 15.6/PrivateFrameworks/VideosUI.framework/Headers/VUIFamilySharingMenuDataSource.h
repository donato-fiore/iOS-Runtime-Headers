// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFAMILYSHARINGMENUDATASOURCE_H
#define VUIFAMILYSHARINGMENUDATASOURCE_H

@class NSArray, NSString;


#import "VUILibraryMenuDataSource.h"
#import "VUIMediaAPIClient.h"

@interface VUIFamilySharingMenuDataSource : VUILibraryMenuDataSource

@property (retain, nonatomic) NSArray *genres; // ivar: _genres
@property (nonatomic) BOOL hasFetchedGenres; // ivar: _hasFetchedGenres
@property (nonatomic) BOOL hasFetchedMovies; // ivar: _hasFetchedMovies
@property (nonatomic) BOOL hasFetchedRecentPurchases; // ivar: _hasFetchedRecentPurchases
@property (nonatomic) BOOL hasFetchedShows; // ivar: _hasFetchedShows
@property (nonatomic) BOOL hasMovies; // ivar: _hasMovies
@property (nonatomic) BOOL hasRecentPurchases; // ivar: _hasRecentPurchases
@property (nonatomic) BOOL hasShows; // ivar: _hasShows
@property (retain, nonatomic) VUIMediaAPIClient *mediaClient; // ivar: _mediaClient
@property (retain, nonatomic) NSString *ownerIdentifier; // ivar: _ownerIdentifier


-(BOOL)_hasCompletedAllFetches;
-(id)_categoryTypesSortComparator:(SEL)arg0 ;
-(id)_constructGenreMenuItems;
-(id)_constructMainMenuItems;
-(id)_constructVUIMenuDataSource;
-(id)getGenreByGenreTitle:(id)arg0 ;
-(id)initWithValidCategories:(id)arg0 ;
-(void)_fetchGenres;
-(void)_fetchMovies;
-(void)_fetchRecentPurchases;
-(void)_fetchShows;
-(void)_notifyDelegatesFetchDidComplete;
-(void)startFetch;


@end


#endif