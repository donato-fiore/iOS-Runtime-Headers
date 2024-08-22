// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTMUTABLEHISTOGRAM_H
#define PPTMUTABLEHISTOGRAM_H



#import "PPTHistogram.h"

@interface PPTMutableHistogram : PPTHistogram



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)recordSample:(id)arg0 ;
-(void)recordSample:(id)arg0 withAccumulatorValue:(id)arg1 ;
-(void)recordSample:(id)arg0 withWeight:(NSUInteger)arg1 ;
-(void)recordSamples:(id)arg0 ;


@end


#endif