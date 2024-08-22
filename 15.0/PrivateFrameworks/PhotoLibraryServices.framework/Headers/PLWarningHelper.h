// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(id)_cloudSharedWarningTextForAssets:(id)arg0 ;
-(id)_usedElsewhereWarningTextForAssetCount:(NSInteger)arg0 inLibraryScopeCount:(NSInteger)arg1 inPhotoStreamCount:(NSInteger)arg2 iniPhotoCount:(NSInteger)arg3 inSomeAlbumCount:(NSInteger)arg4 affectedLocalAlbumsCount:(NSInteger)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(NSInteger)arg7 syndicationAssetCount:(NSInteger)arg8 ;
-(id)_usedElsewhereWarningTextForAssets:(id)arg0 duplicatePhotoStreamCount:(NSInteger)arg1 actualDeletionCount:(NSInteger)arg2 ;
-(id)allWarningMessageCombinations;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_getDeletionWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 ;
-(void)_getWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forItemSuffix:(id)arg3 count:(NSUInteger)arg4 operation:(NSInteger)arg5 clientName:(id)arg6 ;
-(void)getAvalancheDeleteWarning:(*id)arg0 actualDeletionCount:(*NSInteger)arg1 forAssets:(id)arg2 ;
-(void)getDeletionWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forAlbums:(id)arg3 folders:(id)arg4 clientName:(id)arg5 style:(NSInteger)arg6 ;
-(void)getDeletionWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forAssets:(id)arg3 duplicatePhotoStreamCount:(NSInteger)arg4 syndicationAssetCount:(NSInteger)arg5 clientName:(id)arg6 style:(NSInteger)arg7 ;
-(void)getExpungeWarningMessage:(*id)arg0 buttonTitle:(*id)arg1 forAssets:(id)arg2 ;
-(void)getWarningTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 forAssets:(id)arg3 operation:(NSInteger)arg4 clientName:(id)arg5 ;


@end


#endif