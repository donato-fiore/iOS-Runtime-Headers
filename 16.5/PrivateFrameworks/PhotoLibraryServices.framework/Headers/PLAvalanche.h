// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAVALANCHE_H
#define PLAVALANCHE_H

@class NSMutableIndexSet, NSIndexSet, NSOrderedSet, NSString, NSDate, NSArray;
@protocol PLAssetContainer, PLAssetChangeObserver;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"
#import "PLPhotoLibrary.h"

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver>



@property (retain, nonatomic, setter=_setANewPick:) PLManagedAsset *_aNewPick; // ivar: __aNewPick
@property (retain, nonatomic, setter=_setAnOldPick:) PLManagedAsset *_anOldPick; // ivar: __anOldPick
@property (retain, nonatomic) NSMutableIndexSet *_autoPickIndexes; // ivar: __autoPickIndexes
@property (copy, nonatomic, setter=_setCompletionHandler:) id *_completionHandler; // ivar: __completionHandler
@property (retain, nonatomic) NSIndexSet *_originalAutoPickIndexes; // ivar: __originalAutoPickIndexes
@property (nonatomic) NSUInteger _originalStackIndex; // ivar: __originalStackIndex
@property (retain, nonatomic) NSIndexSet *_originalUserFavoriteIndexes; // ivar: __originalUserFavoriteIndexes
@property (nonatomic) NSUInteger _stackIndex; // ivar: __stackIndex
@property (retain, nonatomic) NSMutableIndexSet *_userFavoriteIndexes; // ivar: __userFavoriteIndexes
@property (readonly, nonatomic) NSUInteger approximateCount;
@property (retain, nonatomic) NSOrderedSet *assets; // ivar: _assets
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSUInteger photosCount;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSUInteger videosCount;


+(BOOL)_allowMPSmodificationForBurstChangesOnLibrary:(id)arg0 ;
+(BOOL)isValidBurstWithAssets:(id)arg0 ;
+(BOOL)shouldHideAvalanchesFromPhotoStream;
+(BOOL)shouldOnlyShowAvalanchePicks;
+(NSUInteger)_calculateStackAssetForAssetCount:(NSUInteger)arg0 autoPicks:(id)arg1 userFavorites:(id)arg2 ;
+(NSUInteger)countForAssetsWithAvalancheUUID:(id)arg0 inLibrary:(id)arg1 ;
+(id)_assetAmongAssets:(id)arg0 fromIndexes:(id)arg1 excludingIndexes:(id)arg2 ;
+(id)_fetchRequestForAssetsWithAvalancheUUID:(id)arg0 ;
+(id)_visibleIndexesAmongAssets:(id)arg0 fromUserFavoriteIndexes:(id)arg1 stackIndex:(NSUInteger)arg2 ;
+(id)assetsWithAvalancheUUID:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)revalidateAvalancheAssets:(id)arg0 inLibrary:(id)arg1 deleteNonPicks:(BOOL)arg2 allowDissolve:(BOOL)arg3 ;
+(id)updatePropertiesForAssets:(id)arg0 autoPicks:(id)arg1 stackAsset:(id)arg2 userFavorites:(id)arg3 deleteNonPicks:(BOOL)arg4 setFirstPick:(BOOL)arg5 allowDissolve:(BOOL)arg6 ;
+(struct CGRect )frameOfTopImageInStackForStackFrame:(struct CGRect )arg0 ;
+(void)disolveBurstForAssets:(id)arg0 permanently:(BOOL)arg1 ;
+(void)handleUpdatesForContextWillSave:(id)arg0 ;
+(void)removeFavoriteStatus:(id)arg0 ;
+(void)updateMembershipForAssets:(id)arg0 autoPicks:(id)arg1 stackAsset:(id)arg2 userFavorites:(id)arg3 deleteNonPicks:(BOOL)arg4 allowDissolve:(BOOL)arg5 inLibrary:(id)arg6 ;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)isAutoPick:(id)arg0 ;
-(BOOL)isUserFavorite:(id)arg0 ;
-(id)autoPicks;
-(id)initWithUUID:(id)arg0 photoLibrary:(id)arg1 ;
-(id)proposedStackAssetAfterRemovingFavorite:(id)arg0 ;
-(id)stackAsset;
-(id)userFavorites;
-(void)_recalculateStackAsset;
-(void)addUserFavorite:(id)arg0 ;
-(void)applyChangesAndDeleteNonPicks:(BOOL)arg0 currentContainer:(id)arg1 completionHandler:(id)arg2 ;
-(void)applyTrashedState:(short)arg0 withTrashedReason:(unsigned short)arg1 ;
-(void)assetsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)removeUserFavorite:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif