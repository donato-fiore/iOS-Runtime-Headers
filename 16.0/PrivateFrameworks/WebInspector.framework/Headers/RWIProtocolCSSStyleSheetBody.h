// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLCSSSTYLESHEETBODY_H
#define RWIPROTOCOLCSSSTYLESHEETBODY_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *styleSheetId;
@property (copy, nonatomic) NSString *text;


-(id)initWithStyleSheetId:(id)arg0 rules:(id)arg1 ;


@end


#endif