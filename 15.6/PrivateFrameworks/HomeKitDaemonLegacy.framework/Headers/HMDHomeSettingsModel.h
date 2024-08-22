// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMESETTINGSMODEL_H
#define HMDHOMESETTINGSMODEL_H

@class NSNumber;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;


+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;


@end


#endif