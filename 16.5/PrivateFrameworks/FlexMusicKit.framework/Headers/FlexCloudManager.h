// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLEXCLOUDMANAGER_H
#define FLEXCLOUDMANAGER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FMSongLibrary.h"

@interface FlexCloudManager : NSObject

@property (readonly) NSMutableArray *cloudManagedSongs; // ivar: _cloudManagedSongs
@property (readonly) NSMutableDictionary *cloudManagedSongsByUID; // ivar: _cloudManagedSongsByUID
@property (readonly, weak) FMSongLibrary *library; // ivar: _library
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount


+(id)createCloudManager:(NSInteger)arg0 withLibrary:(id)arg1 options:(id)arg2 ;
-(NSUInteger)assetStatus:(id)arg0 ;
-(id)_purgeAndReturnReplacementFor:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 ;
-(id)loadCachedSongs;
-(void)_registerSongs:(id)arg0 ;
-(void)cancelDownloadOfAllAssets;
-(void)cancelDownloadOfAsset:(id)arg0 ;
-(void)fetchAllSongsWithCompletion:(id)arg0 ;
-(void)loadAssetWithID:(id)arg0 forSongID:(id)arg1 ;
-(void)requestDownloadOfAsset:(id)arg0 ;
-(void)requestDownloadOfAsset:(id)arg0 withOptions:(id)arg1 ;
-(void)requestPurgeOfAsset:(id)arg0 ;
-(void)retryFetchAllSongs;


@end


#endif