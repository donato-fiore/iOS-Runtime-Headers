// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCTARGET_H
#define HDCLOUDSYNCTARGET_H

@class CKContainer;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDCloudSyncStore.h"
#import "HDCloudSyncStoreRecord.h"
#import "HDCloudSyncZone.h"
#import "HDCloudSyncZoneIdentifier.h"

@interface HDCloudSyncTarget : NSObject <NSCopying>



@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger purpose; // ivar: _purpose
@property (readonly, nonatomic) HDCloudSyncStore *store; // ivar: _store
@property (readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord; // ivar: _storeRecord
@property (retain, nonatomic) HDCloudSyncZone *zone; // ivar: _zone
@property (readonly, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPurpose:(NSInteger)arg0 container:(id)arg1 zoneIdentifier:(id)arg2 storeRecord:(id)arg3 store:(id)arg4 options:(NSUInteger)arg5 ;
-(id)targetByAddingOptions:(NSUInteger)arg0 ;
-(id)targetByUpdatingPurpose:(NSInteger)arg0 ;


@end


#endif