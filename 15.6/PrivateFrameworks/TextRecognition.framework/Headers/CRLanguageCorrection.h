// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRLANGUAGECORRECTION_H
#define CRLANGUAGECORRECTION_H

@class NSCharacterSet, NSString, NSLocale;

#import <Foundation/Foundation.h>

#import "CRCHPatternNetwork.h"

@interface CRLanguageCorrection : NSObject

@property (nonatomic) *void characterLanguageModel; // ivar: _characterLanguageModel
@property (readonly) NSCharacterSet *confusableCharacters;
@property (nonatomic) *_LXLexicon dynamicLexicon; // ivar: _dynamicLexicon
@property (retain, nonatomic) NSString *invalidSingleCharCNNCode; // ivar: _invalidSingleCharCNNCode
@property (readonly) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) CRCHPatternNetwork *patternFST; // ivar: _patternFST
@property (nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon


+(id)supportedLanguagesForRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isLanguageCorrectionSupportedForLanguage:(id)arg0 revision:(NSUInteger)arg1 ;
-(BOOL)preferAllLowercase:(id)arg0 ;
-(BOOL)preferAllUppercase:(id)arg0 ;
-(id)correctTextFeature:(id)arg0 inImage:(id)arg1 withTextPieces:(id)arg2 withMaxWidthPerRegion:(CGFloat)arg3 withMedianCharSpacing:(CGFloat)arg4 withBreakpoints:(*void)arg5 segmenter:(*void)arg6 options:(id)arg7 numCharCandidates:(int)arg8 downscaleSpaceRatio:(BOOL)arg9 latticePresetIdx:(int)arg10 latticeResults:(id)arg11 ;
-(id)findBestPathsForTextResults:(id)arg0 numPathsToExtract:(NSUInteger)arg1 ngramsize:(NSUInteger)arg2 ;
-(id)initWithRevision:(NSUInteger)arg0 localeCode:(id)arg1 customWords:(id)arg2 ;
-(struct _LXLexicon *)newDynamicLexiconForLocale:(id)arg0 error:(*id)arg1 ;
-(void)adjustCaseConfusions:(id)arg0 ;
-(void)dealloc;
-(void)loadCharacterNgramModel:(id)arg0 ;


@end


#endif