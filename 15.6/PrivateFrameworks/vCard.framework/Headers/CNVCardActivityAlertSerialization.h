// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDACTIVITYALERTSERIALIZATION_H
#define CNVCARDACTIVITYALERTSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface CNVCardActivityAlertSerialization : NSObject



+(id)activityAlertWithString:(id)arg0 ;
+(id)dictionaryWithType:(id)arg0 info:(id)arg1 ;
+(id)infoFromDictionary:(id)arg0 ;
+(id)stringWithType:(id)arg0 info:(id)arg1 ;
+(id)typeFromDictionary:(id)arg0 ;
+(void)parseString:(id)arg0 intoTypeAndInfo:(id)arg1 ;


@end


#endif