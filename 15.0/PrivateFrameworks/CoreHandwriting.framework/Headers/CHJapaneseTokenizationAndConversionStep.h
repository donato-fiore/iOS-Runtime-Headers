// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHJAPANESETOKENIZATIONANDCONVERSIONSTEP_H
#define CHJAPANESETOKENIZATIONANDCONVERSIONSTEP_H



#import "CHPostprocessingStep.h"
#import "CHRecognizer.h"

@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep

@property (readonly, nonatomic) *void languageModel; // ivar: _languageModel
@property (readonly, nonatomic) *__Mecabra mecabra; // ivar: _mecabra
@property (readonly, nonatomic) *__MecabraContext mecabraContextRef; // ivar: _mecabraContextRef
@property (readonly, nonatomic) BOOL promoteKanaConversion; // ivar: _promoteKanaConversion
@property (readonly, nonatomic) CHRecognizer *recognizer; // ivar: _recognizer


-(id)_extendedConversionCandidates:(id)arg0 withPhraseCandidates:(id)arg1 ;
-(id)_updatedTokenFromToken:(id)arg0 withString:(id)arg1 ;
-(id)initWithMecabra:(struct __Mecabra *)arg0 recognizer:(id)arg1 languageModel:(*void)arg2 promoteKanaConversion:(BOOL)arg3 ;
-(id)process:(id)arg0 ;
-(void)dealloc;


@end


#endif