// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROBRAILLEFORMATTER_H
#define SCROBRAILLEFORMATTER_H

@class NSString, BRLTScriptString, BRLTBrailleStateManager, NSAttributedString;
@protocol BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate, NSCopying;

#import <Foundation/Foundation.h>


@interface SCROBrailleFormatter : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate, NSCopying>



@property (nonatomic) BOOL anyUnread; // ivar: _anyUnread
@property (retain, nonatomic) id *appToken; // ivar: _appToken
@property (nonatomic) BOOL currentUnread; // ivar: _currentUnread
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int displayMode; // ivar: _displayMode
@property (retain, nonatomic) BRLTScriptString *emptyEditingScriptString; // ivar: _emptyEditingScriptString
@property (readonly, nonatomic) NSInteger firstToken; // ivar: _firstToken
@property (readonly, nonatomic) NSUInteger generationID; // ivar: _generationID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int inputContractionMode; // ivar: _inputContractionMode
@property (readonly, nonatomic) BOOL inputShowEightDot; // ivar: _inputShowEightDot
@property (readonly, nonatomic) NSInteger lastToken; // ivar: _lastToken
@property (nonatomic) int lineFocus; // ivar: _lineFocus
@property (nonatomic) NSInteger lineOffset; // ivar: _lineOffset
@property (readonly, nonatomic) int outputContractionMode; // ivar: _outputContractionMode
@property (weak, nonatomic) NSObject<BRLTBrailleStateManagerDelegate> *outputDelegate; // ivar: _outputDelegate
@property (readonly, nonatomic) BOOL outputShowEightDot; // ivar: _outputShowEightDot
@property (readonly, nonatomic) BOOL showDotsSevenAndEight; // ivar: _showDotsSevenAndEight
@property (readonly, nonatomic) BRLTBrailleStateManager *stateManager; // ivar: _stateManager
@property (retain, nonatomic) NSAttributedString *statusText; // ivar: _statusText
@property (readonly) Class superclass;


+(void)resetEditingManager;
-(BOOL)hasPlaceholderText;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deepCopyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOutputContractionMode:(int)arg0 inputContractionMode:(int)arg1 outputShowEightDot:(BOOL)arg2 inputShowEightDot:(BOOL)arg3 showDotsSevenAndEight:(BOOL)arg4 ;
-(id)printBrailleForText:(id)arg0 language:(id)arg1 mode:(NSUInteger)arg2 textPositionsRange:(struct _NSRange )arg3 locations:(*id)arg4 textFormattingRanges:(id)arg5 ;
-(id)textForPrintBraille:(id)arg0 language:(id)arg1 mode:(NSUInteger)arg2 locations:(*id)arg3 ;
-(struct _NSRange )rangeOfBrailleCellRepresentingCharacterAtIndex:(NSUInteger)arg0 ;
-(void)addText:(id)arg0 language:(id)arg1 selection:(struct _NSRange *)arg2 token:(NSInteger)arg3 focus:(struct _NSRange *)arg4 isEditableText:(BOOL)arg5 ;
-(void)addText:(id)arg0 overrideText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(NSInteger)arg4 focus:(struct _NSRange *)arg5 technical:(BOOL)arg6 isEditableText:(BOOL)arg7 ;
-(void)addText:(id)arg0 overrideText:(id)arg1 language:(id)arg2 selection:(struct _NSRange *)arg3 token:(NSInteger)arg4 focus:(struct _NSRange *)arg5 technical:(BOOL)arg6 isEditableText:(BOOL)arg7 paddingRange:(struct _NSRange )arg8 editingString:(id)arg9 textFormattingRanges:(id)arg10 ;
-(void)addText:(id)arg0 selection:(struct _NSRange *)arg1 token:(NSInteger)arg2 focus:(struct _NSRange *)arg3 isEditableText:(BOOL)arg4 ;
-(void)addText:(id)arg0 selection:(struct _NSRange *)arg1 token:(NSInteger)arg2 focus:(struct _NSRange *)arg3 technical:(BOOL)arg4 isEditableText:(BOOL)arg5 ;
-(void)brailleDisplayDeletedCharacter:(id)arg0 ;
-(void)brailleDisplayInsertedCharacter:(id)arg0 modifiers:(id)arg1 ;
-(void)brailleDisplayStringDidChange:(id)arg0 brailleSelection:(struct _NSRange )arg1 modifiers:(id)arg2 ;
-(void)clearPlaceholderForEditing;
-(void)didInsertScriptString:(id)arg0 ;
-(void)replaceScriptStringRange:(struct _NSRange )arg0 withScriptString:(id)arg1 cursorLocation:(NSUInteger)arg2 ;
-(void)scriptSelectionDidChange:(struct _NSRange )arg0 ;
-(void)setBrailleLineOffset:(id)arg0 stringLineOffset:(NSInteger)arg1 ;
-(void)translate;
-(void)translate:(BOOL)arg0 ;


@end


#endif