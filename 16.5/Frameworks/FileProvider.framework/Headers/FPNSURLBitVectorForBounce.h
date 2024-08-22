// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPNSURLBITVECTORFORBOUNCE_H
#define FPNSURLBITVECTORFORBOUNCE_H


#import <Foundation/Foundation.h>


@interface FPNSURLBitVectorForBounce : NSObject {
    *__CFBitVector _vector;
}


@property (readonly, nonatomic) int bitCount; // ivar: _bitCount


-(BOOL)foundAllAvailableBounceNumbers;
-(id)findNextAvailableBounceNumber;
-(id)findNextAvailableBounceNumberFromIndex:(int)arg0 ;
-(id)init;
-(void)markBounceNumberAsFound:(id)arg0 ;


@end


#endif