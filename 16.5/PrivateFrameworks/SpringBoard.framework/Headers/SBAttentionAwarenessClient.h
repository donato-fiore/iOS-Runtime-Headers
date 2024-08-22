// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBATTENTIONAWARENESSCLIENT_H
#define SBATTENTIONAWARENESSCLIENT_H

@class AWAttentionAwarenessConfiguration, AWAttentionAwarenessClient, NSString;
@protocol BSInvalidatable, OS_dispatch_queue, SBAttentionAwarenessClientDelegate;

#import <Foundation/Foundation.h>


@interface SBAttentionAwarenessClient : NSObject <BSInvalidatable>

 {
    AWAttentionAwarenessConfiguration *_queue_configuration;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
}


@property (retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAttentionAwarenessClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_handleAttentionAwarenessEvent:(id)arg0 ;
-(void)_resetAttentionLostTimeout;
-(void)_resume;
-(void)_suspend;
-(void)invalidate;
-(void)resetAttentionLostTimeout;


@end


#endif