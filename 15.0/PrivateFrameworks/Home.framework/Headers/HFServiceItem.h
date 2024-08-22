// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICEITEM_H
#define HFSERVICEITEM_H

@class NSString, HMHome, HMService, NSSet;
@protocol HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFServiceItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HMService *service; // ivar: _service
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(Class)itemClassForService:(id)arg0 ;
+(id)serviceItemForService:(id)arg0 valueSource:(id)arg1 ;
+(id)supportedServiceTypes;
-(BOOL)actionsMayRequireDeviceUnlock;
-(BOOL)containsActions;
-(id)_actionableCharacteristics;
-(id)_allRepresentedServices;
-(id)_augmentedStandardResultsForUpdateResponse:(id)arg0 controlItems:(id)arg1 ;
-(id)_siriEndPointProfiles;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)characteristicsToReadForCharacteristicTypes:(id)arg0 controlItems:(id)arg1 ;
-(id)controlDescriptionForCharacteristic:(id)arg0 withValue:(id)arg1 ;
-(id)controlItemValueSourceForPrimaryService;
-(id)controlItemValueSourceForServices:(id)arg0 ;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createControlItems;
-(id)currentStateActionBuildersForHome:(id)arg0 ;
-(id)descriptionForCharacteristic:(id)arg0 withValue:(id)arg1 ;
-(id)incrementalStateIconDescriptorForPrimaryState:(NSInteger)arg0 incrementalValue:(id)arg1 ;
-(id)init;
-(id)initWithValueSource:(id)arg0 service:(id)arg1 ;
-(id)namingComponentForHomeKitObject;
-(id)performStandardUpdateWithCharacteristicTypes:(id)arg0 options:(id)arg1 ;
-(id)serviceLikeBuilderInHome:(id)arg0 ;
-(id)servicesToReadForCharacteristicType:(id)arg0 ;


@end


#endif