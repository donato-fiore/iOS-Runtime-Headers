// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLRACINGROUTEMANAGER_H
#define CLRACINGROUTEMANAGER_H


#import <Foundation/Foundation.h>


@interface CLRacingRouteManager : NSObject {
    CLRacingRoute clrr;
}




-(BOOL)setRaceParameters:(id)arg0 ;
-(CGFloat)recoverRaceAtTimestamp;
-(NSUInteger)addRoutePoints:(id)arg0 ;
-(NSUInteger)configureWithWorkoutActivityType:(NSUInteger)arg0 bufferSize:(NSUInteger)arg1 offRouteGraceDurationInSec:(NSUInteger)arg2 ;
-(NSUInteger)numberOfRoutePointsToAdd;
-(id)advanceToPoint:(id)arg0 ;
-(id)getRaceParameters;
-(void)reset;


@end


#endif