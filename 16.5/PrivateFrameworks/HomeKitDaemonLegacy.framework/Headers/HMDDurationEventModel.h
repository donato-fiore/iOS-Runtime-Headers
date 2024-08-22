// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDURATIONEVENTMODEL_H
#define HMDDURATIONEVENTMODEL_H

@class NSNumber;


#import "HMDEventModel.h"

@interface HMDDurationEventModel : HMDEventModel

@property (retain, nonatomic) NSNumber *duration;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif