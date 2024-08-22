// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSSPEECHREQUEST_H
#define TTSSPEECHREQUEST_H

@class NSAttributedString, NSArray, NSString, NSMutableArray, NSURL;
@protocol NSSecureCoding, TTSSpeechRequestDelegate;

#import <Foundation/Foundation.h>

#import "TTSSpeechChannel.h"

@interface TTSSpeechRequest : NSObject <NSSecureCoding>

 {
    id<TTSSpeechRequestDelegate> *_delegate;
}


@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (copy, nonatomic) id *audioBufferCallback; // ivar: _audioBufferCallback
@property (nonatomic) unsigned int audioQueueFlags; // ivar: _audioQueueFlags
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) BOOL audioSessionIDIsValid; // ivar: _audioSessionIDIsValid
@property (retain, nonatomic) NSArray *channels; // ivar: _channels
@property (nonatomic) *void clientContext; // ivar: _clientContext
@property (nonatomic) CGFloat dispatchTime; // ivar: _dispatchTime
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (nonatomic) CGFloat handledTime; // ivar: _handledTime
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) CGFloat latency; // ivar: _latency
@property (nonatomic) BOOL maintainsInput; // ivar: _maintainsInput
@property (retain, nonatomic) NSString *originalString; // ivar: _originalString
@property (retain, nonatomic) NSMutableArray *originalWordRanges; // ivar: _originalWordRanges
@property (copy, nonatomic) NSURL *outputPath; // ivar: _outputPath
@property (nonatomic) CGFloat pitch; // ivar: _pitch
@property (retain, nonatomic) NSMutableArray *processedWordRanges; // ivar: _processedWordRanges
@property (nonatomic) CGFloat rate; // ivar: _rate
@property (retain, nonatomic) NSMutableArray *replacedWords; // ivar: _replacedWords
@property (nonatomic) BOOL skipLuthorRules; // ivar: _skipLuthorRules
@property (retain, nonatomic) TTSSpeechChannel *speechChannel; // ivar: _speechChannel
@property (nonatomic) BOOL supportsAccurateWordCallbacks; // ivar: _supportsAccurateWordCallbacks
@property (nonatomic) BOOL synthesizeSilently; // ivar: _synthesizeSilently
@property (nonatomic) NSUInteger synthesizerInstanceID; // ivar: _synthesizerInstanceID
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) BOOL useMonarchStyleRate; // ivar: _useMonarchStyleRate
@property (nonatomic) CGFloat volume; // ivar: _volume
@property (nonatomic) NSInteger wordRangeCallbacksDispatched; // ivar: _wordRangeCallbacksDispatched


+(BOOL)supportsSecureCoding;
-(NSInteger)vocalizerFootprint;
-(NSInteger)vocalizerGender;
-(id)delegate;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpeechChannel:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)speechRequestDidContinueForService:(id)arg0 ;
-(void)speechRequestDidPauseForService:(id)arg0 ;
-(void)speechRequestDidStartForService:(id)arg0 ;
-(void)speechRequestDidStopWithSuccess:(BOOL)arg0 phonemesSpoken:(id)arg1 forService:(id)arg2 error:(id)arg3 ;
-(void)speechRequestDidSynthesizeSilentlyToURL:(id)arg0 forService:(id)arg1 ;
-(void)speechRequestMark:(NSInteger)arg0 didStartForRange:(struct _NSRange )arg1 forService:(id)arg2 ;


@end


#endif