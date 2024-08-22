// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXCONDITIONALFORMATTINGRULE_H
#define EXCONDITIONALFORMATTINGRULE_H


#import <Foundation/Foundation.h>


@interface EXConditionalFormattingRule : NSObject



+(?)readFrom:(?)arg0 x14:(?)arg1 edConditionalFormatting:(?)arg2 edReferencestate;
+(id)conditionalFormattingRuleTypeEnumMap;
+(id)operatorStringEnumMap;
+(id)timePeriodEnumMap;
+(int)edOperatorFromXmlOperatorString:(id)arg0 ;
+(int)edRuleTypeFromXmlRuleTypeString:(id)arg0 ;
+(int)edTimePeriodFromXmlTimePeriodString:(id)arg0 ;


@end


#endif