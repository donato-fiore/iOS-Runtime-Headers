// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTEDITFLOATROW_H
#define PTEDITFLOATROW_H



#import "PTSRow.h"

@interface PTEditFloatRow : PTSRow

@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (nonatomic) NSUInteger precision; // ivar: _precision


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_validatedValue:(id)arg0 ;
-(id)between:(CGFloat)arg0 and:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)precision:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif