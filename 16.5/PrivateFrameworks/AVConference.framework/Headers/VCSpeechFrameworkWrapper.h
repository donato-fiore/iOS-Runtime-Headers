// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSPEECHFRAMEWORKWRAPPER_H
#define VCSPEECHFRAMEWORKWRAPPER_H


#import <Foundation/Foundation.h>


@interface VCSpeechFrameworkWrapper : NSObject

@property (readonly, nonatomic) BOOL frameworkLoaded; // ivar: _isFrameworkLoaded


+(id)defaultSpeechFrameworkWrapper;
-(BOOL)loadSpeechFramework;
-(id)findSpeechFrameworkPath;
-(id)init;
-(id)newSFSpeechAudioBufferRecognitionRequest;
-(id)newSFSpeechRecognizerWithLocale:(id)arg0 ;
-(id)supportedLocales;


@end


#endif