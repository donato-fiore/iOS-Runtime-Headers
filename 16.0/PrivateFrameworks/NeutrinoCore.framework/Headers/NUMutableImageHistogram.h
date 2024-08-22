// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUMUTABLEIMAGEHISTOGRAM_H
#define NUMUTABLEIMAGEHISTOGRAM_H



#import "NUImageHistogram.h"

@interface NUMutableImageHistogram : NUImageHistogram



+(Class)_histogramClass;
-(id)_blue;
-(id)_green;
-(id)_luminance;
-(id)_red;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)smoothWithFunction:(NSInteger)arg0 windowSize:(NSInteger)arg1 sampleMode:(NSInteger)arg2 ;
-(void)write:(id)arg0 ;


@end


#endif