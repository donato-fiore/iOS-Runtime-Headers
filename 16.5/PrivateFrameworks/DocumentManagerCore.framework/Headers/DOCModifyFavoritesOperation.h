// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCMODIFYFAVORITESOPERATION_H
#define DOCMODIFYFAVORITESOPERATION_H

@class FPModifyFavoritesOperation, NSString, NSArray;
@protocol DOCUndoableOperation;


#import "DOCUndoManager.h"

@interface DOCModifyFavoritesOperation : FPModifyFavoritesOperation <DOCUndoableOperation>



@property (readonly, nonatomic) NSString *actionNameForUndoing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isUnfavorite; // ivar: _isUnfavorite
@property (readonly, nonatomic) NSArray *oldFavorites; // ivar: _oldFavorites
@property (readonly, nonatomic) NSArray *oldRanks; // ivar: _oldRanks
@property (readonly) Class superclass;
@property (readonly, nonatomic) DOCUndoManager *undoManager; // ivar: _undoManager
@property (readonly, nonatomic) NSArray *updatedRanks; // ivar: _updatedRanks


-(id)currentFavoriteRanks;
-(id)currentFavorites;
-(id)favoriteRanksFromItems:(id)arg0 ;
-(id)initWithItemsToFavorite:(id)arg0 favoriteRanks:(id)arg1 undoManager:(id)arg2 ;
-(id)initWithItemsToUnfavorite:(id)arg0 undoManager:(id)arg1 ;
-(id)operationForRedoing;
-(id)operationForUndoing;
-(void)registerUndo;


@end


#endif