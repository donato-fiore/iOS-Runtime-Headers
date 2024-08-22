// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEMEDIASETTINGSMODEL_H
#define HMDHOMEMEDIASETTINGSMODEL_H

@class NSString, NSNumber;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *mediaPassword;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;


+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;


@end


#endif