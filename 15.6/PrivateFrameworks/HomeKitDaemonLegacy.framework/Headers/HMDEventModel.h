// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDEVENTMODEL_H
#define HMDEVENTMODEL_H

@class NSNumber;


#import "HMDBackingStoreModelObject.h"

@interface HMDEventModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *endEvent;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 className:(Class)arg3 message:(id)arg4 ;
+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif