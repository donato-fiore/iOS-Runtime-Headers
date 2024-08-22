// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSMULTIVALUEPROPERTY_H
#define ICSMULTIVALUEPROPERTY_H



#import "ICSProperty.h"

@interface ICSMultiValueProperty : ICSProperty



-(BOOL)isMultiValued;
-(id)initWithValue:(id)arg0 type:(NSUInteger)arg1 ;
-(id)value;
-(id)values;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)_setParsedValues:(id)arg0 type:(NSUInteger)arg1 ;
-(void)setValue:(id)arg0 type:(NSUInteger)arg1 ;
-(void)setValues:(id)arg0 valueType:(NSUInteger)arg1 ;


@end


#endif