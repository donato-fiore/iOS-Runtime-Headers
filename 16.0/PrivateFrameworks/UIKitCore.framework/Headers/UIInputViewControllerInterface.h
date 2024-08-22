// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWCONTROLLERINTERFACE_H
#define UIINPUTVIEWCONTROLLERINTERFACE_H

@class TIKeyboardInputManagerStub, NSString;
@protocol _UIIVCInterface, _UIIVCResponseDelegate;


#import "_UIInputViewControllerState.h"

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface>



@property (retain, nonatomic, getter=_cachedState, setter=_setCachedState:) _UIInputViewControllerState *cachedState; // ivar: _cachedState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<_UIIVCInterface> *forwardingInterface; // ivar: _forwardingInterface
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_UIIVCResponseDelegate> *responseDelegate; // ivar: _responseDelegate
@property (readonly) Class superclass;


-(id)init;
-(void)_handleInputViewControllerState:(id)arg0 ;
-(void)_tearDownRemoteService;
-(void)dealloc;
-(void)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif