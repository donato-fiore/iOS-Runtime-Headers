// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIOBJECTDETECTIONUTILS_H
#define HMIOBJECTDETECTIONUTILS_H


#import <Foundation/Foundation.h>


@interface HMIObjectDetectionUtils : NSObject



+(id)convertObjectDetections:(id)arg0 cropRect:(struct CGRect )arg1 originalImageSize:(struct CGSize )arg2 ;
+(void)nmsMultiClass:(id)arg0 output:(id)arg1 nmsConfiguration:(id)arg2 ;
+(void)nonMaximumSuppression:(id)arg0 output:(id)arg1 withThreshold:(CGFloat)arg2 withMetric:(NSInteger)arg3 ;


@end


#endif