// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLCSSSHORTHANDENTRY_H
#define RWIPROTOCOLCSSSHORTHANDENTRY_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSShorthandEntry : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;


-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif