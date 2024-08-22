// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBIOMETRICMONITORTESTRECIPEDUMMYDATASOURCE_H
#define SBBIOMETRICMONITORTESTRECIPEDUMMYDATASOURCE_H

@class NSMutableSet, NSString;
@protocol SBBiometricMonitorDataSource;

#import <Foundation/Foundation.h>


@interface SBBiometricMonitorTestRecipeDummyDataSource : NSObject <SBBiometricMonitorDataSource>

 {
    NSMutableSet *_observers;
    NSInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL matchRunning;
@property (readonly, nonatomic) BOOL poseIsMarginal; // ivar: _poseIsMarginal
@property (readonly, nonatomic) BOOL presenceDetectRunning;
@property (readonly) Class superclass;


-(void)addObserver:(id)arg0 ;
-(void)cycleState;
-(void)removeObserver:(id)arg0 ;


@end


#endif