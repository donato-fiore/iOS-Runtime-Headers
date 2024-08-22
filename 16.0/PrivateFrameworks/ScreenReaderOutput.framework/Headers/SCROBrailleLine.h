// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROBRAILLELINE_H
#define SCROBRAILLELINE_H

@class NSData, NSMutableAttributedString, BRLTBrailleStateManager, NSString, NSAttributedString, NSMutableArray;
@protocol BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate, SCROBrailleDriverProtocol;

#import <Foundation/Foundation.h>

#import "SCROBrailleLineVirtualStatus.h"
#import "SCROBrailleFormatter.h"

@interface SCROBrailleLine : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate>

 {
    id<SCROBrailleDriverProtocol> *_brailleDriver;
    NSInteger _size;
    NSInteger _statusSize;
    NSInteger _insetSize;
    NSInteger _previousLineOffset;
    NSInteger _leftInset;
    NSInteger _rightInset;
    NSInteger _masterStatusCellIndex;
    NSInteger _iBeamLocation;
    NSInteger _focusLocation;
    _NSRange _focusRange;
    _NSRange _selectionRange;
    int _displayMode;
    int _lineFocus;
    BOOL _needsStatusFlush;
    BOOL _needsFocusFlush;
    BOOL _blink;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _isPanning;
    BOOL _showDotsSevenAndEight;
    BOOL _brailleChunksAreDirty;
    char * _displayBuffer;
    char * _mainCellsBuffer;
    char * _displayFilter;
    char * _blinkerBuffer;
    char * _statusFilter;
    NSData *_statusData;
    NSMutableAttributedString *_lineBuffer;
    id *_appToken;
    NSInteger _firstToken;
    NSInteger _previousFirstToken;
    NSInteger _lastToken;
    NSInteger _previousLastToken;
    SCROBrailleLineVirtualStatus *_virtualStatus;
    BRLTBrailleStateManager *_stateManager;
    SCROBrailleFormatter *_brailleFormatter;
    BOOL _supportsCanvas;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayEnabled; // ivar: _displayEnabled
@property (nonatomic) BOOL editableFieldInterruptedByAlert; // ivar: _editableFieldInterruptedByAlert
@property (readonly, nonatomic) NSAttributedString *editingString;
@property (nonatomic) NSUInteger generationID; // ivar: _generationID
@property (readonly, nonatomic) BOOL hasEdits;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) BOOL isSingleLetterInputOn; // ivar: _isSingleLetterInputOn
@property (nonatomic) BOOL isTextSearchModeOn; // ivar: _isTextSearchModeOn
@property (nonatomic) NSInteger lineOffset; // ivar: _lineOffset
@property (readonly, nonatomic) BOOL needsDisplayFlush; // ivar: _needsDisplayFlush
@property (nonatomic) BOOL panWithTextCursorEnabled; // ivar: _panWithTextCursorEnabled
@property (retain, nonatomic) NSMutableArray *pendingBrailleStringDictionaries; // ivar: _pendingBrailleStringDictionaries
@property (readonly, nonatomic) BRLTBrailleStateManager *stateManager;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<BRLTBrailleStateManagerDelegate> *translationDelegate; // ivar: _translationDelegate
@property (readonly, nonatomic) BOOL wantsEdits;
@property (nonatomic) BOOL wordWrapEnabled; // ivar: _wordWrapEnabled


