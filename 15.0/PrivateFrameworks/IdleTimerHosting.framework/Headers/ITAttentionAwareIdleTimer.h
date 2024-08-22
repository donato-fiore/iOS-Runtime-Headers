// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ITATTENTIONAWAREIDLETIMER_H
#define ITATTENTIONAWAREIDLETIMER_H

@class NSString;
@protocol ITAttentionAwarenessClientDelegate, ITIdleTimerDelegate;

#import <Foundation/Foundation.h>

#import "ITAttentionAwarenessClient.h"
#import "ITIdleTimerDescriptor.h"
#import "ITAttentionAwarenessContext.h"

@interface ITAttentionAwareIdleTimer : NSObject <ITAttentionAwarenessClientDelegate>

 {
    os_unfair_recursive_lock_s _accessLock;
    NSString *_configurationIdentifier;
    ITAttentionAwarenessClient *_access_client;
    ITIdleTimerDescriptor *_access_descriptor;
    ITAttentionAwarenessContext *_access_context;
}


@property (readonly, nonatomic) ITAttentionAwarenessContext *_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<ITIdleTimerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) ITIdleTimerDescriptor *descriptor;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_configurationWithIdentifier:(id)arg0 descriptor:(id)arg1 context:(id)arg2 ;
+(id)_timeoutDictionaryForTimeouts:(id)arg0 ;
-(id)_access_generateConfiguration;
-(id)_initWithConfigurationIdentifier:(id)arg0 delegate:(id)arg1 calloutQueue:(id)arg2 client:(id)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithConfigurationIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)initWithConfigurationIdentifier:(id)arg0 delegate:(id)arg1 calloutQueue:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_access_reconfigureAttentionClientAndReset:(BOOL)arg0 ;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(id)arg1 forContext:(id)arg2 ;
-(void)clientDidReset:(id)arg0 forUserAttentionEvent:(id)arg1 withContext:(id)arg2 ;
-(void)reset;


@end


#endif