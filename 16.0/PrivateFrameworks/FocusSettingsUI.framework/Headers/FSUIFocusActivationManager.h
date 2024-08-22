// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FSUIFOCUSACTIVATIONMANAGER_H
#define FSUIFOCUSACTIVATIONMANAGER_H

@class DNDModeSelectionService, DNDModeAssertion, NSMutableArray, NSString;
@protocol DNDModeSelectionServiceListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FSUIFocusActivationManager : NSObject <DNDModeSelectionServiceListener>

 {
    DNDModeSelectionService *_modeSelectionService;
    DNDModeAssertion *_latestModeAssertion;
    NSMutableArray *_listeners;
    NSObject<OS_dispatch_queue> *_listenersQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isActiveMode:(id)arg0 ;
-(id)_modeSelectionService;
-(id)init;
-(void)_notifyListenersOfActiveModeAssertionChange:(id)arg0 ;
-(void)addListenerForFocusActivationChanges:(id)arg0 ;
-(void)dealloc;
-(void)modeSelectionService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;
-(void)modeSelectionService:(id)arg0 didReceiveModesUpdate:(id)arg1 ;
-(void)modeSelectionService:(id)arg0 didReceiveUpdatedActiveModeAssertion:(id)arg1 stateUpdate:(id)arg2 ;
-(void)removeListenerForFocusActivationChanges:(id)arg0 ;
-(void)setMode:(id)arg0 isActive:(BOOL)arg1 ;


@end


#endif