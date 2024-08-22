// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLCSSRULEMATCH_H
#define RWIPROTOCOLCSSRULEMATCH_H

@class NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolCSSRule.h"

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *matchingSelectors;
@property (retain, nonatomic) RWIProtocolCSSRule *rule;


-(id)initWithRule:(id)arg0 matchingSelectors:(id)arg1 ;


@end


#endif