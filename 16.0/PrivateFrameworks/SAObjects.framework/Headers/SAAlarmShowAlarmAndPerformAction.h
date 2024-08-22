// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAALARMSHOWALARMANDPERFORMACTION_H
#define SAALARMSHOWALARMANDPERFORMACTION_H

@protocol SAAlarmAlarmAction;


#import "SAUISnippet.h"

@interface SAAlarmShowAlarmAndPerformAction : SAUISnippet

@property (retain, nonatomic) NSObject<SAAlarmAlarmAction> *alarmAction;


+(id)showAlarmAndPerformAction;
+(id)showAlarmAndPerformActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif