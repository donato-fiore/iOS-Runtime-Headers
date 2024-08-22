// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMEDIASETTINGSMODEL_H
#define HMDHOMEMEDIASETTINGSMODEL_H

@class NSString, NSNumber;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomeMediaSettingsModel : HMDHomeSettingsBaseModel

@property (copy, nonatomic) NSString *mediaPassword;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;


+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;


@end


#endif