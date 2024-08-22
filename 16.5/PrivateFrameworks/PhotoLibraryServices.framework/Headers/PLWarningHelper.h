// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLWARNINGHELPER_H
#define PLWARNINGHELPER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLWarningHelper : NSObject

@property (retain, nonatomic) NSArray *_assets; // ivar: __assets
@property (retain, nonatomic) NSString *_clientName; // ivar: __clientName
@property (nonatomic) NSInteger _duplicatePhotoStreamCount; // ivar: __duplicatePhotoStreamCount
@property (nonatomic) NSInteger _style; // ivar: __style
@property (nonatomic) NSInteger _syndicationAssetCount; // ivar: __syndicationAssetCount
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(BOOL)_hasAssetsInLibraryScope:(id)arg0 ;
-(BOOL)_isExitingSharedLibrary;
-(NSUInteger)_assetsInLibraryScopeCountFromAssets:(id)arg0 ;
-(id)_avalancheDeleteWarningForAvalancheStacksCount:(NSInteger)arg0 nonAvalancheItemsToDeleteCount:(NSInteger)arg1 nonAvalancheItemsToDeleteType:(short)arg2 avalanchePhotosToDeleteCount:(NSInteger)arg3 survivingAvalancheFavoritesCount:(NSInteger)arg4 avalancheUnrelatedFavoritesCount:(NSInteger)arg5 assetCount:(NSInteger)arg6 ;
-(id)_cloudSharedWarningTextForAssetCount:(NSInteger)arg0 assetType:(short)arg1 albumTitle:(id)arg2 ;
-(id)_cloudSharedWarningTextForAssets:(id)arg0 ;
-(id)_contributorsForAssets:(id)arg0 ;
-(id)_myAssetsFromAssets:(id)arg0 ;
-(id)_usedElsewhereWarningTextForAssetCount:(NSInteger)arg0 inLibraryScopeCount:(NSInteger)arg1 myAssets:(id)arg2 contributors:(id)arg3 inPhotoStreamCount:(NSInteger)arg4 iniPhotoCount:(NSInteger)arg5 inSomeAlbumCount:(NSInteger)arg6 affectedLocalAlbumsCount:(NSInteger)arg7 assetType:(short)arg8 actualDeletionCount:(NSInteger)arg9 syndicationAssetCount:(NSInteger)arg10 ;
-(id)_usedElsewhereWarningTextForAssets:(id)arg0 duplicatePhotoStreamCount:(NSInteger)arg1 actualDeletionCount:(NSInteger)arg2 ;
-(id)allWarningMessageCombinations;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_enumerateTestAssetTypesUsingBlock:(id)arg0 ;
-(void)_enumerateTestBooleansUsingBlock:(id)arg0 ;
-(void)_enumerateTestDeviceModelNamesUsingBlock:(id)arg0 ;
-(void)_enumerateTestItemCountsUsingBlock:(id)arg0 ;
-(void)_enumerateTestOtherItemCountsUsingBlock:(id)arg0 ;
// -(void)_enumerateWarningMessagesUsingBlock:(id)arg0 sectionBlock:(unk)arg1  ;
-(void)_getDeletionWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 ;
-(void)_getExpungeWarningMessage:(*id)arg0 buttonTitle:(*id)arg1 forAssetCount:(NSInteger)arg2 assetType:(short)arg3 iCPLEnabled:(BOOL)arg4 contributors:(id)arg5 deviceModelName:(id)arg6 ;
-(void)_getWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forItemSuffix:(id)arg3 count:(NSUInteger)arg4 operation:(NSInteger)arg5 clientName:(id)arg6 ;
-(void)enumerateWarningMessagesUsingBlock:(id)arg0 ;
-(void)getAvalancheDeleteWarning:(*id)arg0 actualDeletionCount:(*NSInteger)arg1 forAssets:(id)arg2 ;
-(void)getDeletionWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forAlbums:(id)arg3 folders:(id)arg4 clientName:(id)arg5 style:(NSInteger)arg6 ;
-(void)getDeletionWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forAssets:(id)arg3 duplicatePhotoStreamCount:(NSInteger)arg4 syndicationAssetCount:(NSInteger)arg5 clientName:(id)arg6 style:(NSInteger)arg7 ;
-(void)getExpungeWarningMessage:(*id)arg0 buttonTitle:(*id)arg1 forAssets:(id)arg2 ;
-(void)getWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forAssets:(id)arg3 operation:(NSInteger)arg4 clientName:(id)arg5 ;


@end


#endif