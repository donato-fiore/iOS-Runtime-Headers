// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPOVERRIDEOCCURRENCEGENERATIONRESULT_H
#define HKSPOVERRIDEOCCURRENCEGENERATIONRESULT_H


#import <Foundation/Foundation.h>

#import "HKSPMutableSleepScheduleOccurrence.h"

@interface HKSPOverrideOccurrenceGenerationResult : NSObject

@property (retain, nonatomic) HKSPMutableSleepScheduleOccurrence *overrideOccurrence; // ivar: _overrideOccurrence
@property (nonatomic) BOOL upcomingOccurrenceWasOverride; // ivar: _upcomingOccurrenceWasOverride
@property (nonatomic) BOOL wasGeneratedFromTemplate; // ivar: _wasGeneratedFromTemplate




@end


#endif