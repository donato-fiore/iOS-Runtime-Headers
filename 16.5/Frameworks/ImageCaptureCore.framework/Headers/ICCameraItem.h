// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCAMERAITEM_H
#define ICCAMERAITEM_H

@class NSString, NSDate, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ICCameraDevice.h"
#import "ICCameraFolder.h"

@interface ICCameraItem : NSObject

@property (nonatomic) NSString *UTI; // ivar: _UTI
@property (nonatomic, getter=wasAddedAfterContentCatalogCompleted) BOOL addedAfterContentCatalogCompleted; // ivar: _addedAfterContentCatalogCompleted
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) ICCameraDevice *device; // ivar: _device
@property (readonly, nonatomic) NSString *fileSystemPath;
@property (readonly) BOOL hasMetadata;
@property (readonly) BOOL hasThumbnail;
@property (nonatomic, getter=isInTemporaryStore) BOOL inTemporaryStore; // ivar: _inTemporaryStore
@property (readonly) *CGImage largeThumbnailIfAvailable;
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly) NSDictionary *metadataIfAvailable;
@property (readonly) NSUInteger metadataState;
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int objectHandle; // ivar: _objectHandle
@property (readonly) NSUInteger objectID; // ivar: _objectID
@property (readonly) NSUInteger ownerID; // ivar: _ownerID
@property (retain, nonatomic) ICCameraFolder *parentFolder; // ivar: _parentFolder
@property (readonly) NSUInteger parentID; // ivar: _parentID
@property (nonatomic) NSUInteger privMetadataState; // ivar: _privMetadataState
@property (nonatomic) NSUInteger privThumbnailState; // ivar: _privThumbnailState
@property (nonatomic) unsigned int ptpObjectHandle; // ivar: _ptpObjectHandle
@property (nonatomic, getter=isRaw) BOOL raw; // ivar: _raw
@property (readonly) NSString *relativeFileSystemPath; // ivar: _relativeFileSystemPath
@property (readonly, nonatomic) *CGImage thumbnail;
@property (readonly) *CGImage thumbnailIfAvailable;
@property (readonly) NSUInteger thumbnailState;
@property (readonly) NSUInteger twinID; // ivar: _twinID
@property (retain, nonatomic) NSMutableDictionary *userData; // ivar: _userData
@property (retain) id *userObject; // ivar: _userObject


-(NSInteger)compareCameraItem:(id)arg0 ;
-(NSUInteger)unsignedIntegerValue;
-(id)description;
-(id)initWithDictionary:(id)arg0 parentFolder:(id)arg1 device:(id)arg2 ;
-(id)initWithName:(id)arg0 parentFolder:(id)arg1 device:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)appendToPath:(id)arg0 ;
-(void)dealloc;
-(void)flushMetadataCache;
-(void)flushThumbnailCache;
-(void)requestMetadata;
-(void)requestThumbnail;


@end


#endif