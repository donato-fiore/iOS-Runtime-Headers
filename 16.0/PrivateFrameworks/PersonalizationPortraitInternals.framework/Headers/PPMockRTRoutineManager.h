// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPMOCKRTROUTINEMANAGER_H
#define PPMOCKRTROUTINEMANAGER_H


#import <Foundation/Foundation.h>


@interface PPMockRTRoutineManager : NSObject



+(id)defaultManager;
+(void)initialize;
+(void)setMockLocationsOfInterest:(id)arg0 ;
-(id)init;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg0 endDate:(id)arg1 withHandler:(id)arg2 ;


@end


#endif