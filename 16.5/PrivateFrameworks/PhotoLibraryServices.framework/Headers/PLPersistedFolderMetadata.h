// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPERSISTEDFOLDERMETADATA_H
#define PLPERSISTEDFOLDERMETADATA_H

@class NSMutableOrderedSet, NSString, NSNumber, NSURL;

#import <Foundation/Foundation.h>

#import "PLManagedFolder.h"

@interface PLPersistedFolderMetadata : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *childUUIDs; // ivar: _childUUIDs
@property (retain, nonatomic) NSString *cloudGUID; // ivar: _cloudGUID
@property (nonatomic) BOOL customSortAscending; // ivar: _customSortAscending
@property (nonatomic) int customSortKey; // ivar: _customSortKey
@property (retain, nonatomic) PLManagedFolder *folder; // ivar: _folder
@property (nonatomic, getter=isInTrash) BOOL inTrash; // ivar: _inTrash
@property (readonly, nonatomic) BOOL isProjectAlbumRootFolder;
@property (readonly, nonatomic) BOOL isRootFolder;
@property (retain, nonatomic) NSNumber *kind; // ivar: _kind
@property (retain, nonatomic) NSURL *metadataURL; // ivar: _metadataURL
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (nonatomic, getter=isPrototype) BOOL prototype; // ivar: _prototype
@property (readonly, retain, nonatomic) NSString *remappedUUID; // ivar: _remappedUUID
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)isValidPath:(id)arg0 ;
+(void)updateChildrenOrderingInFolder:(id)arg0 usingChildUUIDs:(id)arg1 sourceDescription:(id)arg2 includePendingChanges:(BOOL)arg3 ;
-(BOOL)_readMetadata;
-(id)description;
-(id)init;
-(id)initWithPLManagedFolder:(id)arg0 pathManager:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg0 ;
-(id)insertFolderFromDataInManagedObjectContext:(id)arg0 ;
-(void)_saveMetadata;
-(void)removePersistedData;
-(void)updateChildrenOrderingInFolder:(id)arg0 includePendingChanges:(BOOL)arg1 ;
-(void)writePersistedData;


@end


#endif