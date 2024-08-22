// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCFAVORITESMANAGER_H
#define DOCFAVORITESMANAGER_H

@class NSArray;


#import "DOCItemCollectionObserver.h"

@interface DOCFavoritesManager : DOCItemCollectionObserver

@property (readonly) NSArray *favoritedLocations;
@property (readonly) BOOL isGathering;


+(id)favoritesCollection;
+(id)sharedManager;
-(id)_newlyComputedRanksForItems:(id)arg0 ;
-(void)_reverseInsertAll:(id)arg0 atIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)addFavorite:(id)arg0 completion:(id)arg1 ;
-(void)favoriteItems:(id)arg0 ranks:(id)arg1 completion:(id)arg2 ;
-(void)insertFavorite:(id)arg0 atIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)insertFavorites:(id)arg0 atIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)moveFavorite:(id)arg0 toTargetIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)redistributeRanksCompletion:(id)arg0 ;
-(void)removeFavorite:(id)arg0 completion:(id)arg1 ;
-(void)runInMainThread:(id)arg0 ;
-(void)updateFavoritesRanksToMatchOrderedFavorites:(id)arg0 completion:(id)arg1 ;


@end


#endif