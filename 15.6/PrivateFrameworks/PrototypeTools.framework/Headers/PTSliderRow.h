// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTSLIDERROW_H
#define PTSLIDERROW_H



#import "PTSRow.h"

@interface PTSliderRow : PTSRow

@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (copy, nonatomic) id *valueStringFormatter; // ivar: _valueStringFormatter


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)minValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 ;
-(id)valueStringFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif