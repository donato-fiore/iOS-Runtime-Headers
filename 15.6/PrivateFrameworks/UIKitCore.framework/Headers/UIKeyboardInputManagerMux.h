// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDINPUTMANAGERMUX_H
#define UIKEYBOARDINPUTMANAGERMUX_H

@class NSMutableArray;
@protocol _UIIVCResponseDelegateImpl, TIKeyboardInputManager;

#import <Foundation/Foundation.h>


@interface UIKeyboardInputManagerMux : NSObject {
    NSMutableArray *_clients;
}


@property (readonly, nonatomic) BOOL hasSystemInputManager;
@property (retain, nonatomic) NSObject<_UIIVCResponseDelegateImpl> *responseDelegate; // ivar: _responseDelegate
@property (retain, nonatomic) NSObject<TIKeyboardInputManager> *systemInputManager; // ivar: _systemInputManager


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)sharedInstance;
-(BOOL)_systemHasKbd;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)releaseConnectedClients;
-(void)removeAllClients;
-(void)removeClient:(id)arg0 ;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg0 ;


@end


#endif