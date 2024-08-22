// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCAMERACAPTURETASKCONSTRAINTS_H
#define PLCAMERACAPTURETASKCONSTRAINTS_H

@class NSMutableSet, PFStateCaptureHandler, NSString;
@protocol PFStateCaptureProvider;

#import <Foundation/Foundation.h>


@interface PLCameraCaptureTaskConstraints : NSObject <PFStateCaptureProvider>

 {
    os_unfair_lock_s _taskConstraintCoordinatorLock;
    NSMutableSet *_taskConstraintCoordinators;
    id *_mstreamdPauseContext;
    PFStateCaptureHandler *_stateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedTaskConstraints;
-(id)init;
-(id)stateCaptureDictionary;
-(id)taskConstraintStatus;
-(void)startConstrainingTasksWithCoordinator:(id)arg0 ;
-(void)stopConstrainingTasksWithCoordinator:(id)arg0 ;


@end


#endif