// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOMIXINGDESTINATION_H
#define AVAUDIOMIXINGDESTINATION_H

@class NSString;
@protocol AVAudioMixing;

#import <Foundation/Foundation.h>

#import "AVAudioConnectionPoint.h"

@interface AVAudioMixingDestination : NSObject <AVAudioMixing>

 {
    *void _impl;
}


@property (readonly, nonatomic) AVAudioConnectionPoint *connectionPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(?)implementation;
-(NSInteger)pointSourceInHeadMode;
-(NSInteger)renderingAlgorithm;
-(NSInteger)sourceMode;
-(float)obstruction;
-(float)occlusion;
-(float)pan;
-(float)rate;
-(float)reverbBlend;
-(id)destinationForMixer:(id)arg0 bus:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithImpl:(struct AVAudioMixingImpl *)arg0 ;
-(struct AVAudio3DPoint )position;
-(void)dealloc;
-(void)setObstruction:(float)arg0 ;
-(void)setOcclusion:(float)arg0 ;
-(void)setPan:(float)arg0 ;
-(void)setPointSourceInHeadMode:(NSInteger)arg0 ;
-(void)setPosition:(struct AVAudio3DPoint )arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setRenderingAlgorithm:(NSInteger)arg0 ;
-(void)setReverbBlend:(float)arg0 ;
-(void)setSourceMode:(NSInteger)arg0 ;


@end


#endif