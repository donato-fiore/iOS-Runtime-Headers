// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHJAPANESETOKENIZATIONANDCONVERSIONSTEP_H
#define CHJAPANESETOKENIZATIONANDCONVERSIONSTEP_H



#import "CHPostprocessingStep.h"
#import "CHMecabraWrapper.h"
#import "CHStringOVSChecker.h"

@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep

@property (readonly, nonatomic) *__MecabraContext mecabraContextRef; // ivar: _mecabraContextRef
@property (readonly, nonatomic) CHMecabraWrapper *mecabraWrapper; // ivar: _mecabraWrapper
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker; // ivar: _ovsStringChecker
@property (readonly, nonatomic) BOOL promoteKanaConversion; // ivar: _promoteKanaConversion
@property (readonly, nonatomic) *void wordLanguageModel; // ivar: _wordLanguageModel


-(id)_extendedConversionCandidates:(id)arg0 withPhraseCandidates:(id)arg1 ;
-(id)_updatedTokenFromToken:(id)arg0 withString:(id)arg1 ;
-(id)initWithMecabra:(id)arg0 wordLanguageModel:(*void)arg1 ovsStringChecker:(id)arg2 promoteKanaConversion:(BOOL)arg3 ;
-(id)process:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif