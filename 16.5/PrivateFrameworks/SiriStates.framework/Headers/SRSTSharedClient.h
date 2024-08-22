// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSTSHAREDCLIENT_H
#define SRSTSHAREDCLIENT_H

@class NSString;
@protocol _SRSTSharedClientDelegate, SRSTSharedClientDelegate;

#import <Foundation/Foundation.h>

#import "SRSTSharedState.h"
#import "_SRSTSharedClient.h"

@interface SRSTSharedClient : NSObject <_SRSTSharedClientDelegate>



@property (readonly, nonatomic) SRSTSharedState *currentState;
@property (weak, nonatomic) NSObject<SRSTSharedClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *mostRecentEventName;
@property (readonly) _SRSTSharedClient *underlyingObject; // ivar: _underlyingObject


-(id)init;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)stateMachineWithClient:(id)arg0 didReceiveEvent:(NSInteger)arg1 ;
-(void)stateMachineWithClient:(id)arg0 didTransitionToState:(id)arg1 ;
-(void)stopClient;


@end


#endif