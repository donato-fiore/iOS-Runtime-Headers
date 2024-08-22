// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROMEMORY_H
#define MIROMEMORY_H

@class PHFetchResult, PHAssetCollection, NSDictionary, NSArray, NSMutableDictionary, NSString, PHAsset, NSURL, NSSet, NSDate;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"

@interface MiroMemory : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger allAssetCount; // ivar: _allAssetCount
@property (readonly, nonatomic) PHFetchResult *allAssets; // ivar: _allAssets
@property (retain, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) NSDictionary *assetsRanges; // ivar: _assetsRanges
@property (retain, nonatomic) NSArray *autoPickedAssetIDs; // ivar: _autoPickedAssetIDs
@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (retain, nonatomic) NSMutableDictionary *blueprints; // ivar: _blueprints
@property (nonatomic) Buckets buckets; // ivar: _buckets
@property (retain, nonatomic) MiroBlueprint *customBlueprint; // ivar: _customBlueprint
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *displaySubtitle;
@property (retain, nonatomic) NSArray *featuredPeople; // ivar: _featuredPeople
@property (retain, nonatomic) NSDictionary *freezeRanges; // ivar: _freezeRanges
@property (nonatomic) BOOL hasBuildingPosterImageBegun; // ivar: _hasBuildingPosterImageBegun
@property (retain, nonatomic) NSString *initalKeyAssetIdentifier; // ivar: _initalKeyAssetIdentifier
@property (nonatomic) BOOL isPregenerating; // ivar: _isPregenerating
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain) NSString *keyAssetID; // ivar: _keyAssetID
@property (retain, nonatomic) NSString *keywordedSongID; // ivar: _keywordedSongID
@property (retain, nonatomic) NSDictionary *loadedFreezeRanges; // ivar: _loadedFreezeRanges
@property (retain, nonatomic) NSURL *localPersistentFile; // ivar: _localPersistentFile
@property (retain) NSString *localizedSubTitle; // ivar: _localizedSubTitle
@property (retain) NSString *localizedTitle; // ivar: _localizedTitle
@property (retain, nonatomic) NSSet *manuallyAddedAssetIDs; // ivar: _manuallyAddedAssetIDs
@property (retain, nonatomic) NSSet *manuallyRemovedAssetIDs; // ivar: _manuallyRemovedAssetIDs
@property (readonly, nonatomic) NSInteger maxDurationRange; // ivar: _savedMaxDurationRange
@property (nonatomic) CGFloat maximumPossibleMemoryDuration; // ivar: _maximumPossibleMemoryDuration
@property (readonly, nonatomic) CGFloat minimumPossibleMemoryDuration;
@property (retain, nonatomic) NSString *moodID;
@property (readonly, nonatomic) NSArray *moodIDs;
@property (readonly, nonatomic) BOOL needsTitleCard; // ivar: _needsTitleCard
@property (readonly, nonatomic) NSInteger pickedItemCount; // ivar: _pickedItemCount
@property (retain, nonatomic) NSArray *posters; // ivar: _posters
@property (retain, nonatomic) NSArray *requestedKeywords; // ivar: _requestedKeywords
@property (retain, nonatomic) NSString *requestedMoodID; // ivar: _requestedMoodID
@property (retain, nonatomic) NSDictionary *requestedMusicGenreDistribution; // ivar: _requestedMusicGenreDistribution
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue; // ivar: _saveQueue
@property (nonatomic) CGFloat savedDuration; // ivar: _savedDuration
@property (nonatomic) NSInteger schema; // ivar: _schema
@property (nonatomic) BOOL storedPosterExists; // ivar: _storedPosterExists
@property (retain, nonatomic) NSSet *suggestions; // ivar: _suggestions
@property (retain, nonatomic) NSDate *viewedDate; // ivar: _viewedDate


+(BOOL)supportsSecureCoding;
+(id)_assetCollectionUniqueLocalIdentifier:(id)arg0 ;
+(id)_displayableUuidWithUuid:(id)arg0 ;
+(id)_saveURL;
+(id)fileURLWithUuid:(id)arg0 ;
+(id)grabTestKeywords;
+(id)memoryWithPHAssetCollection:(id)arg0 ;
+(id)memoryWithPHAssetCollection:(id)arg0 keyAsset:(id)arg1 ;
+(id)miroMoodIDForPHMemoryMood:(NSUInteger)arg0 ;
-(BOOL)isPersistable;
-(BOOL)wasManuallyAdded:(id)arg0 ;
-(BOOL)wasManuallyRemoved:(id)arg0 ;
-(id)_newBlueprintWithMoodID:(id)arg0 ;
-(id)blueprintForMoodID:(id)arg0 ;
-(id)dataRepresentation;
-(id)initWithData:(id)arg0 ;
-(id)rangesWithType:(NSUInteger)arg0 forAssetID:(id)arg1 ;
-(id)trimRangesForAsset:(id)arg0 ;
-(void)_deleteMetadata;
-(void)_initAllAssetMetadata;
-(void)_persistentRangesChanged:(id)arg0 ;
-(void)_saveMetadata;
-(void)_updateAddedRemovedLists;
-(void)_writeMetadata:(id)arg0 ;
-(void)adornIrisUsableToAssets:(id)arg0 ;
-(void)clearFreezeDataForPregenerate;
-(void)manuallyAdd:(id)arg0 remove:(id)arg1 ;
-(void)manuallyModify:(id)arg0 changeInSegmentCount:(NSInteger)arg1 ;
-(void)persist;
-(void)persistWithoutFreeze;
-(void)setRanges:(id)arg0 replaceType:(NSUInteger)arg1 forAssetID:(id)arg2 ;
-(void)unPersist;


@end


#endif