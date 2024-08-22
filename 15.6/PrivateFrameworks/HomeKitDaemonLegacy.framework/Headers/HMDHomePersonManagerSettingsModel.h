// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEPERSONMANAGERSETTINGSMODEL_H
#define HMDHOMEPERSONMANAGERSETTINGSMODEL_H

@class NSUUID, NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomePersonManagerSettingsModel : HMDBackingStoreModelObject

@property (retain) NSUUID *zoneUUID;
@property (retain) NSString *zoneUUIDString;


+(id)modelUUIDWithUUID:(id)arg0 ;
+(id)properties;
-(id)createSettings;
-(id)initWithHomeUUID:(id)arg0 ;


@end


#endif