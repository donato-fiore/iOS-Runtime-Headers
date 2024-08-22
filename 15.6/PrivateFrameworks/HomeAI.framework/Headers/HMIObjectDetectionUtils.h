// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIOBJECTDETECTIONUTILS_H
#define HMIOBJECTDETECTIONUTILS_H


#import <Foundation/Foundation.h>


@interface HMIObjectDetectionUtils : NSObject



+(float)intersectionOverMinArea:(struct CGRect )arg0 b:(struct CGRect )arg1 ;
+(float)intersectionOverUnion:(struct CGRect )arg0 b:(struct CGRect )arg1 ;
+(id)convertObjectDetections:(id)arg0 cropRect:(struct CGRect )arg1 originalImageSize:(struct CGSize )arg2 ;
+(void)nmsMultiClass:(id)arg0 output:(id)arg1 nmsConfiguration:(id)arg2 ;
+(void)nonMaximumSuppression:(id)arg0 output:(id)arg1 withThreshold:(CGFloat)arg2 withMetric:(NSInteger)arg3 ;


@end


#endif