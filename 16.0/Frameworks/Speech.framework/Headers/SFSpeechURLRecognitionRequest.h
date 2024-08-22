// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSPEECHURLRECOGNITIONREQUEST_H
#define SFSPEECHURLRECOGNITIONREQUEST_H

@class NSURL;


#import "SFSpeechRecognitionRequest.h"

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest

@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL


-(id)_startedConnectionWithLanguageCode:(id)arg0 delegate:(id)arg1 taskHint:(NSInteger)arg2 requestIdentifier:(id)arg3 ;
-(id)_startedLocalConnectionWithLanguageCode:(id)arg0 delegate:(id)arg1 taskHint:(NSInteger)arg2 requestIdentifier:(id)arg3 taskIdentifier:(id)arg4 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
// -(void)_handlePreRecordedAudioWithAsset:(id)arg0 audioTracks:(id)arg1 narrowband:(BOOL)arg2 addSpeechDataBlock:(id)arg3 stopSpeechBlock:(unk)arg4 cancelSpeechWithErrorBlock:(id)arg5  ;


@end


#endif