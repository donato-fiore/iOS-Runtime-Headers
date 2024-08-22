// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSRHDRPROCESSINGT2_H
#define MSRHDRPROCESSINGT2_H



#import "MSRHDRProcessingT1.h"

@interface MSRHDRProcessingT2 : MSRHDRProcessingT1



-(?)setupMSRMappingTableWithMetadata;
-(id)init;
-(unsigned int)polynomialTableScale;
-(void)dumpMmrConfig;
-(void)setupHardwareConfigUnit;
-(void)setupMSRPolynomialTableForHDR10;
-(void)updateMmrReshapeChromaForComponent:(unsigned short)arg0 mmrReshapeChroma:(int)arg1 ;
-(void)updateMmrTableForComponent:(unsigned short)arg0 mmrClipValMin:(*unsigned short)arg1 mmrClipValMax:(*unsigned short)arg2 mmrCoeff:(*float)arg3 ;
-(void)updatePolynomialTablesForComponent:(*unsigned short)arg0 Component:(unsigned short)arg1 TableSize:(NSUInteger)arg2 ;


@end


#endif