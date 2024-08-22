// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCCACHEDZONE_H
#define HDCLOUDSYNCCACHEDZONE_H

@class HDAssertion;

#import <Foundation/Foundation.h>

#import "HDCloudSyncRepository.h"
#import "HDCloudSyncZoneIdentifier.h"

@interface HDCloudSyncCachedZone : NSObject {
    HDAssertion *_accessibilityAssertion;
}


@property (readonly, weak, nonatomic) HDCloudSyncRepository *repository; // ivar: _repository
@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier
@property (readonly, nonatomic) NSInteger zoneType; // ivar: _zoneType


-(BOOL)addRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRecordID:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteZoneWithError:(*id)arg0 ;
-(BOOL)resetZoneServerChangeTokenWithError:(*id)arg0 ;
-(BOOL)setServerChangeToken:(id)arg0 fetchComplete:(BOOL)arg1 error:(*id)arg2 ;
-(NSInteger)containsRecordWithRecordID:(id)arg0 error:(*id)arg1 ;
-(NSInteger)containsRecordsWithError:(*id)arg0 ;
-(NSInteger)needsFetchWithError:(*id)arg0 ;
-(id)initForZoneIdentifier:(id)arg0 repository:(id)arg1 accessibilityAssertion:(id)arg2 ;
-(id)recordsForClass:(Class)arg0 error:(*id)arg1 ;
-(id)recordsForClass:(Class)arg0 error:(*id)arg1 filter:(id)arg2 ;
-(id)serverChangeTokenWithError:(*id)arg0 ;
-(id)zoneShareWithError:(*id)arg0 ;
-(void)handleCKError:(id)arg0 operation:(id)arg1 container:(id)arg2 database:(id)arg3 ;


@end


#endif