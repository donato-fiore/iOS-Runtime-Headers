// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2IKESPI_H
#define NEIKEV2IKESPI_H

@protocol NSCopying;


#import "NEIKEv2SPI.h"

@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying>



@property NSUInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithValue:(NSUInteger)arg0 ;


@end


#endif