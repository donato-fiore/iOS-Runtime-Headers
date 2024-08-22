// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSRHDRPROCESSINGT3_H
#define MSRHDRPROCESSINGT3_H



#import "MSRHDRProcessingT2.h"

@interface MSRHDRProcessingT3 : MSRHDRProcessingT2 {
    int _unequalSpacingTmLutMode;
    float _toneMapLUT0;
    float _toneMapLUT1;
    float _toneMapLUT2;
    float _toneMapLUT3;
}




-(?)populateMSRColorConfigStageB02HDR10DMConfig;
-(?)populateMSRColorConfigStageB02HLGhdrControl;
-(NSUInteger)getTmLutSize;
-(id)init;
-(int)getLumaShiftBits;
-(void)getTmLutInput:(NSUInteger)arg0 lutInput:(*float)arg1 ;
-(void)hdr10_tm_updateLUT:(NSInteger)arg0 ScalingFactorBuffer:(*float)arg1 LumaMixFactorBuffer:(*float)arg2 ;
-(void)hlg_getTmLutInput:(NSUInteger)arg0 lutInput:(*float)arg1 ;
-(void)hlg_tm_updateLUT:(NSInteger)arg0 ScalingFactorBuffer:(*float)arg1 ;
-(void)setupHardwareConfigUnit;
-(void)writeMSRColorConfigFileStageB02Enabled:(struct ProcessingControlV0_t *)arg0 Prefix:(char *)arg1 Info:(char *)arg2 ;


@end


#endif