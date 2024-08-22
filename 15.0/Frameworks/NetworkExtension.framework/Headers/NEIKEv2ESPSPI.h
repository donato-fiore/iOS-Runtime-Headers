// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2ESPSPI_H
#define NEIKEV2ESPSPI_H

@protocol NSCopying;


#import "NEIKEv2SPI.h"

@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying>



@property unsigned int value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithValue:(unsigned int)arg0 ;


@end


#endif