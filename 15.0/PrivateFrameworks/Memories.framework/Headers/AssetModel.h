// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSETMODEL_H
#define ASSETMODEL_H

@class NSLock, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AssetModel : NSObject {
    NSLock *m_assetLock;
    NSMutableDictionary *m_assetMap;
    NSMutableArray *m_knownAssets;
    CGFloat m_lastAssetsLibraryInvalidationAttempt;
}




+(CGFloat)imageScale;
+(CGFloat)maxPixelsForImage:(BOOL)arg0 ;
+(CGFloat)thumbnailScale;
+(id)assetDirectory;
+(id)builtInAssetDirectoryForClipType:(int)arg0 ;
+(id)deviceCharacteristicsDict;
+(id)sharedInstance;
-(id)assetPathsForClipType:(int)arg0 inProjectPath:(id)arg1 excludingURLs:(id)arg2 ;
-(id)assetPathsForProjectAudio;
-(id)assetPathsForRecordedAudio;
-(id)assetPathsForSharedAudio;
-(id)builtInAssetPathsForClipType:(int)arg0 ;
-(id)fileTypesForClipType:(int)arg0 ;
-(id)files:(id)arg0 atPath:(id)arg1 filteredForTypes:(id)arg2 ;
-(id)filterURLs:(id)arg0 fromPaths:(id)arg1 ;
-(id)imageViewWithThemeImageNamed:(id)arg0 renderingIntent:(int)arg1 allowProxies:(BOOL)arg2 ;
-(id)ingestMovieAtPath:(id)arg0 intoProject:(id)arg1 asSharedAssets:(BOOL)arg2 ;
-(id)init;
-(id)pathForBuiltInAssetWithName:(id)arg0 ;
-(void)clearAssetsList;
-(void)dealloc;
-(void)invalidateAssetLibrary;
-(void)loadAssetsListIfNeeded;
-(void)mpMediaLibraryDidChange:(id)arg0 ;


@end


#endif