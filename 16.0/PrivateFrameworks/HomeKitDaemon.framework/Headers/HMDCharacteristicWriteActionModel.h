// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICWRITEACTIONMODEL_H
#define HMDCHARACTERISTICWRITEACTIONMODEL_H

@class NSString, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDActionModel.h"

@interface HMDCharacteristicWriteActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *characteristicID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *serviceID;
@property (readonly) Class superclass;
@property (retain, nonatomic) id *targetValue;


+(Class)cd_entityClass;
+(id)properties;
-(BOOL)cd_updateManagedObjectInContext:(id)arg0 error:(*id)arg1 ;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;
-(void)loadModelWithActionInformation:(id)arg0 ;


@end


#endif