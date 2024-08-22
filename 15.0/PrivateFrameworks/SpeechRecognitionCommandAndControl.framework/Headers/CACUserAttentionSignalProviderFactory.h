// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACUSERATTENTIONSIGNALPROVIDERFACTORY_H
#define CACUSERATTENTIONSIGNALPROVIDERFACTORY_H


#import <Foundation/Foundation.h>


@interface CACUserAttentionSignalProviderFactory : NSObject {
    CGFloat _samplingInterval;
    CGFloat _attentionLossTimeout;
    NSUInteger _supportedAttentionAwarenessEvents;
}




+(id)_attentionAwarenessConfigurationWithIdentifier:(id)arg0 eventMask:(NSUInteger)arg1 samplingInterval:(CGFloat)arg2 attentionLossTimeout:(CGFloat)arg3 ;
-(NSUInteger)_faceAttentionAwarenessEventMask;
-(NSUInteger)_touchAttentionAwarenessEventMask;
-(id)faceAttentionAwarenessClient;
-(id)initWithSamplingInterval:(CGFloat)arg0 attentionLossTimeout:(CGFloat)arg1 supportedAttentionAwarenessEvents:(NSUInteger)arg2 ;
-(id)touchAttentionAwarenessClient;
-(id)wakeGestureManager;


@end


#endif