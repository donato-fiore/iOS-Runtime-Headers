// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKATTENTIONAWAREIDLETIMERCLIENT_H
#define LKATTENTIONAWAREIDLETIMERCLIENT_H

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol LKAttentionAwareIdleTimerDelegate;

#import <Foundation/Foundation.h>


@interface LKAttentionAwareIdleTimerClient : NSObject

@property (retain, nonatomic) AWAttentionAwarenessClient *AWClient; // ivar: _AWClient
@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (weak, nonatomic) NSObject<LKAttentionAwareIdleTimerDelegate> *clientDelegate; // ivar: _clientDelegate
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *config; // ivar: _config
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithClientDelegate:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)pause;
-(void)resume;


@end


#endif