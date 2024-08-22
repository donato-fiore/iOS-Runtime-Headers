// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPERSONMANAGERSETTINGSMODEL_H
#define HMDHOMEPERSONMANAGERSETTINGSMODEL_H

@class NSUUID, NSString;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomePersonManagerSettingsModel : HMDHomeSettingsBaseModel

@property (retain) NSUUID *zoneUUID;
@property (retain) NSString *zoneUUIDString;


+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)properties;
-(id)createSettings;
-(id)initWithHomeUUID:(id)arg0 ;


@end


#endif