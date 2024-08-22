// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUICOMPACTVIEWMODEL_H
#define SIRISHAREDUICOMPACTVIEWMODEL_H

@class NSArray, SRUIFSpeechRecognitionHypothesis;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriSharedUICompactViewModel : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *conversationTranscriptItems; // ivar: _conversationTranscriptItems
@property (readonly, nonatomic) NSInteger inputType; // ivar: _inputType
@property (readonly, copy, nonatomic) NSArray *resultTranscriptItems; // ivar: _resultTranscriptItems
@property (readonly, copy, nonatomic) NSArray *serverUtterances; // ivar: _serverUtterances
@property (readonly, copy, nonatomic) SRUIFSpeechRecognitionHypothesis *speechRecognitionHypothesis; // ivar: _speechRecognitionHypothesis


-(id)copyWithConversationTranscriptItems:(id)arg0 serverUtterances:(id)arg1 speechRecognitionHypothesis:(id)arg2 ;
-(id)copyWithInputType:(NSInteger)arg0 ;
-(id)copyWithInputType:(NSInteger)arg0 resultTranscriptItems:(id)arg1 conversationTranscriptItems:(id)arg2 serverUtterances:(id)arg3 speechRecognitionHypothesis:(id)arg4 ;
-(id)copyWithResultTranscriptItems:(id)arg0 ;
-(id)copyWithResultTranscriptItems:(id)arg0 conversationTranscriptItems:(id)arg1 serverUtterances:(id)arg2 speechRecognitionHypothesis:(id)arg3 ;
-(id)copyWithServerUtterances:(id)arg0 speechRecognitionHypothesis:(id)arg1 ;
-(id)copyWithSpeechRecognitionHypothesis:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithInputType:(NSInteger)arg0 resultTranscriptItems:(id)arg1 conversationTranscriptItems:(id)arg2 serverUtterances:(id)arg3 speechRecognitionHypothesis:(id)arg4 ;
-(id)initWithInputType:(NSInteger)arg0 speechRecognitionHypothesis:(id)arg1 ;


@end


#endif