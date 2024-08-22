// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIMLMODEL_H
#define HMIMLMODEL_H

@class HMFObject, NSString, MLModel, NSURL, HMFOSTransaction, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging;



@interface HMIMLModel : HMFObject <HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) MLModel *model; // ivar: _model
@property (readonly) NSURL *modelURL; // ivar: _modelURL
@property (readonly) Class superclass;
@property (retain) HMFOSTransaction *transaction; // ivar: _transaction
@property (readonly) MLModel *underlyingModel;
@property (readonly) HMFTimer *watchdogTimer; // ivar: _watchdogTimer


+(id)logCategory;
-(BOOL)_ensureModelWithError:(*id)arg0 ;
-(id)initWithModelURL:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif