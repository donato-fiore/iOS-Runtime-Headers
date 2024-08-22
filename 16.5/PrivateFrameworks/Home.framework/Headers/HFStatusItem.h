// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSTATUSITEM_H
#define HFSTATUSITEM_H

@class HMHome, NSDate, HMRoom;
@protocol NSCopying, HFCharacteristicValueSource;


#import "HFItem.h"
#import "HFStatusItemUpdate.h"

@interface HFStatusItem : HFItem <NSCopying>



@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSDate *invalidationDate; // ivar: _invalidationDate
@property (nonatomic) BOOL needsInvalidation; // ivar: _needsInvalidation
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (retain, nonatomic) HFStatusItemUpdate *statusItemUpdate; // ivar: _statusItemUpdate
@property (readonly, nonatomic) BOOL supportsInvalidation;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)_associatedServiceTypeToServiceTypeMap;
+(id)_criticalServiceTypes;
+(id)_serviceTypeToAssociatedServiceTypesMap;
+(id)characteristicTypesForServiceType:(id)arg0 includingAssociatedTypes:(BOOL)arg1 ;
-(BOOL)_shouldForceVisibleForService:(id)arg0 ;
-(BOOL)canRepresentAbnormalAndNormalHomeKitObjectsTogether;
-(BOOL)canScheduleInvalidation;
-(BOOL)isInvalidationPending;
-(BOOL)isTransitioning;
-(CGFloat)invalidationTimeout;
-(id)_filteredServicesOfTypes:(id)arg0 containingCharacteristicTypes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)displayNameForHomeKitObject:(id)arg0 ;
-(id)filteredServices;
-(id)filteredServicesOfTypes:(id)arg0 ;
-(id)filteredServicesOfTypes:(id)arg0 containingCharacteristicTypes:(id)arg1 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 room:(id)arg1 ;
-(id)initWithHome:(id)arg0 room:(id)arg1 valueSource:(id)arg2 ;
-(id)itemUpdateFromLatestResults;
-(id)shortTitleForFormat:(id)arg0 ;
-(id)standardResultsForBatchReadResponse:(id)arg0 serviceTypes:(id)arg1 ;
-(void)_updateInvalidationDate;
-(void)scheduleInvalidation;


@end


#endif