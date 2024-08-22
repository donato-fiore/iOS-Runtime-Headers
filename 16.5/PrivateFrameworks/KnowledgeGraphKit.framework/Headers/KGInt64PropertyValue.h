// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGINT64PROPERTYVALUE_H
#define KGINT64PROPERTYVALUE_H



#import "KGPropertyValue.h"

@interface KGInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)dataType;
-(NSUInteger)hash;
-(id)initWithValue:(NSInteger)arg0 ;
-(id)maPropertyValue;


@end


#endif