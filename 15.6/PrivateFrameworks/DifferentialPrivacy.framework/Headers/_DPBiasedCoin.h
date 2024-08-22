// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPBIASEDCOIN_H
#define _DPBIASEDCOIN_H


#import <Foundation/Foundation.h>


@interface _DPBiasedCoin : NSObject

@property (readonly, nonatomic) CGFloat bias; // ivar: _bias


+(CGFloat)sanitizedProbability:(CGFloat)arg0 ;
+(id)coinWithBias:(CGFloat)arg0 ;
-(BOOL)flip;
-(id)description;
-(id)init;
-(id)initWithBias:(CGFloat)arg0 ;
-(unsigned char)generateByte;


@end


#endif