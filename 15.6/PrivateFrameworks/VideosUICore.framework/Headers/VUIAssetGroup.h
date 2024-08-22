// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIASSETGROUP_H
#define VUIASSETGROUP_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VUIAssetGroup : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetKeysByTag; // ivar: _assetKeysByTag
@property (retain, nonatomic) NSString *cachePath; // ivar: _cachePath
@property (retain, nonatomic) NSMutableDictionary *cacheRecords; // ivar: _cacheRecords
@property (nonatomic) NSUInteger currentCacheSize; // ivar: _currentCacheSize
@property (nonatomic) NSInteger groupType; // ivar: _groupType
@property (retain, nonatomic) NSMutableDictionary *manifest; // ivar: _manifest
@property (nonatomic, getter=isManifestDirty) BOOL manifestDirty; // ivar: _manifestDirty
@property (nonatomic) NSUInteger maxCacheSize; // ivar: _maxCacheSize
@property (nonatomic) NSUInteger pruneCount; // ivar: _pruneCount


+(id)_humanReadableStringForGroupType:(NSInteger)arg0 ;
-(id)assetInfoForKey:(id)arg0 queue:(id)arg1 ;
-(id)description;
-(id)infoForAllAssetsWithQueue:(id)arg0 ;
-(id)infoForAllAssetsWithTags:(id)arg0 queue:(id)arg1 ;
-(id)initWithGroupType:(NSInteger)arg0 baseCachePath:(id)arg1 folderName:(id)arg2 maxCacheSize:(NSUInteger)arg3 purgeOnLoad:(BOOL)arg4 ;
-(void)_removeAssetInfoForKey:(id)arg0 ;
-(void)_removeAssetInfoForKey:(id)arg0 removeFile:(BOOL)arg1 ;
-(void)_saveManifest;
-(void)_updateManifestWithChange:(id)arg0 ;
-(void)removeAllAssetsWithQueue:(id)arg0 ;
-(void)removeAssetInfoForKey:(id)arg0 queue:(id)arg1 ;
-(void)setAssetInfo:(id)arg0 forKey:(id)arg1 queue:(id)arg2 ;
-(void)updateAssetsFromFiles;


@end


#endif