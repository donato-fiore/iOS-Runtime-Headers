// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDRECENTINFO_H
#define CDRECENTINFO_H

@class NSMutableSet, NSNumber, NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CDRecentInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableSet *invalidVolumes; // ivar: _invalidVolumes
@property (retain, nonatomic) NSMutableSet *pushingServices; // ivar: _pushingServices
@property (retain, nonatomic) NSNumber *version; // ivar: _version
@property (retain, nonatomic) NSMutableDictionary *volumes; // ivar: _volumes


+(BOOL)supportsSecureCoding;
+(id)fetchAllowedClassesSet;
+(id)recentInfoForVolumes:(id)arg0 ;
-(BOOL)hasInvalids;
-(BOOL)hasSnapshotForVolume:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isInvalidForVolume:(id)arg0 ;
-(BOOL)isStale;
-(BOOL)isStaleForVolume:(id)arg0 ;
-(BOOL)updateRecentState:(NSInteger)arg0 forVolume:(id)arg1 ;
-(BOOL)updateServiceInfoAmount:(id)arg0 forService:(id)arg1 onVolume:(id)arg2 atUrgency:(int)arg3 withTimestamp:(CGFloat)arg4 nonPurgeableAmount:(id)arg5 deductFromCurrentAmount:(BOOL)arg6 ;
-(BOOL)validateForVolume:(id)arg0 andService:(id)arg1 atUrgency:(int)arg2 ;
-(NSInteger)recentStateForVolume:(id)arg0 ;
-(id)_createNewRecentVolumeInfo;
-(id)_createNewRecentVolumeInfoWithName:(id)arg0 ;
-(id)_recentInfoForVolume:(id)arg0 atUrgency:(int)arg1 validateResults:(BOOL)arg2 ;
-(id)bsdDiskForVolume:(id)arg0 ;
-(id)copyInvalidsForVolume:(id)arg0 atUrgency:(int)arg1 ;
-(id)copyPushingServices;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecentInfo:(id)arg0 ;
-(id)initWithVolumes:(id)arg0 ;
-(id)recentInfoForVolume:(id)arg0 atUrgency:(int)arg1 ;
-(id)servicesForVolume:(id)arg0 ;
-(id)thresholdsForVolume:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateForVolume:(id)arg0 ;
-(void)log;
-(void)removeServiceInfo:(id)arg0 ;
-(void)removeServiceInfo:(id)arg0 forVolume:(id)arg1 ;


@end


#endif