// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISPATIOTEMPORALGUIDEDFILTERPROCESSOR_H
#define PISPATIOTEMPORALGUIDEDFILTERPROCESSOR_H

@class CIImageProcessorKernel;



@interface PISpatioTemporalGuidedFilterProcessor : CIImageProcessorKernel



+(BOOL)allowPartialOutputRegion;
+(BOOL)outputIsOpaque;
+(BOOL)processWithInputs:(id)arg0 arguments:(id)arg1 output:(id)arg2 error:(*id)arg3 ;
+(BOOL)synchronizeInputs;
+(int)formatForInputAtIndex:(int)arg0 ;
+(int)outputFormat;
+(struct CGRect )roiForInput:(int)arg0 arguments:(id)arg1 outputRect:(struct CGRect )arg2 ;


@end


#endif