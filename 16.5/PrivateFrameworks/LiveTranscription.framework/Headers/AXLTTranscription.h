// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXLTTRANSCRIPTION_H
#define AXLTTRANSCRIPTION_H

@class NSString, NSArray, SFSpeechRecognitionTask, SFTranscription;

#import <Foundation/Foundation.h>


@interface AXLTTranscription : NSObject

@property (readonly, copy, nonatomic) NSString *formattedString;
@property (retain, nonatomic) NSArray *nonUpdatingSegments; // ivar: _nonUpdatingSegments
@property (readonly, copy, nonatomic) NSArray *segments;
@property (retain, nonatomic) SFSpeechRecognitionTask *task; // ivar: _task
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (retain, nonatomic) SFTranscription *transcription; // ivar: _transcription


-(BOOL)_shouldUseNonUpdatingSegments;
-(id)initWithRecognitionTask:(id)arg0 transcription:(id)arg1 previousTranscription:(id)arg2 ;


@end


#endif