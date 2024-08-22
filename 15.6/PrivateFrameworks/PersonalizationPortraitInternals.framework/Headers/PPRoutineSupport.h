// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPROUTINESUPPORT_H
#define PPROUTINESUPPORT_H


#import <Foundation/Foundation.h>


@interface PPRoutineSupport : NSObject



+(BOOL)importCoreRoutineDataWithError:(*id)arg0 shouldContinueBlock:(id)arg1 ;
+(id)fetchLocationOfInterestByType:(NSInteger)arg0 ;
+(id)locationsOfInterestVisitedBetweenStartDate:(id)arg0 endDate:(id)arg1 ;


@end


#endif