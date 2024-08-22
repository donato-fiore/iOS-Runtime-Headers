// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATIMERSHOWANDPERFORMTIMERACTION_H
#define SATIMERSHOWANDPERFORMTIMERACTION_H

@protocol SATimerTimerAction;


#import "SABaseClientBoundCommand.h"

@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand

@property (retain, nonatomic) NSObject<SATimerTimerAction> *timerAction;


+(id)showAndPerformTimerAction;
+(id)showAndPerformTimerActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif