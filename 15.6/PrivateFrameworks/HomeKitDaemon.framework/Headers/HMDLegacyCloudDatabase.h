// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLEGACYCLOUDDATABASE_H
#define HMDLEGACYCLOUDDATABASE_H

@class HMBCloudDatabase, NSString;
@protocol HMBCloudZoneDelegate;



@interface HMDLegacyCloudDatabase : HMBCloudDatabase <HMBCloudZoneDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)legacyCloudDatabaseWithLocalDatabase:(id)arg0 ;
+(id)recordZoneIDForLegacyName:(id)arg0 ;
-(id)createLegacyZone:(id)arg0 localDatabase:(id)arg1 controllerIdentity:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
-(id)initWithLocalDatabase:(id)arg0 ;
-(id)mirrorLegacyZone:(id)arg0 localDatabase:(id)arg1 controllerIdentity:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;


@end


#endif