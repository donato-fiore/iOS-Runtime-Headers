// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCRATECONTROLALGORITHMTELEPHONY_H
#define VCRATECONTROLALGORITHMTELEPHONY_H



#import "VCRateControlAlgorithmBase.h"

@interface VCRateControlAlgorithmTelephony : VCRateControlAlgorithmBase {
    short _currentRSRP;
    unsigned char _currentUplinkBLER;
    unsigned int _nwConnectionAvgDelay;
    unsigned int _nwConnectionAvgThroughput;
    CGFloat _lastTimeBLERBelowRampDownThreshold;
    CGFloat _lastTimeBLERAboveRampUpThreshold;
}




-(BOOL)doRateControlWithNWConnectionStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(BOOL)doRateControlWithStatistics:(struct tagVCStatisticsMessage )arg0 ;
-(BOOL)shouldRampDown;
-(BOOL)shouldRampUp;
-(id)init;
-(int)rampDownTier;
-(int)rampUpTier;
-(void)configure:(struct tagVCRateControlAlgorithmConfig )arg0 restartRequired:(BOOL)arg1 ;
-(void)printRateControlInfoToLogDump;
-(void)runRateControlStateTransition;
-(void)updateInternalStats;


@end


#endif