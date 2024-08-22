// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDHOMEZONE_H
#define HMDCLOUDHOMEZONE_H



#import "HMDCloudZone.h"

@interface HMDCloudHomeZone : HMDCloudZone

@property (readonly, nonatomic, getter=isSharedHome) BOOL sharedHome; // ivar: _sharedHome


+(id)zoneRootRecordName;
+(id)zoneSharedRootRecordName;
+(id)zoneSubscriptionName:(id)arg0 ;
+(void)createHomeZoneWithName:(id)arg0 owner:(id)arg1 cacheZone:(id)arg2 cloudCache:(id)arg3 completion:(id)arg4 ;
-(id)createCloudZoneChangeTemporaryCache:(BOOL)arg0 ;
-(id)description;
-(void)setServerChangeToken:(id)arg0 ;


@end


#endif