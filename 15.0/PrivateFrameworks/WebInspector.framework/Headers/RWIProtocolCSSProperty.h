// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLCSSPROPERTY_H
#define RWIPROTOCOLCSSPROPERTY_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolCSSSourceRange.h"

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject

@property (nonatomic) BOOL implicit;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL parsedOk;
@property (copy, nonatomic) NSString *priority;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;
@property (nonatomic) NSInteger status;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *value;


-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif