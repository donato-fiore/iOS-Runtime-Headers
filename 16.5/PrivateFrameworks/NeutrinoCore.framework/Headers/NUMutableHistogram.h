// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUMUTABLEHISTOGRAM_H
#define NUMUTABLEHISTOGRAM_H



#import "NUHistogram.h"

@interface NUMutableHistogram : NUHistogram



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)increment:(NSInteger)arg0 ;
-(void)observeValue:(CGFloat)arg0 ;
-(void)observeValuesInDataSet:(id)arg0 ;
-(void)smoothWithFunction:(NSInteger)arg0 windowSize:(NSInteger)arg1 sampleMode:(NSInteger)arg2 ;
-(void)write:(id)arg0 ;


@end


#endif