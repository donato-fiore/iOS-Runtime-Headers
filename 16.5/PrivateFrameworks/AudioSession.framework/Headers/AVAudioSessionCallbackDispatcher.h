// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOSESSIONCALLBACKDISPATCHER_H
#define AVAUDIOSESSIONCALLBACKDISPATCHER_H

@protocol SessionManagerXPCServerCallbackProtocol;

#import <Foundation/Foundation.h>


@interface AVAudioSessionCallbackDispatcher : NSObject <SessionManagerXPCServerCallbackProtocol>





-(void)IOControllerEvent:(NSUInteger)arg0 sessions:(id)arg1 isDecoupledInput:(BOOL)arg2 ;
-(void)pingClient:(unsigned int)arg0 ;


@end


#endif