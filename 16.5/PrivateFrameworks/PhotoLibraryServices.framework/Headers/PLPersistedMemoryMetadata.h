// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPERSISTEDMEMORYMETADATA_H
#define PLPERSISTEDMEMORYMETADATA_H

@class NSData, NSDate, NSSet, NSOrderedSet, NSString, NSURL, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "PLMemory.h"

@interface PLPersistedMemoryMetadata : NSObject

@property (retain, nonatomic) NSData *assetListPredicate; // ivar: _assetListPredicate
@property (retain, nonatomic) NSData *blacklistedFeature; // ivar: _blacklistedFeature
@property (nonatomic) short category; // ivar: _category
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSSet *curatedAssetUUIDs; // ivar: _curatedAssetUUIDs
@property (retain, nonatomic) NSOrderedSet *customUserAssetUUIDs; // ivar: _customUserAssetUUIDs
@property (retain, nonatomic) NSSet *extendedCuratedAssetUUIDs; // ivar: _extendedCuratedAssetUUIDs
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (nonatomic) short featuredState; // ivar: _featuredState
@property (retain, nonatomic) NSString *keyAssetUUID; // ivar: _keyAssetUUID
@property (retain, nonatomic) PLMemory *memory; // ivar: _memory
@property (retain, nonatomic) NSURL *metadataURL; // ivar: _metadataURL
@property (retain, nonatomic) NSDictionary *movieAssetState; // ivar: _movieAssetState
@property (retain, nonatomic) NSSet *movieCuratedAssetUUIDs; // ivar: _movieCuratedAssetUUIDs
@property (retain, nonatomic) NSData *movieData; // ivar: _movieData
@property (nonatomic) short notificationState; // ivar: _notificationState
@property (nonatomic) NSInteger pendingPlayCount; // ivar: _pendingPlayCount
@property (nonatomic) NSInteger pendingShareCount; // ivar: _pendingShareCount
@property (nonatomic) short pendingState; // ivar: _pendingState
@property (nonatomic) NSInteger pendingViewCount; // ivar: _pendingViewCount
@property (retain, nonatomic) NSData *photosGraphData; // ivar: _photosGraphData
@property (nonatomic) NSInteger photosGraphVersion; // ivar: _photosGraphVersion
@property (nonatomic) NSInteger playCount; // ivar: _playCount
@property (nonatomic, getter=isRejected) BOOL rejected; // ivar: _rejected
@property (retain, nonatomic) NSSet *representativeAssetUUIDs; // ivar: _representativeAssetUUIDs
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) NSInteger shareCount; // ivar: _shareCount
@property (nonatomic) short subcategory; // ivar: _subcategory
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) short userActionOptions; // ivar: _userActionOptions
@property (retain, nonatomic) NSSet *userCuratedAssetUUIDs; // ivar: _userCuratedAssetUUIDs
@property (retain, nonatomic) NSSet *userFeedbacks; // ivar: _userFeedbacks
@property (retain, nonatomic) NSArray *userFeedbacksDictionaryArray; // ivar: _userFeedbacksDictionaryArray
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (nonatomic) NSInteger version; // ivar: _version
@property (nonatomic) NSInteger viewCount; // ivar: _viewCount


+(BOOL)isValidPath:(id)arg0 ;
-(BOOL)_readMetadata;
-(BOOL)_updateAssetsInMemory:(id)arg0 relationshipName:(id)arg1 persistedAssetUUIDs:(id)arg2 includePendingChanges:(BOOL)arg3 ;
-(BOOL)_updateAssetsInMemory:(id)arg0 relationshipName:(id)arg1 persistedOrderedAssetUUIDs:(id)arg2 includePendingChanges:(BOOL)arg3 ;
-(BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg0 includePendingAssetChanges:(BOOL)arg1 ;
-(BOOL)isObsolete;
-(BOOL)updateAssetsInMemory:(id)arg0 includePendingAssetChanges:(BOOL)arg1 ;
-(id)_metadataData;
-(id)description;
-(id)init;
-(id)initWithPLMemory:(id)arg0 metadataURL:(id)arg1 ;
-(id)initWithPLMemory:(id)arg0 pathManager:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg0 ;
-(id)insertMemoryFromDataInManagedObjectContext:(id)arg0 ;
-(void)_saveMetadata;
-(void)removePersistedData;
-(void)writePersistedData;


@end


#endif