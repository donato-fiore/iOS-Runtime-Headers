// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGSTRINGPROPERTYVALUE_H
#define KGSTRINGPROPERTYVALUE_H

@class NSString;


#import "KGPropertyValue.h"

@interface KGStringPropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)dataType;
-(NSUInteger)hash;
-(id)initWithValue:(id)arg0 ;
-(id)maPropertyValue;


@end


#endif