// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISTREAMINGCANDIDATEHANDLER_H
#define TISTREAMINGCANDIDATEHANDLER_H

@class TIKeyboardState, TICandidateRequestToken;
@protocol TICandidateHandler, TIClientProxy, TIKeyboardInputManagerLogging;

#import <Foundation/Foundation.h>

#import "TIKeyboardInputManagerBase.h"

@interface TIStreamingCandidateHandler : NSObject <TICandidateHandler>

 {
    NSUInteger _status;
    BOOL _didCallHandler;
    TIKeyboardInputManagerBase *_inputManager;
}


@property (readonly, nonatomic) BOOL asynchronous;
@property (readonly, copy, nonatomic) id *candidateHandler; // ivar: _candidateHandler
@property (readonly, nonatomic) NSObject<TIClientProxy> *clientProxy; // ivar: _clientProxy
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (weak, nonatomic) NSObject<TIKeyboardInputManagerLogging> *logger; // ivar: _logger
@property (readonly, nonatomic) TICandidateRequestToken *requestToken; // ivar: _requestToken


-(id)initWithClientProxy:(id)arg0 keyboardState:(id)arg1 requestToken:(id)arg2 logger:(id)arg3 inputManager:(id)arg4 candidateHandler:(id)arg5 ;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)pushCandidates:(id)arg0 ;


@end


#endif