// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKUSEREVENTMONITOR_H
#define STKUSEREVENTMONITOR_H

@class AWAttentionAwarenessConfiguration, AWAttentionAwarenessClient;
@protocol OS_dispatch_queue, STKUserEventMonitorDelegate;

#import <Foundation/Foundation.h>


@interface STKUserEventMonitor : NSObject {
    AWAttentionAwarenessConfiguration *_queue_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
}


@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // ivar: _attentionAwarenessClient
@property (weak, nonatomic) NSObject<STKUserEventMonitorDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


-(id)_initWithAttentionAwarenessClient:(id)arg0 ;
-(id)_queue;
-(id)init;
-(void)_queue_handleAttentionAwarenessEvent:(id)arg0 ;
-(void)_resume;
-(void)_suspend;
-(void)dealloc;
-(void)invalidate;


@end


#endif