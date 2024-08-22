// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPBSFPWITHOHE_H
#define _DPBSFPWITHOHE_H


#import <Foundation/Foundation.h>


@interface _DPBSFPWithOHE : NSObject {
    CGFloat _epsilon;
    NSUInteger _maxRecordBitLength;
    NSUInteger _segmentBitLength;
    NSUInteger _numOfSegments;
    CGFloat _probabilityOfVerification;
    NSUInteger _hashSeed;
    NSUInteger _hashSeedInVerification;
    NSUInteger _signatureBitLength;
    NSUInteger _signatureBitLengthInVerification;
}




-(id)encode:(id)arg0 isVerificationMode:(BOOL)arg1 segmentIndex:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 maxRecordBitLength:(NSUInteger)arg1 segmentBitLength:(NSUInteger)arg2 probabilityOfVerification:(CGFloat)arg3 hashSeed:(NSUInteger)arg4 hashSeedInVerification:(NSUInteger)arg5 signatureBitLength:(NSUInteger)arg6 signatureBitLengthInVerification:(NSUInteger)arg7 ;
-(id)privatize:(id)arg0 ;
-(id)privatizeWithOHE:(id)arg0 isVerificationMode:(BOOL)arg1 ;


@end


#endif