// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ITATTENTIONAWARENESSCLIENT_H
#define ITATTENTIONAWARENESSCLIENT_H

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol ITAttentionAwarenessClientDelegate;

#import <Foundation/Foundation.h>


@interface ITAttentionAwarenessClient : NSObject {
    os_unfair_lock_s _accessLock;
}


@property (retain, nonatomic) AWAttentionAwarenessClient *_access_attentionAwarenessClient; // ivar: _access_attentionAwarenessClient
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (weak, nonatomic) NSObject<ITAttentionAwarenessClientDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _access_enabled


-(id)_initWithCalloutQueue:(id)arg0 attentionAwarenessClient:(id)arg1 ;
-(id)init;
-(id)initWithCalloutQueue:(id)arg0 ;
-(void)_access_resume;
-(void)_access_suspend;
-(void)_handleAttentionAwarenessEvent:(id)arg0 ;


@end


#endif