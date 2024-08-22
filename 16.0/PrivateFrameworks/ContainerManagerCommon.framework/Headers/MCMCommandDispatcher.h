// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDDISPATCHER_H
#define MCMCOMMANDDISPATCHER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MCMCommandDispatcher : NSObject

@property (readonly, nonatomic) NSMutableDictionary *messageToCommandClassMap; // ivar: _messageToCommandClassMap


-(Class)_commandClassFromXPCMessage:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)_commandFromCommandClass:(Class)arg0 message:(id)arg1 context:(id)arg2 reply:(id)arg3 error:(*id)arg4 ;
-(id)_messageFromCommandClass:(Class)arg0 xpcMessage:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(void)_ifNeededRelayMessage:(id)arg0 reply:(id)arg1 context:(id)arg2 ;
-(void)dispatchMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)registerCommandClass:(Class)arg0 ;


@end


#endif