// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASUIUSERENGAGEMENTPROVIDERFACTORY_H
#define SASUIUSERENGAGEMENTPROVIDERFACTORY_H


#import <Foundation/Foundation.h>


@interface SASUIUserEngagementProviderFactory : NSObject {
    CGFloat _samplingInterval;
    CGFloat _attentionLossTimeout;
    NSUInteger _supportedAttentionAwarenessEvents;
}




+(id)_attentionAwarenessConfigurationWithIdentifier:(id)arg0 eventMask:(NSUInteger)arg1 samplingInterval:(CGFloat)arg2 attentionLossTimeout:(CGFloat)arg3 ;
-(NSUInteger)_buttonPressAwarenessClientEventMask;
-(NSUInteger)_touchAttentionAwarenessEventMask;
-(NSUInteger)supportedEvents;
-(id)buttonPressAwarenessClient;
-(id)initWithSamplingInterval:(CGFloat)arg0 attentionLostTimeout:(CGFloat)arg1 ;
-(id)touchAttentionAwarenessClient;


@end


#endif