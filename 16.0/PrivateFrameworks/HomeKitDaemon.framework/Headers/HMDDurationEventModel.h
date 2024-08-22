// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDURATIONEVENTMODEL_H
#define HMDDURATIONEVENTMODEL_H

@class NSString, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDEventModel.h"

@interface HMDDurationEventModel : HMDEventModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *duration;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif