// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSPEECHPACKAGE_H
#define AFSPEECHPACKAGE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFSpeechAudioAnalytics.h"
#import "AFSpeechLatticeMitigatorResult.h"
#import "AFSpeechRecognition.h"

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) AFSpeechAudioAnalytics *audioAnalytics; // ivar: _audioAnalytics
@property (readonly, nonatomic) BOOL isFinal; // ivar: _isFinal
@property (readonly, nonatomic) AFSpeechLatticeMitigatorResult *latticeMitigatorResult; // ivar: _latticeMitigatorResult
@property (readonly, nonatomic) AFSpeechRecognition *rawRecognition; // ivar: _rawRecognition
@property (readonly, nonatomic) AFSpeechRecognition *recognition; // ivar: _recognition
@property (readonly, nonatomic) BOOL recognitionPaused; // ivar: _recognitionPaused
@property (readonly, nonatomic) NSInteger resultCandidateId; // ivar: _resultCandidateId
@property (readonly, nonatomic) BOOL speechProfileUsed; // ivar: _speechProfileUsed
@property (readonly, nonatomic) AFSpeechRecognition *unfilteredRecognition; // ivar: _unfilteredRecognition
@property (readonly, nonatomic) CGFloat utteranceStart; // ivar: _utteranceStart


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecognition:(id)arg0 rawRecognition:(id)arg1 audioAnalytics:(id)arg2 isFinal:(BOOL)arg3 utteranceStart:(CGFloat)arg4 ;
-(id)initWithRecognition:(id)arg0 rawRecognition:(id)arg1 audioAnalytics:(id)arg2 isFinal:(BOOL)arg3 utteranceStart:(CGFloat)arg4 latticeMitigatorResult:(id)arg5 ;
-(id)initWithRecognition:(id)arg0 unfilteredRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4 utteranceStart:(CGFloat)arg5 ;
-(id)initWithRecognition:(id)arg0 unfilteredRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4 utteranceStart:(CGFloat)arg5 latticeMitigatorResult:(id)arg6 ;
-(id)initWithRecognition:(id)arg0 unfilteredRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4 utteranceStart:(CGFloat)arg5 latticeMitigatorResult:(id)arg6 recognitionPaused:(BOOL)arg7 ;
-(id)initWithRecognition:(id)arg0 unfilteredRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4 utteranceStart:(CGFloat)arg5 latticeMitigatorResult:(id)arg6 recognitionPaused:(BOOL)arg7 speechProfileUsed:(BOOL)arg8 ;
-(id)initWithRecognition:(id)arg0 unfilteredRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(BOOL)arg4 utteranceStart:(CGFloat)arg5 latticeMitigatorResult:(id)arg6 recognitionPaused:(BOOL)arg7 speechProfileUsed:(BOOL)arg8 resultCandidateId:(NSInteger)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif