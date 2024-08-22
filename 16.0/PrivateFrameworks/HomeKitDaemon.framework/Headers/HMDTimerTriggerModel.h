// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTIMERTRIGGERMODEL_H
#define HMDTIMERTRIGGERMODEL_H

@class NSString, NSDate, NSData;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDTriggerModel.h"

@interface HMDTimerTriggerModel : HMDTriggerModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSData *fireDateTimeZone;
@property (copy, nonatomic) NSData *fireRepeatInterval;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *recurrences;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSData *significantEventOffset;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)createPayload;


@end


#endif