// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLATTENTIONAWARENESSEFFECTAUDIOTAPCONTEXT_H
#define TLATTENTIONAWARENESSEFFECTAUDIOTAPCONTEXT_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "TLAttentionAwarenessEffectCoordinator.h"
#import "TLAttentionAwarenessEffectProcessor.h"

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject

@property (retain, nonatomic) TLAttentionAwarenessEffectCoordinator *effectCoordinator; // ivar: _effectCoordinator
@property (retain, nonatomic) TLAttentionAwarenessEffectProcessor *effectProcessor; // ivar: _effectProcessor
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;


@end


#endif