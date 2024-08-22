// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACTEXTEDITINGPROVIDER_H
#define CACTEXTEDITINGPROVIDER_H

@class AXElement, NSString, SRCSTextEditing;
@protocol SRCSTextEditingProviderProtocol;

#import <Foundation/Foundation.h>

#import "CACSpokenCommand.h"

@interface CACTextEditingProvider : NSObject <SRCSTextEditingProviderProtocol>

 {
    CACSpokenCommand *_spokenCommand;
    AXElement *_axElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) SRCSTextEditing *textEditingEngine; // ivar: _textEditingEngine


-(BOOL)isNextPreviousResolverSpokenCommandEmojiBased;
-(BOOL)isTextDisambiguationSupported;
-(BOOL)isVisibleTextRange:(struct _NSRange )arg0 ;
-(BOOL)isVisibleTextRect:(struct CGRect )arg0 ;
-(BOOL)marker:(id)arg0 precedesMarker:(id)arg1 ;
-(BOOL)marker:(id)arg0 precedesOrEqualsMarker:(id)arg1 ;
-(BOOL)shouldInsertInterWordSpaces;
-(Class)textMarkerClass;
-(Class)textMarkerRangeClass;
-(NSUInteger)lengthFromMarker:(id)arg0 toMarker:(id)arg1 ;
-(id)_nBestListFromPreviousTextInsertionForAXElement:(id)arg0 ;
-(id)actOnStrings:(id)arg0 ambiguityResolution:(id)arg1 substringSearchGranularity:(int)arg2 alwaysCallActionOnClosestMatch:(BOOL)arg3 options:(id)arg4 actionBlock:(id)arg5 ;
-(id)emojisMatchingTextInStrings:(id)arg0 ;
-(id)firstPositionTextMarker;
-(id)initWithSpokenCommand:(id)arg0 axElement:(id)arg1 ;
-(id)lastPositionTextMarker;
-(id)markerRangeForEnumerationType:(NSInteger)arg0 desiredBlock:(int)arg1 count:(NSUInteger)arg2 options:(int)arg3 ;
-(id)markerRangeForLineAtTextMarker:(id)arg0 ;
-(id)nBestListFromPreviousTextInsertion;
-(id)selectionTextMarkerRange;
-(id)stringForTextMarkerRange:(id)arg0 ;
-(id)textMarkerRangeFromPreviousTextInsertion;
-(int)searchGranularity;
-(int)statusOfEmojisFoundInString:(id)arg0 ;
-(struct CGRect )rectForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )_rangeFromPreviousTextInsertionForAXElement:(id)arg0 ;
-(void)applyFormat;
-(void)deleteText;
-(void)deleteTextAtTextMarkerRange:(id)arg0 ;
-(void)formatSelectionBold;
-(void)formatSelectionItalics;
-(void)formatSelectionUnderline;
-(void)handleCorrectionRequestWithStrings:(id)arg0 ;
-(void)handleErrorIdentifier:(id)arg0 withObjects:(id)arg1 ;
-(void)handleSearchResultsWithRecognizedCommandParameters:(id)arg0 variantOverrides:(id)arg1 ;
-(void)handleTextDisambiguationWithPhraseMatchResults:(id)arg0 actionBlock:(id)arg1 ;
-(void)insertAttributedString:(id)arg0 ;
-(void)insertString:(id)arg0 ;
-(void)performTextCopy;
-(void)performTextCut;
-(void)performTextPaste;
-(void)performTextRedo;
-(void)performTextSelectAll;
-(void)performTextUndo;
-(void)registerInsertedStringCategoryIdentifer:(id)arg0 ;
-(void)setCompletionDeterminedManually:(BOOL)arg0 ;
-(void)setExecuting:(BOOL)arg0 ;
-(void)setSelectionToTextMarkerRange:(id)arg0 ;


@end


#endif