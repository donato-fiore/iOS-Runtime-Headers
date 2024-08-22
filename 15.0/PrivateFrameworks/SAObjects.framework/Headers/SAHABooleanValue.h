// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAHABOOLEANVALUE_H
#define SAHABOOLEANVALUE_H



#import "SAHAAttributeValue.h"

@interface SAHABooleanValue : SAHAAttributeValue

@property (nonatomic) BOOL value;


+(id)booleanValue;
+(id)booleanValueWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif