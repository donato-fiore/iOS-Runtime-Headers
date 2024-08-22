// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTWRAPPEDPHRASEPROCESSOR_H
#define MTWRAPPEDPHRASEPROCESSOR_H

@class AVAudioFormat;
@protocol MacinTalkPhraseProcessorDelegate;

#import <Foundation/Foundation.h>

#import "MTFrontendSimple.h"
#import "MTFVoice.h"

@interface MTWrappedPhraseProcessor : NSObject

@property NSInteger currentSampleCount; // ivar: _currentSampleCount
@property (weak, nonatomic) NSObject<MacinTalkPhraseProcessorDelegate> *delegate; // ivar: _delegate
@property *MTBEPersistentParam fPParams; // ivar: _fPParams
@property (retain, nonatomic) AVAudioFormat *format; // ivar: _format
@property (retain, nonatomic) MTFrontendSimple *frontend; // ivar: _frontend
@property *MTBENotifier notifier; // ivar: _notifier
@property *void processor; // ivar: _processor
@property *MTBENotifier resetState; // ivar: _resetState
@property *MTBENotifier saveState; // ivar: _saveState
@property (weak, nonatomic) MTFVoice *voice; // ivar: _voice


-(BOOL)processNextPhrase;
-(id)initWithVoice:(id)arg0 frontend:(id)arg1 ;
-(id)nextBuffer;
-(void)dealloc;
-(void)finishedSampleGeneration;
-(void)generatedSampleForPhoneme:(short)arg0 ;
-(void)generatedSampleForSync:(unsigned int)arg0 ;
-(void)generatedSampleForWord:(NSUInteger)arg0 length:(unsigned short)arg1 ;


@end


#endif