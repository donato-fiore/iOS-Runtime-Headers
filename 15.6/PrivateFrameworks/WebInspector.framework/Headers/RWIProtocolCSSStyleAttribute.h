// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCSSSTYLEATTRIBUTE_H
#define RWIPROTOCOLCSSSTYLEATTRIBUTE_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolCSSStyle.h"

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolCSSStyle *style;


-(id)initWithName:(id)arg0 style:(id)arg1 ;


@end


#endif