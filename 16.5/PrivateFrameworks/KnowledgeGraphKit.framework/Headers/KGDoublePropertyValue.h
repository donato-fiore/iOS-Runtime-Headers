// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGDOUBLEPROPERTYVALUE_H
#define KGDOUBLEPROPERTYVALUE_H



#import "KGPropertyValue.h"

@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) CGFloat value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)dataType;
-(NSUInteger)hash;
-(id)initWithValue:(CGFloat)arg0 ;
-(id)maPropertyValue;


@end


#endif