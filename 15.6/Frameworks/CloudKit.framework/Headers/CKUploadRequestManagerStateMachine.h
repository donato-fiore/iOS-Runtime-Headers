// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKUPLOADREQUESTMANAGERSTATEMACHINE_H
#define CKUPLOADREQUESTMANAGERSTATEMACHINE_H

@class CUStateEvent, CUStateMachine;

#import <Foundation/Foundation.h>


@interface CKUploadRequestManagerStateMachine : NSObject

@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (copy, nonatomic) id *enterStateHandler; // ivar: _enterStateHandler
@property (retain, nonatomic) CUStateEvent *eventCausingTransition; // ivar: _eventCausingTransition
@property (copy, nonatomic) id *exitStateHandler; // ivar: _exitStateHandler
@property (copy, nonatomic) id *internalActionHandler; // ivar: _internalActionHandler
@property (retain, nonatomic) CUStateMachine *stateMachine; // ivar: _stateMachine


+(id)nameFromFunction:(NSInteger)arg0 ;
+(id)nameFromResponseAction:(NSInteger)arg0 ;
+(id)nameFromState:(NSInteger)arg0 ;
+(id)nameFromStateEvent:(NSInteger)arg0 ;
-(BOOL)canPerformFunction:(NSInteger)arg0 ;
-(id)createStateMachine;
// -(id)eventHandlerForState:(SEL)arg0 withEnterBlock:(id)arg1 exitBlock:(id)arg2 eventBlock:(unk)arg3  ;
-(id)initWithActionHandler:(id)arg0 ;
-(void)dealloc;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)dispatchEvent:(NSInteger)arg0 userInfo:(id)arg1 ;
-(void)start;
-(void)transitionToState:(id)arg0 withEvent:(id)arg1 ;


@end


#endif