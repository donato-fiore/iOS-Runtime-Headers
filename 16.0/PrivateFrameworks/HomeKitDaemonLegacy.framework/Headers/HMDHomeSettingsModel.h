// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMESETTINGSMODEL_H
#define HMDHOMESETTINGSMODEL_H

@class NSNumber;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomeSettingsModel : HMDHomeSettingsBaseModel

@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;


+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;


@end


#endif