// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMODOMETER_H
#define CMODOMETER_H

@protocol CMOdometerDelegate;

#import <Foundation/Foundation.h>

#import "CMOdometerProxy.h"

@interface CMOdometer : NSObject

@property (nonatomic) NSObject<CMOdometerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CMOdometerProxy *odometerProxy; // ivar: _odometerProxy


-(id)init;
-(void)dealloc;
-(void)startCyclingWorkoutDistanceUpdatesWithHandler:(id)arg0 ;
-(void)startOdometerUpdatesForActivity:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)stopCyclingWorkoutDistanceUpdates;
-(void)stopOdometerUpdates;


@end


#endif