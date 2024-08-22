// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPRESENCEEVENTMODEL_H
#define HMDPRESENCEEVENTMODEL_H

@class NSNumber, NSString, NSArray;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDEventModel.h"

@interface HMDPresenceEventModel : HMDEventModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSNumber *activation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *presenceType;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *users;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif