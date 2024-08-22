// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLCSSINHERITEDSTYLEENTRY_H
#define RWIPROTOCOLCSSINHERITEDSTYLEENTRY_H

@class NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolCSSStyle.h"

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolCSSStyle *inlineStyle;
@property (copy, nonatomic) NSArray *matchedCSSRules;


-(id)initWithMatchedCSSRules:(id)arg0 ;


@end


#endif