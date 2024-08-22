// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRECENTVOLUMEINFO_H
#define CDRECENTVOLUMEINFO_H

@class NSString, NSMutableDictionary, NSNumber, NSDictionary, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CacheDeleteVolume.h"

@interface CDRecentVolumeInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *bsdDisk; // ivar: _bsdDisk
@property (retain, nonatomic) CacheDeleteVolume *cdVolume; // ivar: _cdVolume
@property (retain, nonatomic) NSMutableDictionary *diagnostics; // ivar: _diagnostics
@property (retain) NSNumber *freespace; // ivar: _freespace
@property BOOL hasSnapshot; // ivar: _hasSnapshot
@property NSUInteger reserve; // ivar: _reserve
@property (retain, nonatomic) NSMutableDictionary *services; // ivar: _services
@property (retain, nonatomic) NSDictionary *thresholds; // ivar: _thresholds
@property (retain) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *volume; // ivar: _volume
@property (nonatomic) NSInteger volumeState; // ivar: _volumeState


+(BOOL)supportsSecureCoding;
+(id)CDRecentVolumeInfo:(id)arg0 ;
-(BOOL)_validateWithSharedCacheDeleteForService:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isStale;
-(BOOL)updateServiceInfoAmount:(id)arg0 forService:(id)arg1 atUrgency:(int)arg2 withTimestamp:(CGFloat)arg3 nonPurgeableAmount:(id)arg4 deductFromCurrentAmount:(BOOL)arg5 ;
-(BOOL)validateServiceInfo:(id)arg0 atUrgency:(int)arg1 ;
-(id)_recentInfoAtUrgency:(int)arg0 validateResults:(BOOL)arg1 ;
-(id)copyInvalidsAtUrgency:(int)arg0 currentlyPushing:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createVolumeWithMountPoint:(id)arg0 ;
-(id)createVolumeWithPath:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServices:(id)arg0 volumeName:(id)arg1 ;
-(id)initWithVolumeInfo:(id)arg0 ;
-(id)recentInfoAtUrgency:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)log;
-(void)removeServiceInfo:(id)arg0 ;


@end


#endif