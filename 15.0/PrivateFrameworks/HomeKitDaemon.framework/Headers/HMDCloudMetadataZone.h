// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDMETADATAZONE_H
#define HMDCLOUDMETADATAZONE_H



#import "HMDCloudZone.h"
#import "HMDCloudRecord.h"

@interface HMDCloudMetadataZone : HMDCloudZone

@property (retain, nonatomic) HMDCloudRecord *metadataRecord; // ivar: _metadataRecord


+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg0 ;
+(void)createMetadataZoneWithName:(id)arg0 owner:(id)arg1 cacheZone:(id)arg2 cloudCache:(id)arg3 completion:(id)arg4 ;
-(void)setServerChangeToken:(id)arg0 ;


@end


#endif