// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPFAVORITESCONTAINER_H
#define MSPFAVORITESCONTAINER_H



#import "MSPContainer.h"

@interface MSPFavoritesContainer : MSPContainer



+(id)sharedLocalContainer;
-(id)placesQueryWithDelegate:(id)arg0 ;
-(id)queryWithDelegate:(id)arg0 ;
-(id)transiteLinesQueryWithDelegate:(id)arg0 ;
-(void)deDuplicateFavoritesWithCompletion:(id)arg0 ;
-(void)moveFavorite:(id)arg0 belowFavorite:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;
-(void)moveFavoriteWithIdentifier:(id)arg0 belowFavoriteWithIdentifier:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4 ;


@end


#endif