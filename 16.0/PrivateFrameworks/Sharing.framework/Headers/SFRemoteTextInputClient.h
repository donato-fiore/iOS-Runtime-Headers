// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFREMOTETEXTINPUTCLIENT_H
#define SFREMOTETEXTINPUTCLIENT_H

@class RTIInputSystemService, RTIInputSystemSourceSession, NSDictionary, NSString;
@protocol RTIInputSystemClientDelegate, RTIInputSystemDelegate, RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFRemoteTextInputClient : NSObject <RTIInputSystemClientDelegate, RTIInputSystemDelegate, RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _paused;
    RTIInputSystemService *_rtiService;
    RTIInputSystemSourceSession *_rtiSourceSession;
}


@property (readonly, copy, nonatomic) NSDictionary *currentPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RTIInputSystemSourceSession *sourceSession;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *textInputDidBegin; // ivar: _textInputDidBegin
@property (copy, nonatomic) id *textInputDidEnd; // ivar: _textInputDidEnd


-(id)init;
-(void)_cleanup;
-(void)_fireEventHandlerWithPayload:(id)arg0 ;
-(void)_handleSessionEvent:(NSInteger)arg0 forSession:(id)arg1 ;
-(void)activate;
-(void)dealloc;
-(void)fireEventHandlerWithPayload:(id)arg0 ;
-(void)flushOperations;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)handleTextInputData:(id)arg0 ;
-(void)handleUsername:(id)arg0 password:(id)arg1 ;
-(void)inputSystemService:(id)arg0 didCreateInputSession:(id)arg1 ;
-(void)inputSystemService:(id)arg0 inputSessionDidBegin:(id)arg1 ;
-(void)inputSystemService:(id)arg0 inputSessionDidDie:(id)arg1 ;
-(void)inputSystemService:(id)arg0 inputSessionDidEnd:(id)arg1 ;
-(void)inputSystemService:(id)arg0 inputSessionDidPause:(id)arg1 withReason:(id)arg2 ;
-(void)inputSystemService:(id)arg0 inputSessionDidUnpause:(id)arg1 withReason:(id)arg2 ;
-(void)inputSystemService:(id)arg0 inputSessionDocumentDidChange:(id)arg1 ;
-(void)invalidate;
-(void)performTextOperations:(id)arg0 ;


@end


#endif