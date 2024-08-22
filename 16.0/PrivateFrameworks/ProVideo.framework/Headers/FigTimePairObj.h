// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGTIMEPAIROBJ_H
#define FIGTIMEPAIROBJ_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FigTimePairObj : NSObject <NSCopying, NSSecureCoding>

 {
    PC_CMTimePair _pair;
}




+(BOOL)supportsSecureCoding;
+(id)pairWithPair:(struct PC_CMTimePair )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigTimePair:(struct PC_CMTimePair )arg0 ;
-(id)initWithFirst:(struct ? )arg0 Second:(struct ? )arg1 ;
-(struct ? )first;
-(struct ? )second;
-(struct PC_CMTimePair )pair;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(struct PC_CMTimePair *)arg0 ;
-(void)setFirst:(struct ? )arg0 ;
-(void)setPair:(struct PC_CMTimePair )arg0 ;
-(void)setSecond:(struct ? )arg0 ;


@end


#endif