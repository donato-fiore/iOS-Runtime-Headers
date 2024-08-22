// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPPIRAPPORALGORITHM_H
#define _DPPIRAPPORALGORITHM_H


#import <Foundation/Foundation.h>

#import "_DPBiasedCoin.h"

@interface _DPPiRapporAlgorithm : NSObject

@property (readonly, nonatomic) CGFloat alpha0; // ivar: _alpha0
@property (readonly, nonatomic) CGFloat alpha1; // ivar: _alpha1
@property (readonly, nonatomic) _DPBiasedCoin *coin; // ivar: _coin
@property (readonly, nonatomic) NSUInteger numberOfClasses; // ivar: _numberOfClasses
@property (readonly, nonatomic) NSUInteger numberOfOtherPhi; // ivar: _numberOfOtherPhi
@property (readonly, nonatomic) unsigned int prime; // ivar: _prime
@property (readonly, nonatomic) unsigned int threshold; // ivar: _threshold


+(id)piRapporWithNumberOfClasses:(NSUInteger)arg0 prime:(unsigned int)arg1 alpha0:(CGFloat)arg2 alpha1:(CGFloat)arg3 ;
-(BOOL)encodeClassIndex:(NSUInteger)arg0 coeffs:(*unsigned int)arg1 phi0Buf:(*unsigned int)arg2 otherPhiBuf:(*unsigned int)arg3 ;
-(id)decode:(id)arg0 ;
-(id)encodeClassIndex:(NSUInteger)arg0 ;
-(id)encodeClassIndices:(id)arg0 ;
-(id)init;
-(id)initWithNumberOfClasses:(NSUInteger)arg0 prime:(unsigned int)arg1 alpha0:(CGFloat)arg2 alpha1:(CGFloat)arg3 ;


@end


#endif