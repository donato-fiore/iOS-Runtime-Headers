// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDTRIGGERMODEL_H
#define HMDTRIGGERMODEL_H

@class NSNumber, NSString, NSArray, NSDate;


#import "HMDBackingStoreModelObject.h"
#import "HMDUser.h"
#import "HMDDevice.h"

@interface HMDTriggerModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSNumber *autoDelete;
@property (retain, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSArray *currentActionSets;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) HMDUser *owner;
@property (retain, nonatomic) HMDDevice *owningDevice;


+(id)properties;
-(id)createPayload;
-(id)dependentUUIDs;


@end


#endif