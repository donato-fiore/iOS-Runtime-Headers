// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDASSISTANTCHARACTERISTICTUPLE_H
#define HMDASSISTANTCHARACTERISTICTUPLE_H

@class NSString, SAHAAttributeValue;

#import <Foundation/Foundation.h>


@interface HMDAssistantCharacteristicTuple : NSObject

@property (readonly, nonatomic) NSString *attribute; // ivar: _attribute
@property (readonly, nonatomic) SAHAAttributeValue *value; // ivar: _value


-(id)init;
-(id)initWithAttribute:(id)arg0 value:(id)arg1 ;


@end


#endif