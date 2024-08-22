// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCAUDIOSPECTRUMANALYZER_H
#define MPCAUDIOSPECTRUMANALYZER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "MPCAudioSpectrumAnalyzer.h"
#import "_MPCAudioSpectrumAnalyzerStorage.h"

@interface MPCAudioSpectrumAnalyzer : NSObject {
    *opaqueMTAudioProcessingTap _audioProcessingTap;
}


@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) MPCAudioSpectrumAnalyzer *selfRef; // ivar: _selfRef
@property (retain, nonatomic) _MPCAudioSpectrumAnalyzerStorage *storage; // ivar: _storage


-(BOOL)_shouldAttachAudioTap;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_analyzeSamples:(struct AudioBufferList *)arg0 numberFrames:(NSInteger)arg1 ;
-(void)_createAudioTap;
-(void)_destroyAudioTap;
-(void)_itemInsertedNotification:(id)arg0 ;
-(void)_prepareTap:(struct opaqueMTAudioProcessingTap *)arg0 maxFrames:(NSInteger)arg1 processingFormat:(struct AudioStreamBasicDescription *)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)configurePlayerItem:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif