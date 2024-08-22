// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCSSSTYLE_H
#define RWIPROTOCOLCSSSTYLE_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolCSSSourceRange.h"
#import "RWIProtocolCSSStyleId.h"

@interface RWIProtocolCSSStyle : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *cssProperties;
@property (copy, nonatomic) NSString *cssText;
@property (copy, nonatomic) NSString *height;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;
@property (copy, nonatomic) NSArray *shorthandEntries;
@property (retain, nonatomic) RWIProtocolCSSStyleId *styleId;
@property (copy, nonatomic) NSString *width;


-(id)initWithCssProperties:(id)arg0 shorthandEntries:(id)arg1 ;


@end


#endif