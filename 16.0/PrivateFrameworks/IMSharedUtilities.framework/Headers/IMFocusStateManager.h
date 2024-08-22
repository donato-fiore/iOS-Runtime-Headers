// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMFOCUSSTATEMANAGER_H
#define IMFOCUSSTATEMANAGER_H

@class NSString, NSHashTable, DNDState, DNDStateService;
@protocol DNDStateUpdateListener;

#import <Foundation/Foundation.h>


@interface IMFocusStateManager : NSObject <DNDStateUpdateListener>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DNDState *dndState; // ivar: _dndState
@property (retain, nonatomic) DNDStateService *dndStateService; // ivar: _dndStateService
@property (nonatomic) BOOL focusFilterActionIsEnabled; // ivar: _focusFilterActionIsEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL registeredAsStateUpdateListener; // ivar: _registeredAsStateUpdateListener
@property (readonly, nonatomic) BOOL shouldDisplayFocusFilterBanner;
@property (readonly, nonatomic) BOOL shouldFilterConversationsByFocus;
@property (readonly, nonatomic) BOOL shouldFilterUnreadMessageCount;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userSwitchForFocusFilteringIsEnabled; // ivar: _userSwitchForFocusFilteringIsEnabled


+(BOOL)_conversationWithHandles:(id)arg0 isAllowedInFocusWithExclusiveSenderConfiguration:(id)arg1 ;
+(BOOL)_conversationWithHandles:(id)arg0 isAllowedInFocusWithInclusiveSenderConfiguration:(id)arg1 ;
+(BOOL)_shouldDisplayConversationWithHandles:(id)arg0 withFocusConfiguration:(id)arg1 ;
+(BOOL)focusConfiguration:(id)arg0 matchesConversationWithHandleStrings:(id)arg1 ;
+(BOOL)focusConfiguration:(id)arg0 matchesConversationWithHandles:(id)arg1 ;
+(id)_dndContactHandleForAddress:(id)arg0 ;
+(id)sharedManager;
-(BOOL)activeFocusModeMatchesConversationWithHandleStrings:(id)arg0 ;
-(BOOL)activeFocusModeMatchesConversationWithHandles:(id)arg0 ;
-(BOOL)deviceSupportsFocusFiltering;
-(BOOL)hasActiveFocusMode;
-(id)activeFocusName;
-(id)activeFocusSymbolName;
-(id)init;
-(void)_notifyDelegatesOfDNDStateChange;
-(void)_updateDNDState;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeDelegate:(id)arg0 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;


@end


#endif