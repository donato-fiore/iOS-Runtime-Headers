// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTMULTILINGUALSPEECHRECOGNIZER_H
#define _LTMULTILINGUALSPEECHRECOGNIZER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _LTMultilingualSpeechRecognizer : NSObject {
    NSDictionary *_recognizers;
}




+(void)initialize;
-(id)initWithModelURLs:(id)arg0 modelVersions:(id)arg1 ;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)cancelRecognition;
-(void)endAudio;
-(void)setLanguagesRecognized:(id)arg0 ;
-(void)startRecognitionForLocale:(id)arg0 autoEndpoint:(BOOL)arg1 resultHandler:(id)arg2 ;


@end


#endif