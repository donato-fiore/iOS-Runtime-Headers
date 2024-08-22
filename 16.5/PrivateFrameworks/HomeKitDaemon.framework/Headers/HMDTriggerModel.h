// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTRIGGERMODEL_H
#define HMDTRIGGERMODEL_H

@class NSNumber, NSString, NSArray, NSDate;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"
#import "HMDUser.h"
#import "HMDDevice.h"

@interface HMDTriggerModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSNumber *autoDelete;
@property (retain, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSArray *currentActionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) HMDUser *owner;
@property (retain, nonatomic) HMDDevice *owningDevice;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)createPayload;
-(id)dependentUUIDs;


@end


#endif