// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYPOWERACTIONMODEL_H
#define HMDAPPLEMEDIAACCESSORYPOWERACTIONMODEL_H

@class NSUUID, NSString, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDActionModel.h"

@interface HMDAppleMediaAccessoryPowerActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *targetSleepWakeState;


+(Class)cd_entityClass;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(void)loadModelWithActionInformation:(id)arg0 ;


@end


#endif