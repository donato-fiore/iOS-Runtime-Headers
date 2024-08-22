// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCRATECONTROLUTIL_H
#define VCRATECONTROLUTIL_H


#import <Foundation/Foundation.h>


@interface VCRateControlUtil : NSObject



+(BOOL)calculateCongestionMetricsFromOWRDList:(struct ? *)arg0 owrd:(CGFloat)arg1 time:(CGFloat)arg2 config:(struct VCRateControlAlgorithmConfig )arg3 isInitialRampUp:(BOOL)arg4 ;
+(BOOL)prepareOWRDList:(struct ? *)arg0 owrd:(CGFloat)arg1 time:(CGFloat)arg2 config:(struct VCRateControlAlgorithmConfig )arg3 ;
+(CGFloat)calculateNOWRDWithDuration:(CGFloat)arg0 owrdList:(struct ? *)arg1 historySize:(unsigned int)arg2 minHistorySize:(unsigned int)arg3 initalRampUpReadyDuration:(CGFloat)arg4 isInitialRampUp:(BOOL)arg5 ;
+(void)calculateNOWRDAccWithOWRDList:(struct ? *)arg0 config:(struct VCRateControlAlgorithmConfig )arg1 ;
+(void)calculateNOWRDShortWithOWRDList:(struct ? *)arg0 config:(struct VCRateControlAlgorithmConfig )arg1 isInitialRampUp:(BOOL)arg2 ;
+(void)calculateNOWRDWithOWRDList:(struct ? *)arg0 config:(struct VCRateControlAlgorithmConfig )arg1 isInitialRampUp:(BOOL)arg2 ;


@end


#endif