// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESSSEQUENCEMETRICDATA_H
#define SBPRESSSEQUENCEMETRICDATA_H

@class NSString, NSArray, NSUUID;


#import "SBAWDMetricData.h"

@interface SBPressSequenceMetricData : SBAWDMetricData

@property (nonatomic) NSUInteger clickMax; // ivar: _clickMax
@property (nonatomic) BOOL didTriggerSOS; // ivar: _didTriggerSOS
@property (copy, nonatomic) NSString *pressName; // ivar: _pressName
@property (copy, nonatomic) NSArray *pressSequence; // ivar: _pressSequence
@property (copy, nonatomic) NSUUID *sosTriggerUUID; // ivar: _sosTriggerUUID




@end


#endif