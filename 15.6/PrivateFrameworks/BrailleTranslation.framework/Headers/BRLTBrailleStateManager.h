// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRLTBRAILLESTATEMANAGER_H
#define BRLTBRAILLESTATEMANAGER_H

@class NSRecursiveLock, NSMutableArray;
@protocol NSCopying, BRLTBrailleStateManagerDelegate, BRLTBrailleTranslationDelegateProtocol;

#import <Foundation/Foundation.h>

#import "BRLTScriptString.h"
#import "BRLTBrailleBuffer.h"
#import "BRLTBrailleString.h"

@interface BRLTBrailleStateManager : NSObject <NSCopying>

 {
    BRLTScriptString *_scriptString;
    BRLTBrailleBuffer *_brailleBuffer;
    BRLTBrailleString *_staticBrailleString;
    _NSRange _scriptForwardEditingRegion;
    _NSRange _scriptBackwardEditingRegion;
    _NSRange _scriptMergeEditingRegion;
    _NSRange _brailleForwardEditingRegion;
    _NSRange _brailleBackwardEditingRegion;
    _NSRange _brailleMergeEditingRegion;
    _NSRange _activeScriptEditingRegion;
    _NSRange _activeBrailleEditingRegion;
    _NSRange _brailleSelection;
    _NSRange _brailleFocus;
    BOOL _brailleDirty;
    BOOL _scriptDirty;
    id<BRLTBrailleStateManagerDelegate> *_delegate;
    id<BRLTBrailleTranslationDelegateProtocol> *_translationDelegate;
    _NSRange _pendingScriptSelection;
    NSRecursiveLock *_apiLock;
    NSMutableArray *_runningScriptStringHistory;
    CGFloat _lastScriptStringOutputTime;
}


@property (readonly, nonatomic) BRLTBrailleBuffer *brailleBuffer;
@property (nonatomic) BOOL editable; // ivar: _editable
@property (nonatomic) NSUInteger inputTranslationMode; // ivar: _inputTranslationMode
@property (nonatomic) NSUInteger outputTranslationMode; // ivar: _outputTranslationMode


-(BOOL)_deleteBrailleCharSilently:(BOOL)arg0 ;
-(BOOL)_forwardDeleteBrailleCharSilently:(BOOL)arg0 ;
-(BOOL)_generateBrailleBuffer:(BOOL)arg0 ;
-(BOOL)_generateBrailleBufferForDelete;
-(BOOL)_selectionIsValidForDelete;
-(BOOL)_selectionIsValidForInsert;
-(BOOL)_setBrailleSelection:(struct _NSRange )arg0 newScriptLocation:(*NSUInteger)arg1 ;
-(BOOL)deleteBrailleChar;
-(BOOL)deleteBrailleCharSilently;
-(BOOL)forwardDeleteBrailleChar;
-(BOOL)forwardDeleteBrailleCharSilently;
-(NSUInteger)brailleLocationForScriptLocation:(NSUInteger)arg0 ;
-(NSUInteger)scriptLocationForBrailleLocation:(NSUInteger)arg0 ;
-(id)brailleDisplayString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDelegate:(id)arg0 translationDelegate:(id)arg1 ;
-(id)outputScriptString;
-(id)translationDelegate;
-(struct _NSRange )_brailleRangeForTextRange:(struct _NSRange )arg0 textPositions:(id)arg1 brailleLength:(NSUInteger)arg2 ;
-(struct _NSRange )_textRangeForBrailleRange:(struct _NSRange )arg0 textPositions:(id)arg1 scriptLength:(NSInteger)arg2 ;
-(struct _NSRange )backwardEditingAtomForScriptString:(id)arg0 ;
-(struct _NSRange )brailleFocus;
-(struct _NSRange )brailleRangeForScriptRange:(struct _NSRange )arg0 ;
-(struct _NSRange )brailleSelection;
-(struct _NSRange )deleteMergeAtomForScriptString:(id)arg0 ;
-(struct _NSRange )forwardEditingAtomForScriptString:(id)arg0 ;
-(struct _NSRange )scriptEditingRange;
-(struct _NSRange )scriptRangeForBrailleRange:(struct _NSRange )arg0 ;
-(struct _NSRange )scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(NSUInteger)arg0 ;
-(void)_generateBrailleBufferForInsert;
-(void)_translate:(BOOL)arg0 ;
-(void)insertBrailleChar:(id)arg0 ;
-(void)insertBrailleChar:(id)arg0 silently:(BOOL)arg1 ;
-(void)setBrailleSelection:(struct _NSRange )arg0 ;
-(void)setBrailleSelection:(struct _NSRange )arg0 needsForwardToScreenReader:(*BOOL)arg1 newScriptLocation:(*NSUInteger)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setScriptString:(id)arg0 ;
-(void)setTranslationDelegate:(id)arg0 ;
-(void)translate;
-(void)translateForced:(BOOL)arg0 ;


@end


#endif