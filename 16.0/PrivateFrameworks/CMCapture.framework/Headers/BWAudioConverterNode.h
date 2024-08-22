// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWAUDIOCONVERTERNODE_H
#define BWAUDIOCONVERTERNODE_H

@class NSDictionary;


#import "BWNode.h"

@interface BWAudioConverterNode : BWNode {
    NSDictionary *_settings;
    *OpaqueFigSampleBufferProcessor _audioCompressionSBP;
}


@property (readonly, nonatomic) NSDictionary *gaplessPlaybackInfo;


+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(id)settings;
-(void)acquireHardware;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)relinquishHardware;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setSettings:(id)arg0 ;


@end


#endif