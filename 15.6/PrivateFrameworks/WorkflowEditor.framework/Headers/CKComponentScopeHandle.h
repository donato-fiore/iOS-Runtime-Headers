// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTSCOPEHANDLE_H
#define CKCOMPONENTSCOPEHANDLE_H

@protocol CKComponentStateListener;

#import <Foundation/Foundation.h>

#import "CKComponentController.h"
#import "CKComponent.h"

@interface CKComponentScopeHandle : NSObject {
    id<CKComponentStateListener> *_listener;
    CKComponentController *_controller;
    int _rootIdentifier;
    BOOL _acquired;
    BOOL _resolved;
    CKComponent *_acquiredComponent;
}


@property (readonly, nonatomic) Class componentClass; // ivar: _componentClass
@property (readonly, nonatomic) CKComponentController *controller;
@property (readonly, nonatomic) int globalIdentifier; // ivar: _globalIdentifier
@property (readonly, nonatomic) id *state; // ivar: _state


+(id)handleForComponent:(id)arg0 ;
-(BOOL)acquireFromComponent:(id)arg0 ;
-(id)initWithListener:(id)arg0 globalIdentifier:(int)arg1 rootIdentifier:(int)arg2 componentClass:(Class)arg3 state:(id)arg4 controller:(id)arg5 ;
-(id)initWithListener:(id)arg0 rootIdentifier:(int)arg1 componentClass:(Class)arg2 initialStateCreator:(id)arg3 ;
-(id)newHandleToBeReacquiredDueToScopeCollision;
-(id)newHandleWithStateUpdates:(*void)arg0 componentScopeRoot:(id)arg1 ;
-(id)responder;
-(void)dealloc;
-(void)resolve;
// -(void)updateState:(id)arg0 mode:(unk)arg1  ;


@end


#endif