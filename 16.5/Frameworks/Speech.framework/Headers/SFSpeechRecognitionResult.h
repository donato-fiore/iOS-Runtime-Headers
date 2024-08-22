// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSPEECHRECOGNITIONRESULT_H
#define SFSPEECHRECOGNITIONRESULT_H

@class NSArray, NSString;
@protocol SRSampling, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFTranscription.h"
#import "SFSpeechRecognitionMetadata.h"

@interface SFSpeechRecognitionResult : NSObject <SRSampling, NSCopying, NSSecureCoding>

 {
    NSArray *_transcriptions;
    NSArray *_rawTranscriptions;
}


@property (readonly, copy, nonatomic) SFTranscription *bestTranscription; // ivar: _bestTranscription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinal) BOOL final; // ivar: _final
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) SFTranscription *rawTranscription; // ivar: _rawTranscription
@property (readonly, copy, nonatomic) NSArray *rawTranscriptions;
@property (readonly, nonatomic) SFSpeechRecognitionMetadata *speechRecognitionMetadata; // ivar: _speechRecognitionMetadata
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *transcriptions;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithBestTranscription:(id)arg0 rawTranscription:(id)arg1 final:(BOOL)arg2 speechRecognitionMetadata:(id)arg3 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif