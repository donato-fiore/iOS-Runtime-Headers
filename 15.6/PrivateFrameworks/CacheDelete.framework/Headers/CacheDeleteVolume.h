// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACHEDELETEVOLUME_H
#define CACHEDELETEVOLUME_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CacheDeleteVolume : NSObject

@property (readonly) unsigned int block_size; // ivar: _block_size
@property (readonly, nonatomic) NSString *bsdName; // ivar: _bsdName
@property (readonly) int dev; // ivar: _dev
@property (readonly, nonatomic) NSString *fsType; // ivar: _fsType
@property (readonly) NSUInteger initialFreespace; // ivar: _initialFreespace
@property (readonly) BOOL isRoot; // ivar: _isRoot
@property (readonly, nonatomic) NSString *mountPoint; // ivar: _mountPoint
@property (readonly, nonatomic) NSInteger state;
@property (readonly, nonatomic) NSDictionary *thresholds; // ivar: _thresholds


+(NSInteger)stateForPath:(id)arg0 ;
+(id)mountPointForUUID:(id)arg0 ;
+(id)rootVolume;
+(id)validateVolumeAtPath:(id)arg0 ;
+(id)volumeWithMountpoint:(id)arg0 ;
+(id)volumeWithPath:(id)arg0 ;
-(BOOL)amountIsRational:(id)arg0 ;
-(BOOL)containsPath:(id)arg0 ;
-(BOOL)freespaceIsStale:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(BOOL)validate;
-(NSUInteger)amountPurged;
-(NSUInteger)effective_size;
-(NSUInteger)freespace;
-(NSUInteger)hash;
-(NSUInteger)size;
-(NSUInteger)used;
-(id)FSEventsUUID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPath:(id)arg0 ;
-(id)initWithVolume:(id)arg0 ;
-(id)uuid;


@end


#endif