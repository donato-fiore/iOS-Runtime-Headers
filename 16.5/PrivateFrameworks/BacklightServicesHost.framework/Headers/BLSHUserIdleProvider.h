// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHUSERIDLEPROVIDER_H
#define BLSHUSERIDLEPROVIDER_H

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSMutableDictionary, NSString;
@protocol BLSHUserIdleProviding, BLSHUserIdleProvidingDelegate;

#import <Foundation/Foundation.h>


@interface BLSHUserIdleProvider : NSObject <BLSHUserIdleProviding>



@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // ivar: _attentionAwarenessClient
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration; // ivar: _attentionAwarenessConfiguration
@property (retain, nonatomic) NSMutableDictionary *attentionLostTimeoutDictionary; // ivar: _attentionLostTimeoutDictionary
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLSHUserIdleProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat idleTimeout; // ivar: _idleTimeout
@property (nonatomic) BOOL shouldNotifyOfUnidle; // ivar: _shouldNotifyOfUnidle
@property (nonatomic) BOOL shouldNotifyOfUnidleChanged; // ivar: _shouldNotifyOfUnidleChanged
@property (readonly) Class superclass;


-(id)init;
-(void)_invalidate;
-(void)_pause;
-(void)_reset;
-(void)_resume;
-(void)invalidate;
-(void)pause;
-(void)reset;
-(void)resume;


@end


#endif