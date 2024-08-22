// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOSOURCENODE_H
#define AVAUDIOSOURCENODE_H

@class NSString;
@protocol AVAudioMixing;


#import "AVAudioNode.h"

@interface AVAudioSourceNode : AVAudioNode <AVAudioMixing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


+(id)pullInputBlockFromRenderBlock:(SEL)arg0 ;
-(id)initWithFormat:(id)arg0 renderBlock:(id)arg1 ;
-(id)initWithRenderBlock:(id)arg0 ;


@end


#endif