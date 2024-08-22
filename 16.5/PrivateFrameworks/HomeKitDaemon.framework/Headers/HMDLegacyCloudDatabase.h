// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)createLegacyZone:(id)arg0 controllerIdentity:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)initWithLocalDatabase:(id)arg0 ;
-(id)mirrorLegacyZone:(id)arg0 controllerIdentity:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;


@end


#endif