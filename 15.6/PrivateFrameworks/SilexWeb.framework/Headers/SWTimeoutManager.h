// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWTIMEOUTMANAGER_H
#define SWTIMEOUTMANAGER_H

@class NSString, NFStateMachine, NSMutableArray, NSTimer;
@protocol SWMessageHandler, SWTimeoutManager;

#import <Foundation/Foundation.h>


@interface SWTimeoutManager : NSObject <SWMessageHandler, SWTimeoutManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *timeoutBlocks; // ivar: _timeoutBlocks
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(id)initWithTimeout:(CGFloat)arg0 messageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 ;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;
-(void)onTimeout:(id)arg0 ;


@end


#endif