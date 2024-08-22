// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOENGINE_H
#define AVAUDIOENGINE_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "AVAudioInputNode.h"
#import "AVAudioMixerNode.h"
#import "AVAudioFormat.h"
#import "AVAudioOutputNode.h"

@interface AVAudioEngine : NSObject {
    *void _impl;
}


@property (readonly, copy) NSSet *attachedNodes;
@property (nonatomic, getter=isAutoShutdownEnabled) BOOL autoShutdownEnabled;
@property (readonly, nonatomic) AVAudioInputNode *inputNode;
@property (readonly, nonatomic) BOOL isInManualRenderingMode;
@property (readonly, nonatomic) AVAudioMixerNode *mainMixerNode;
@property (readonly, nonatomic) id *manualRenderingBlock;
@property (readonly, nonatomic) AVAudioFormat *manualRenderingFormat;
@property (readonly, nonatomic) unsigned int manualRenderingMaximumFrameCount;
@property (readonly, nonatomic) NSInteger manualRenderingMode;
@property (readonly, nonatomic) NSInteger manualRenderingSampleTime;
@property (nonatomic) *OpaqueMusicSequence musicSequence;
@property (readonly, nonatomic) AVAudioOutputNode *outputNode;
@property (readonly, nonatomic, getter=isRunning) BOOL running;


-(*void)implementation;
-(BOOL)enableManualRenderingMode:(NSInteger)arg0 format:(id)arg1 maximumFrameCount:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)startAndReturnError:(*id)arg0 ;
-(NSInteger)renderOffline:(unsigned int)arg0 toBuffer:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)init;
-(id)inputConnectionPointForNode:(id)arg0 inputBus:(NSUInteger)arg1 ;
-(id)outputConnectionPointsForNode:(id)arg0 outputBus:(NSUInteger)arg1 ;
-(void)attachNode:(id)arg0 ;
-(void)connect:(id)arg0 to:(id)arg1 format:(id)arg2 ;
-(void)connect:(id)arg0 to:(id)arg1 fromBus:(NSUInteger)arg2 toBus:(NSUInteger)arg3 format:(id)arg4 ;
-(void)connect:(id)arg0 toConnectionPoints:(id)arg1 fromBus:(NSUInteger)arg2 format:(id)arg3 ;
-(void)connectMIDI:(id)arg0 to:(id)arg1 format:(id)arg2 block:(id)arg3 ;
-(void)connectMIDI:(id)arg0 to:(id)arg1 format:(id)arg2 eventListBlock:(id)arg3 ;
-(void)connectMIDI:(id)arg0 toNodes:(id)arg1 format:(id)arg2 block:(id)arg3 ;
-(void)connectMIDI:(id)arg0 toNodes:(id)arg1 format:(id)arg2 eventListBlock:(id)arg3 ;
-(void)dealloc;
-(void)detachNode:(id)arg0 ;
-(void)disableManualRenderingMode;
-(void)disconnectMIDI:(id)arg0 from:(id)arg1 ;
-(void)disconnectMIDI:(id)arg0 fromNodes:(id)arg1 ;
-(void)disconnectMIDIInput:(id)arg0 ;
-(void)disconnectMIDIOutput:(id)arg0 ;
-(void)disconnectNodeInput:(id)arg0 ;
-(void)disconnectNodeInput:(id)arg0 bus:(NSUInteger)arg1 ;
-(void)disconnectNodeOutput:(id)arg0 ;
-(void)disconnectNodeOutput:(id)arg0 bus:(NSUInteger)arg1 ;
-(void)pause;
-(void)prepare;
-(void)reset;
-(void)stop;


@end


#endif