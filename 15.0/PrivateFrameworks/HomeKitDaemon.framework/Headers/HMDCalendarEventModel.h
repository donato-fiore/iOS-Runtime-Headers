// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCALENDAREVENTMODEL_H
#define HMDCALENDAREVENTMODEL_H

@class NSData;


#import "HMDEventModel.h"

@interface HMDCalendarEventModel : HMDEventModel

@property (retain, nonatomic) NSData *fireDateComponents;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 ;
+(id)properties;


@end


#endif