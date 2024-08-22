// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPPRIOPLUSPLUSALGORITHM_H
#define _DPPRIOPLUSPLUSALGORITHM_H


#import <Foundation/Foundation.h>


@interface _DPPrioPlusPlusAlgorithm : NSObject

@property (readonly, nonatomic) NSUInteger dimension; // ivar: _dimension
@property (readonly, nonatomic) CGFloat secretSharingSigma; // ivar: _secretSharingSigma
@property (readonly, nonatomic) CGFloat sigma; // ivar: _sigma


+(id)initializeWithSigma:(CGFloat)arg0 secretSharingSigma:(CGFloat)arg1 dimensionality:(NSUInteger)arg2 ;
-(id)initWithSigma:(CGFloat)arg0 secretSharingSigma:(CGFloat)arg1 dimensionality:(NSUInteger)arg2 ;
-(id)randomize:(id)arg0 ;


@end


#endif