// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPPRIOPLUSPLUSMETRICSALGORITHM_H
#define _DPPRIOPLUSPLUSMETRICSALGORITHM_H


#import <Foundation/Foundation.h>


@interface _DPPrioPlusPlusMetricsAlgorithm : NSObject

@property (readonly, nonatomic) NSUInteger dimension; // ivar: _dimension
@property (readonly, nonatomic) CGFloat secretSharingSigma; // ivar: _secretSharingSigma


+(id)initializeWithSecretSharingSigma:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 ;
-(id)initWithSecretSharingSigma:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 ;
-(id)randomize:(id)arg0 ;


@end


#endif