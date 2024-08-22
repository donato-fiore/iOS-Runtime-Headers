// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VRXTURNBASEDINSTRUMENTATIONEVENT_H
#define VRXTURNBASEDINSTRUMENTATIONEVENT_H



#import "VRXInstrumentationEvent.h"

@interface VRXTurnBasedInstrumentationEvent : VRXInstrumentationEvent

@property (readonly, nonatomic) BOOL requiresNewTurn;


-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif