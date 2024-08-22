// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAHASTRINGVALUE_H
#define SAHASTRINGVALUE_H

@class NSString;


#import "SAHAAttributeValue.h"

@interface SAHAStringValue : SAHAAttributeValue

@property (copy, nonatomic) NSString *value;


+(id)stringValue;
+(id)stringValueWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif