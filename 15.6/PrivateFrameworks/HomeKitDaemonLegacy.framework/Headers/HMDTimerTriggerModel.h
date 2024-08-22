// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTIMERTRIGGERMODEL_H
#define HMDTIMERTRIGGERMODEL_H

@class NSDate, NSData, NSString;


#import "HMDTriggerModel.h"

@interface HMDTimerTriggerModel : HMDTriggerModel

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSData *fireDateTimeZone;
@property (copy, nonatomic) NSData *fireRepeatInterval;
@property (copy, nonatomic) NSData *recurrences;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSData *significantEventOffset;


+(id)properties;
-(id)createPayload;


@end


#endif