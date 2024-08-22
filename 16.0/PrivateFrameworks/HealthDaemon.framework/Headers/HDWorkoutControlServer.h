// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTCONTROLSERVER_H
#define HDWORKOUTCONTROLSERVER_H

@class NSString;
@protocol HKWorkoutControlServer;


#import "HDStandardTaskServer.h"
#import "HDWorkoutManager.h"

@interface HDWorkoutControlServer : HDStandardTaskServer <HKWorkoutControlServer>

 {
    HDWorkoutManager *_workoutManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_finishAllWorkoutsWithCompletion:(id)arg0 ;
-(void)remote_generateFakeDataForActivityType:(NSInteger)arg0 minutes:(CGFloat)arg1 completion:(id)arg2 ;
-(void)remote_generatePauseOrResumeRequestWithCompletion:(id)arg0 ;


@end


#endif