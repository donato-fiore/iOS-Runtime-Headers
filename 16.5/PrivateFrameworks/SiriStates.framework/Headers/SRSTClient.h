// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSTCLIENT_H
#define SRSTCLIENT_H

@class NSString;
@protocol _SRSTClientDelegate, SRSTClientDelegate;

#import <Foundation/Foundation.h>

#import "SRSTState.h"
#import "_SRSTClient.h"

@interface SRSTClient : NSObject <_SRSTClientDelegate>



@property (readonly, nonatomic) SRSTState *currentState;
@property (weak, nonatomic) NSObject<SRSTClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *mostRecentEventName;
@property (readonly) _SRSTClient *underlyingObject; // ivar: _underlyingObject


-(id)init;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)stateMachineWithClient:(id)arg0 didReceiveEvent:(NSInteger)arg1 ;
-(void)stateMachineWithClient:(id)arg0 didTransitionToState:(id)arg1 ;
-(void)stopClient;


@end


#endif