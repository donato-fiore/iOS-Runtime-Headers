// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDHOMEMANAGERZONE_H
#define HMDCLOUDHOMEMANAGERZONE_H



#import "HMDCloudZone.h"

@interface HMDCloudHomeManagerZone : HMDCloudZone



+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg0 ;
+(void)createHomeManagerZoneWithName:(id)arg0 owner:(id)arg1 cacheZone:(id)arg2 cloudCache:(id)arg3 completion:(id)arg4 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg0 ;
-(void)setServerChangeToken:(id)arg0 ;


@end


#endif