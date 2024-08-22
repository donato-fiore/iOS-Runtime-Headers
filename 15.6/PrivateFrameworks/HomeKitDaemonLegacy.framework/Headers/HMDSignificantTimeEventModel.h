// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSIGNIFICANTTIMEEVENTMODEL_H
#define HMDSIGNIFICANTTIMEEVENTMODEL_H

@class NSData, NSString;


#import "HMDEventModel.h"

@interface HMDSignificantTimeEventModel : HMDEventModel

@property (retain, nonatomic) NSData *offset;
@property (retain, nonatomic) NSString *significantEvent;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif