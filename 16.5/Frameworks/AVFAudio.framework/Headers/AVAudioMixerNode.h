// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOMIXERNODE_H
#define AVAUDIOMIXERNODE_H

@class NSString;
@protocol AVAudioMixing;


#import "AVAudioNode.h"

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger nextAvailableInputBus;
@property (nonatomic) float outputVolume;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(id)init;
-(void)didAttachToEngine:(id)arg0 ;
-(void)inputConnected:(NSUInteger)arg0 ;
-(void)setInputPan:(float)arg0 bus:(NSUInteger)arg1 ;
-(void)setInputVolume:(float)arg0 bus:(NSUInteger)arg1 ;


@end


#endif