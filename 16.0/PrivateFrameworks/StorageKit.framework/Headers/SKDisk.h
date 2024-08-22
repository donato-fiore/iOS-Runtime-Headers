// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKDISK_H
#define SKDISK_H

@class NSArray, NSString, NSNumber, SKDiskPrivateCache;

#import <Foundation/Foundation.h>

#import "SKFilesystem.h"

@interface SKDisk : NSObject {
    NSArray *_sortedChildren;
    NSObject *_daDiskRef;
}


@property NSUInteger childCount; // ivar: _childCount
@property (readonly) NSString *contentDiskIdentifier;
@property (retain) NSString *diskIdentifier; // ivar: _diskIdentifier
@property (retain, nonatomic) NSNumber *diskObjectID; // ivar: _diskObjectID
@property (retain) SKFilesystem *filesystem; // ivar: _filesystem
@property (retain) NSString *filesystemType; // ivar: _filesystemType
@property (retain) NSString *ioContent; // ivar: _ioContent
@property BOOL isCaseSensitive; // ivar: _isCaseSensitive
@property BOOL isDiskImage; // ivar: _isDiskImage
@property BOOL isInternal; // ivar: _isInternal
@property BOOL isJournaled; // ivar: _isJournaled
@property BOOL isLocked; // ivar: _isLocked
@property BOOL isOSInternal; // ivar: _isOSInternal
@property BOOL isPartitionDisk; // ivar: _isPartitionDisk
@property BOOL isPhysicalDisk; // ivar: _isPhysicalDisk
@property BOOL isValid; // ivar: _isValid
@property (readonly) BOOL isVirtualDiskType;
@property BOOL isWholeDisk; // ivar: _isWholeDisk
@property (retain) NSString *mediaUUID; // ivar: _mediaUUID
@property (retain) NSString *mountPoint; // ivar: _mountPoint
@property (retain, nonatomic) SKDiskPrivateCache *privateCache; // ivar: _privateCache
@property (retain) NSString *role; // ivar: _role
@property NSUInteger startLocation; // ivar: _startLocation
@property BOOL supportsJournaling; // ivar: _supportsJournaling
@property BOOL supportsRepair; // ivar: _supportsRepair
@property BOOL supportsVerify; // ivar: _supportsVerify
@property NSUInteger totalSpace; // ivar: _totalSpace
@property (retain) NSString *type; // ivar: _type
@property NSUInteger unformattedSize; // ivar: _unformattedSize
@property (retain) NSString *volumeName; // ivar: _volumeName
@property (retain) NSString *volumeUUID; // ivar: _volumeUUID


+(void)sortWithDisks:(id)arg0 ;
-(BOOL)canBeErasedToRole:(id)arg0 ;
-(BOOL)canBoot;
-(BOOL)canResize;
-(BOOL)ejectWithCompletionBlock:(id)arg0 ;
-(BOOL)ejectWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDictionary:(id)arg0 ;
-(BOOL)mountWithCompletionBlock:(id)arg0 ;
-(BOOL)mountWithOptions:(id)arg0 withCompletionBlock:(id)arg1 ;
-(BOOL)mountWithOptionsDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)mountWithOptionsDictionary:(id)arg0 withCompletionBlock:(id)arg1 ;
-(BOOL)mountWithParams:(id)arg0 error:(*id)arg1 ;
-(BOOL)rename:(id)arg0 withCompletionBlock:(id)arg1 ;
-(BOOL)unmountWithCompletionBlock:(id)arg0 ;
-(BOOL)unmountWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(BOOL)unmountWithOptions:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)_DAVolumeUUIDForDisk:(id)arg0 ;
-(id)_DAVolumeUUIDForDiskIdentifier:(id)arg0 ;
-(id)cachedWholeDiskByIdentifier;
-(id)children;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)innerDescription;
-(id)minimalDictionaryRepresentation;
-(id)redactedDescription;
-(id)supportedFilesystems;
-(void)expireCache;
-(void)expireCacheWithCompletionBlock:(id)arg0 ;
-(void)expireCacheWithOptions:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)recacheWithOptions:(NSUInteger)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif