// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSTCALLCLIENT_H
#define SRSTCALLCLIENT_H

@class NSString;
@protocol _SRSTCallClientDelegate, SRSTCallClientDelegate;

#import <Foundation/Foundation.h>

#import "SRSTCallState.h"
#import "_SRSTCallClient.h"

@interface SRSTCallClient : NSObject <_SRSTCallClientDelegate>



@property (readonly, nonatomic) SRSTCallState *currentState;
@property (weak, nonatomic) NSObject<SRSTCallClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *mostRecentEventName;
@property (readonly) _SRSTCallClient *underlyingObject; // ivar: _underlyingObject


-(id)init;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)stateMachineWithClient:(id)arg0 didReceiveEvent:(NSInteger)arg1 ;
-(void)stateMachineWithClient:(id)arg0 didTransitionToState:(id)arg1 ;
-(void)stopClient;


@end


#endif