// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHAINTEGERVALUE_H
#define SAHAINTEGERVALUE_H



#import "SAHAAttributeValue.h"

@interface SAHAIntegerValue : SAHAAttributeValue

@property (nonatomic) NSInteger value;


+(id)integerValue;
+(id)integerValueWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif