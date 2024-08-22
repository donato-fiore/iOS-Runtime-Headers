// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEVENTTRIGGERMODEL_H
#define HMDEVENTTRIGGERMODEL_H

@class NSData, NSNumber;


#import "HMDTriggerModel.h"

@interface HMDEventTriggerModel : HMDTriggerModel

@property (retain, nonatomic) NSData *evaluationCondition;
@property (retain, nonatomic) NSNumber *executeOnce;
@property (retain, nonatomic) NSData *recurrences;


+(id)properties;
-(id)createPayload;


@end


#endif