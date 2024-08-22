// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPMODIFYFAVORITESOPERATION_H
#define FPMODIFYFAVORITESOPERATION_H

@class NSArray;


#import "FPTransformOperation.h"

@interface FPModifyFavoritesOperation : FPTransformOperation {
    NSArray *_ranks;
    BOOL _isUnfavorite;
}




-(NSUInteger)transformItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 favoriteRanks:(id)arg1 isUnfavorite:(BOOL)arg2 ;
-(id)initWithItemsToFavorite:(id)arg0 favoriteRanks:(id)arg1 ;
-(id)initWithItemsToUnfavorite:(id)arg0 ;
-(id)replicateForItems:(id)arg0 ;


@end


#endif