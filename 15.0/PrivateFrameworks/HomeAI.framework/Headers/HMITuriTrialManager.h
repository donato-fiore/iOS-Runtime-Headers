// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMITURITRIALMANAGER_H
#define HMITURITRIALMANAGER_H

@class HMFObject, TRIClient, NSString;
@protocol HMFLogging;



@interface HMITuriTrialManager : HMFObject <HMFLogging>

 {
    TRIClient *_trialClient;
    NSString *_compiledModelArchivePath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat faceThreshold; // ivar: _faceThreshold
@property (readonly) NSUInteger hash;
@property (readonly) NSString *modelPath; // ivar: _modelPath
@property (readonly) CGFloat personThresholdHigh; // ivar: _personThresholdHigh
@property (readonly) CGFloat personThresholdMedium; // ivar: _personThresholdMedium
@property (readonly) CGFloat petThresholdHigh; // ivar: _petThresholdHigh
@property (readonly) CGFloat petThresholdMedium; // ivar: _petThresholdMedium
@property (readonly) Class superclass;
@property (readonly) CGFloat vehicleThresholdHigh; // ivar: _vehicleThresholdHigh
@property (readonly) CGFloat vehicleThresholdMedium; // ivar: _vehicleThresholdMedium


+(id)logCategory;
+(id)sharedInstance;
-(BOOL)loadModelFromTrialWithError:(*id)arg0 ;
-(void)configure;
-(void)registerForTrialUpdates;
-(void)submitUpdateModelTask;
-(void)updateLevels;


@end


#endif