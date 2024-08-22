// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDBIOMEINTERFACE_H
#define HDBIOMEINTERFACE_H


#import <Foundation/Foundation.h>

#import "HDWorkoutSessionConfiguration.h"

@interface HDBiomeInterface : NSObject {
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    NSUInteger _mostRecentBiomeEventType;
}




-(void)_sendBiomeEvent:(id)arg0 toSource:(id)arg1 ;
-(void)stopSessionWithIdentifier:(id)arg0 recoveredWorkoutConfiguration:(id)arg1 ;
-(void)workoutConfigurationUpdated:(id)arg0 ;
-(void)workoutSessionWithConfiguration:(id)arg0 transitionedToState:(NSInteger)arg1 fromState:(NSInteger)arg2 ;


@end


#endif