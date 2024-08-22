// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSERVICETRANSACTION_H
#define HMDSERVICETRANSACTION_H

@class NSString, NSArray, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable, OS_dispatch_group;


#import "HMDBackingStoreModelObject.h"

@interface HMDServiceTransaction : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSString *associatedServiceType;
@property (retain, nonatomic) NSArray *characteristics;
@property (retain, nonatomic) NSNumber *configurationState;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker; // ivar: _configurationTracker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *expectedConfiguredName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *hidden;
@property (retain, nonatomic) NSNumber *instanceID;
@property (retain, nonatomic) NSNumber *labelIndex;
@property (retain, nonatomic) NSNumber *labelNamespace;
@property (retain, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (retain, nonatomic) NSNumber *lastKnownOperatingState;
@property (retain, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (retain, nonatomic) NSString *lastSeenConfiguredNameLocal; // ivar: _lastSeenConfiguredNameLocal
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (retain, nonatomic) NSNumber *mediaSourceIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *primary;
@property (retain, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSNumber *serviceProperties;
@property (retain, nonatomic) NSString *serviceSubtype;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_createMKFCharacteristicFromDictionary:(id)arg0 context:(id)arg1 ;
+(id)cd_modelTypeForCharacteristicFormat:(id)arg0 ;
+(id)cd_parentReferenceName;
+(id)properties;
-(BOOL)cd_updateManagedObjectInContext:(id)arg0 error:(*id)arg1 ;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;


@end


#endif