// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAALARMSHOWANDPERFORMALARMACTION_H
#define SAALARMSHOWANDPERFORMALARMACTION_H

@protocol SAAlarmAlarmAction;


#import "SABaseClientBoundCommand.h"

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (retain, nonatomic) NSObject<SAAlarmAlarmAction> *alarmAction;


+(id)showAndPerformAlarmAction;
+(id)showAndPerformAlarmActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif