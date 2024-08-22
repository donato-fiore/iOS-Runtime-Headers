// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRCARDIOFITNESSANALYTICSRESULT_H
#define HKHRCARDIOFITNESSANALYTICSRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface HKHRCardioFitnessAnalyticsResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger status; // ivar: _status


-(id)initWithStatus:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif