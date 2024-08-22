// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGUINT64PROPERTYVALUE_H
#define KGUINT64PROPERTYVALUE_H



#import "KGPropertyValue.h"

@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)dataType;
-(NSUInteger)hash;
-(id)initWithValue:(NSUInteger)arg0 ;
-(id)maPropertyValue;


@end


#endif