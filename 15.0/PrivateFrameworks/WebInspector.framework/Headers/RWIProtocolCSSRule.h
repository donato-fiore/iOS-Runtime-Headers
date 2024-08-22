// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLCSSRULE_H
#define RWIPROTOCOLCSSRULE_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolCSSRuleId.h"
#import "RWIProtocolCSSSelectorList.h"
#import "RWIProtocolCSSStyle.h"

@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *groupings;
@property (nonatomic) NSInteger origin;
@property (retain, nonatomic) RWIProtocolCSSRuleId *ruleId;
@property (retain, nonatomic) RWIProtocolCSSSelectorList *selectorList;
@property (nonatomic) int sourceLine;
@property (copy, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) RWIProtocolCSSStyle *style;


-(id)initWithSelectorList:(id)arg0 sourceLine:(int)arg1 origin:(NSInteger)arg2 style:(id)arg3 ;


@end


#endif