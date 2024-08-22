// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAHAFLOATVALUE_H
#define SAHAFLOATVALUE_H



#import "SAHAAttributeValue.h"

@interface SAHAFloatValue : SAHAAttributeValue

@property (nonatomic) float value;


+(id)floatValue;
+(id)floatValueWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif