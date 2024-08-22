// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEMEDIASETTINGSMODEL_H
#define HMDHOMEMEDIASETTINGSMODEL_H

@class NSString, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mediaPassword;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;


@end


#endif