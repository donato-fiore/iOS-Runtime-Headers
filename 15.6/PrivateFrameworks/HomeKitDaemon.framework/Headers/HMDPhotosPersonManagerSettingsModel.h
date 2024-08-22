// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPHOTOSPERSONMANAGERSETTINGSMODEL_H
#define HMDPHOTOSPERSONMANAGERSETTINGSMODEL_H

@class HMBModel, NSNumber, NSUUID;



@interface HMDPhotosPersonManagerSettingsModel : HMBModel

@property (retain) NSNumber *sharingFaceClassificationsEnabled;
@property (retain) NSUUID *zoneUUID;


+(id)hmbProperties;
+(id)sentinelParentUUID;
-(id)createSettings;
-(id)initWithModelID:(id)arg0 settings:(id)arg1 ;


@end


#endif