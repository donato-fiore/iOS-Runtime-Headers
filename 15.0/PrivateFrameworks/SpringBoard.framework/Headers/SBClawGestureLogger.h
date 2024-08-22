// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCLAWGESTURELOGGER_H
#define SBCLAWGESTURELOGGER_H

@class NSDate, NSSet, NSMutableSet;

#import <Foundation/Foundation.h>


@interface SBClawGestureLogger : NSObject {
    BOOL _didTriggerSOS;
    NSDate *_clawEventTimestamp;
    NSSet *_activePressTypes;
    NSMutableSet *_participatingPressTypes;
}




-(id)init;
-(void)_publishLoggedData;
-(void)_resetLoggedData;
-(void)noteActiveGesturePressTypes:(id)arg0 wasClawGestureActive:(BOOL)arg1 isClawGestureActive:(BOOL)arg2 ;
-(void)noteSOSTriggered;


@end


#endif