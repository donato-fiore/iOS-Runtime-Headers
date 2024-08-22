// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOCATIONEVENTMODEL_H
#define HMDLOCATIONEVENTMODEL_H

@class NSString, NSData;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDEventModel.h"

@interface HMDLocationEventModel : HMDEventModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *region;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif