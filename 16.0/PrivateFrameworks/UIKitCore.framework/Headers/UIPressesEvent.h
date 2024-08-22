// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRESSESEVENT_H
#define UIPRESSESEVENT_H

@class NSMutableSet, NSHashTable, NSSet;


#import "UIEvent.h"
#import "UIPress.h"

@interface UIPressesEvent : UIEvent {
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
}


@property (retain, nonatomic) UIPress *_triggeringPhysicalButton; // ivar: _triggeringPhysicalButton
@property (readonly, nonatomic) NSSet *allPresses;


-(BOOL)_sendEventToGestureRecognizer:(id)arg0 ;
-(NSInteger)_modifierFlags;
-(NSInteger)subtype;
-(NSInteger)type;
-(id)_cloneEvent;
-(id)_directionalPressWithStrongestForce;
-(id)_gestureRecognizersForWindow:(id)arg0 ;
-(id)_init;
-(id)_physicalButtonsForGestureRecognizer:(id)arg0 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg0 withPhase:(NSInteger)arg1 ;
-(id)_physicalButtonsForPhase:(NSInteger)arg0 ;
-(id)_physicalButtonsForResponder:(id)arg0 withPhase:(NSInteger)arg1 ;
-(id)_respondersForWindow:(id)arg0 ;
-(id)_terminalRegistrantsForPressType:(NSInteger)arg0 ;
-(id)_windows;
-(id)description;
-(id)physicalButtonsForWindow:(id)arg0 ;
-(id)pressesForGestureRecognizer:(id)arg0 ;
-(void)_addGesturesForPress:(id)arg0 ;
-(void)_addPress:(id)arg0 forDelayedDelivery:(BOOL)arg1 ;
-(void)_cleanupAfterDispatch;
-(void)_registerForTerminalEvent:(id)arg0 ;
-(void)_removePhysicalButton:(id)arg0 ;
-(void)_unregisterForTerminalEvent:(id)arg0 ;


@end


#endif