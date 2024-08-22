// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKEGROUPRECOGNITIONRESULT_H
#define CHSTROKEGROUPRECOGNITIONRESULT_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHDrawing.h"

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding>

 {
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSDictionary *_languageFitnessByLocale;
    NSArray *_orderedLocales;
}


@property (readonly, copy, nonatomic) NSDictionary *errorsByLocale; // ivar: _errorsByLocale
@property (readonly, retain, nonatomic) CHDrawing *inputDrawing;
@property (readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers; // ivar: _inputStrokeIdentifiers
@property (readonly, copy, nonatomic) NSDictionary *languageFitnessByLocale;
@property (readonly, copy, nonatomic) NSDictionary *recognitionResultsByLocale; // ivar: _recognitionResultsByLocale


+(BOOL)supportsSecureCoding;
+(NSInteger)indexOfFirstLocaleWithLanguage:(id)arg0 orderedLocales:(id)arg1 ;
+(id)filteredLocalesFromGroup:(id)arg0 results:(id)arg1 withCharacterFilterBlock:(id)arg2 ;
+(id)filteredResultsByLocale:(id)arg0 orderedLocales:(id)arg1 usingLanguageFitness:(id)arg2 outSortedLocales:(*id)arg3 ;
+(id)localesByLanguageGroup:(id)arg0 ;
+(id)sortedLanguageGroups:(id)arg0 usingLanguageFitness:(id)arg1 ;
+(id)sortedLocales:(id)arg0 usingLanguageFitness:(id)arg1 useCombinedScore:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStrokeGroupRecognitionResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)highConfidenceTextForSessionResult:(id)arg0 rejectionRate:(*CGFloat)arg1 doesContainUnfilteredMultiLocaleResults:(*BOOL)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrderedLocales:(id)arg0 resultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 ;
-(id)initWithOrderedLocales:(id)arg0 resultsByLocale:(id)arg1 errorsByLocale:(id)arg2 languageFitnessByLocale:(id)arg3 inputStrokeIdentifiers:(id)arg4 inputDrawing:(id)arg5 inputDrawingCutPoints:(id)arg6 ;
-(id)localesSortedByCombinedLanguageFitness:(id)arg0 ;
-(id)localesSortedByRawLanguageFitness:(id)arg0 ;
-(id)preferredLocale;
-(struct ? )languageFitnessForLocale:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif