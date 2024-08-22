// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIOPLUSPLUSNOISEGENERATOR_H
#define _DPPRIOPLUSPLUSNOISEGENERATOR_H


#import <Foundation/Foundation.h>


@interface _DPPrioPlusPlusNoiseGenerator : NSObject



+(BOOL)isValidDimension:(NSUInteger)arg0 ;
+(BOOL)isValidSigma:(CGFloat)arg0 ;
+(id)randomize:(id)arg0 dimension:(NSUInteger)arg1 stddev:(CGFloat)arg2 ;


@end


#endif