+(void)initialize;
-(BOOL)_allowInset;
-(BOOL)_blink:(BOOL)arg0 ;
-(BOOL)_deleteAtCursorSilently:(BOOL)arg0 ;
-(BOOL)_forwardDeleteAtCursorSilently:(BOOL)arg0 ;
-(BOOL)_insertBrailleStringAtCursor:(id)arg0 modifiers:(id)arg1 silently:(BOOL)arg2 ;
-(BOOL)_setMainCells:(char *)arg0 length:(NSInteger)arg1 ;
-(BOOL)anyUnread;
-(BOOL)canPanLeft;
-(BOOL)canPanRight;
-(BOOL)currentUnread;
-(BOOL)deleteAtCursor;
-(BOOL)display;
-(BOOL)forwardDeleteAtCursor;
-(BOOL)getStatusRouterIndex:(*NSInteger)arg0 forRawIndex:(NSInteger)arg1 ;
-(BOOL)insertBrailleStringAtCursor:(id)arg0 modifiers:(id)arg1 ;
-(BOOL)moveCursorLeft;
-(BOOL)moveCursorRight;
-(BOOL)moveCursorToRouterIndex:(NSUInteger)arg0 forwardToScreenReader:(*BOOL)arg1 updateRouterLocation:(*NSInteger)arg2 ;
-(BOOL)panLeft;
-(BOOL)panRight;
-(BOOL)showDotsSevenAndEight;
-(NSInteger)_indexOfWhitespaceAfterIBeam:(NSInteger)arg0 inLine:(id)arg1 ;
-(NSInteger)_indexOfWhitespaceBeforeIBeam:(NSInteger)arg0 inLine:(id)arg1 ;
-(NSInteger)firstToken;
-(NSInteger)lastToken;
-(NSInteger)masterStatusCellIndex;
-(NSInteger)tokenForRouterIndex:(*NSInteger)arg0 location:(*NSInteger)arg1 appToken:(*id)arg2 ;
-(NSUInteger)bufferIndexForRouterIndex:(NSUInteger)arg0 ;
-(id)_dotDescriptionForBrailleString:(id)arg0 ;
-(id)_spokenStringForBrailleString:(id)arg0 isDelete:(BOOL)arg1 speakLiterally:(*BOOL)arg2 ;
-(id)_translatedTextForPrefixBraille:(id)arg0 printBraille:(id)arg1 translationMode:(NSUInteger)arg2 ;
-(id)_translatedTextInIsolationForBraille:(id)arg0 translationMode:(NSUInteger)arg1 ;
-(id)_trimCommonPrefixWithString:(id)arg0 fromString:(id)arg1 ;
-(id)appToken;
-(id)imageCanvas;
-(id)initWithDriver:(id)arg0 mainSize:(NSInteger)arg1 statusSize:(NSInteger)arg2 ;
-(id)newLineDescriptor;
-(id)newLineDescriptorWithoutPadding;
-(id)printBrailleForText:(id)arg0 language:(id)arg1 mode:(NSUInteger)arg2 textPositionsRange:(struct _NSRange )arg3 locations:(*id)arg4 ;
-(id)spokenStringForDeletedBrailleString:(id)arg0 speakLiterally:(*BOOL)arg1 ;
-(id)spokenStringForInsertedBrailleString:(id)arg0 speakLiterally:(*BOOL)arg1 ;
-(id)textForPrintBraille:(id)arg0 language:(id)arg1 mode:(NSUInteger)arg2 locations:(*id)arg3 ;
-(id)translatedBrailleForTableIdentifier:(id)arg0 ;
-(int)displayMode;
-(int)lineFocus;
-(struct _NSRange )textRangeForBrailleRange:(struct _NSRange )arg0 ;
-(void)_flush;
-(void)_flushRealStatus;
-(void)_updateOffsets;
-(void)addAttributedPaddingToLineBuffer:(id)arg0 ;
-(void)addAttributedStringToLineBuffer:(id)arg0 brailleOffset:(NSUInteger)arg1 ;
-(void)blinker;
-(void)brailleDisplayDeletedCharacter:(id)arg0 ;
-(void)brailleDisplayInsertedCharacter:(id)arg0 ;
-(void)brailleDisplayStringDidChange:(id)arg0 brailleSelection:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)didInsertScriptString:(id)arg0 ;
-(void)discardEdits;
-(void)enumerateWordsBetweenCharacters:(id)arg0 text:(id)arg1 inRange:(struct _NSRange )arg2 usingBlock:(id)arg3 ;
-(void)replaceScriptStringRange:(struct _NSRange )arg0 withScriptString:(id)arg1 cursorLocation:(NSUInteger)arg2 ;
-(void)scriptSelectionDidChange:(struct _NSRange )arg0 ;
-(void)setAnyUnread:(BOOL)arg0 ;
-(void)setAppToken:(id)arg0 ;
-(void)setCurrentUnread:(BOOL)arg0 ;
-(void)setDisplayMode:(int)arg0 ;
-(void)setFormatter:(id)arg0 ;
-(void)setLineFocus:(int)arg0 ;
-(void)setMainSize:(NSInteger)arg0 ;
-(void)setMasterStatusCellIndex:(NSInteger)arg0 ;
-(void)setRealStatus:(id)arg0 ;
-(void)setShowDotsSevenAndEight:(BOOL)arg0 ;
-(void)setStatusSize:(NSInteger)arg0 ;
-(void)setVirtualStatus:(id)arg0 alignment:(int)arg1 ;
-(void)translate;


@end


#endif