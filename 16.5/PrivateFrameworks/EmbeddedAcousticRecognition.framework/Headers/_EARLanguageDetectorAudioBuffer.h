// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARLANGUAGEDETECTORAUDIOBUFFER_H
#define _EARLANGUAGEDETECTORAUDIOBUFFER_H


#import <Foundation/Foundation.h>


@interface _EARLanguageDetectorAudioBuffer : NSObject {
    shared_ptr<quasar::RecogAudioBuffer> _buffer;
}




-(id)_initWithAudioBuffer:(*void)arg0 ;
-(void)addAudioSampleData:(id)arg0 ;
-(void)addAudioSamples:(*short)arg0 count:(NSUInteger)arg1 ;
-(void)endAudio;


@end


#endif