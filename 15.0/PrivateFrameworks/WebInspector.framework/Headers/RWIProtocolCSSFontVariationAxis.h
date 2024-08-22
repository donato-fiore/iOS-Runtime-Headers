// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLCSSFONTVARIATIONAXIS_H
#define RWIPROTOCOLCSSFONTVARIATIONAXIS_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSFontVariationAxis : RWIProtocolJSONObject

@property (nonatomic) CGFloat defaultValue;
@property (nonatomic) CGFloat maximumValue;
@property (nonatomic) CGFloat minimumValue;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tag;


-(id)initWithTag:(id)arg0 minimumValue:(CGFloat)arg1 maximumValue:(CGFloat)arg2 defaultValue:(CGFloat)arg3 ;


@end


#endif