// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLCSSCOMPUTEDSTYLEPROPERTY_H
#define RWIPROTOCOLCSSCOMPUTEDSTYLEPROPERTY_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSComputedStyleProperty : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;


-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif