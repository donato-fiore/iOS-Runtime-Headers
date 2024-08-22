// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)createPayload;


@end


#endif