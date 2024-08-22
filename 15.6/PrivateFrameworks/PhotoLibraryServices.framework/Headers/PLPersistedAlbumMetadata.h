// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSISTEDALBUMMETADATA_H
#define PLPERSISTEDALBUMMETADATA_H

@class NSMutableOrderedSet, NSString, NSNumber, NSURL, NSData;

#import <Foundation/Foundation.h>

#import "PLGenericAlbum.h"

@interface PLPersistedAlbumMetadata : NSObject

@property (nonatomic) BOOL allowsOverwrite; // ivar: _allowsOverwrite
@property (retain, nonatomic) NSMutableOrderedSet *assetUUIDs; // ivar: _assetUUIDs
@property (retain, nonatomic) NSString *cloudGUID; // ivar: _cloudGUID
@property (retain, nonatomic) NSString *customKeyAssetUUID; // ivar: _customKeyAssetUUID
@property (nonatomic) BOOL customSortAscending; // ivar: _customSortAscending
@property (nonatomic) int customSortKey; // ivar: _customSortKey
@property (retain, nonatomic) PLGenericAlbum *genericAlbum; // ivar: _genericAlbum
@property (retain, nonatomic) NSString *importSessionID; // ivar: _importSessionID
@property (retain, nonatomic) NSString *importedByBundleIdentifier; // ivar: _importedByBundleIdentifier
@property (nonatomic, getter=isInTrash) BOOL inTrash; // ivar: _inTrash
@property (readonly, nonatomic) BOOL isFolder; // ivar: _isFolder
@property (retain, nonatomic) NSNumber *kind; // ivar: _kind
@property (retain, nonatomic) NSURL *metadataURL; // ivar: _metadataURL
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (retain, nonatomic) NSString *projectDocumentType; // ivar: _projectDocumentType
@property (nonatomic, getter=isPrototype) BOOL prototype; // ivar: _prototype
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSData *userQueryData; // ivar: _userQueryData
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)isValidPath:(id)arg0 ;
-(BOOL)_readMetadata;
-(id)_fetchChildUUIDs;
-(id)description;
-(id)init;
-(id)initWithPLGenericAlbum:(id)arg0 pathManager:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg0 ;
-(id)initWithTitle:(id)arg0 uuid:(id)arg1 cloudGUID:(id)arg2 kind:(id)arg3 assetUUIDs:(id)arg4 persistedAlbumDataDirectory:(id)arg5 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg0 ;
-(void)_saveMetadata;
-(void)persistAlbumData;
-(void)removePersistedAlbumData;
-(void)updateChildrenOrderingInAlbum:(id)arg0 includePendingAssetChanges:(BOOL)arg1 ;


@end


#endif