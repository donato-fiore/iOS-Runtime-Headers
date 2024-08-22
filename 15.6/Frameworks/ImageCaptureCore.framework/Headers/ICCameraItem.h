// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCAMERAITEM_H
#define ICCAMERAITEM_H

@class NSString, NSDate, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ICCameraDevice.h"
#import "ICCameraFolder.h"

@interface ICCameraItem : NSObject

@property (nonatomic) NSString *UTI; // ivar: _UTI
@property (readonly, nonatomic, getter=wasAddedAfterContentCatalogCompleted) BOOL addedAfterContentCatalogCompleted; // ivar: _addedAfterContentCatalogCompleted
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (copy) id *completionBlock_deprecated; // ivar: _completionBlock_deprecated
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) ICCameraDevice *device; // ivar: _device
@property (copy) id *downloadCompletionBlock; // ivar: _downloadCompletionBlock
@property (copy, nonatomic) NSString *fileSystemPath;
@property (readonly) BOOL hasMetadata; // ivar: _hasMetadata
@property (readonly) BOOL hasThumbnail; // ivar: _hasThumbnail
@property (readonly, nonatomic, getter=isInTemporaryStore) BOOL inTemporaryStore; // ivar: _inTemporaryStore
@property (readonly) *CGImage largeThumbnailIfAvailable; // ivar: _largeThumbnailIfAvailable
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly) NSDictionary *metadataIfAvailable; // ivar: _metadataIfAvailable
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
@property (readonly, nonatomic) unsigned int ptpObjectHandle; // ivar: _ptpObjectHandle
@property (nonatomic, getter=isRaw) BOOL raw; // ivar: _raw
@property (readonly) NSString *relativeFileSystemPath; // ivar: _relativeFileSystemPath
@property (readonly, nonatomic) *CGImage thumbnail;
@property (readonly) *CGImage thumbnailIfAvailable; // ivar: _thumbnailIfAvailable
@property (readonly) NSUInteger thumbnailState;
@property (readonly) NSUInteger twinID; // ivar: _twinID
@property (readonly, nonatomic) NSUInteger unsignedIntegerValue;
@property (retain, nonatomic) NSMutableDictionary *userData; // ivar: _userData
@property (retain) id *userObject; // ivar: _userObject


-(NSInteger)compareCameraItem:(id)arg0 ;
-(id)description;
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