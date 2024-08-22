// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSTRIAL_H
#define TPSTRIAL_H

@class TRIClient;
@protocol TPSTrialUpdateHandler;

#import <Foundation/Foundation.h>


@interface TPSTrial : NSObject

@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (weak, nonatomic) NSObject<TPSTrialUpdateHandler> *updateHandler; // ivar: _updateHandler


-(id)initWithUpdateHandler:(id)arg0 ;
-(id)levelForFactor:(id)arg0 ;
-(id)trialDeploymentID;
-(id)trialExperimentID;
-(id)trialRampID;
-(id)trialTreatmentID;


@end


#endif