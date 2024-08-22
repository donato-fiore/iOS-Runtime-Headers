// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWKTEXTINTERACTIONASSISTANT_H
#define UIWKTEXTINTERACTIONASSISTANT_H

@class NSString;
@protocol UIResponderStandardEditActions, UITextCursorAssertion;


#import "UITextInteractionAssistant.h"
#import "_UITextServiceSession.h"
#import "UITextChecker.h"
#import "UILongPressGestureRecognizer.h"
#import "UITapGestureRecognizer.h"

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions>

 {
    NSInteger _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServiceSession *_translateSession;
    UITextChecker *_textChecker;
    NSUInteger _options;
    id<UITextCursorAssertion> *_blinkAssertion;
}


@property (nonatomic) CGRect caretBeforeTap; // ivar: _caretBeforeTap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILongPressGestureRecognizer *forcePressGesture;
@property (nonatomic) BOOL hadCaretSelectionBeforeTap; // ivar: _hadCaretSelectionBeforeTap
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) BOOL shouldDelayActivatingSelectionView; // ivar: _shouldDelayActivatingSelectionView
@property (readonly, nonatomic) UITapGestureRecognizer *singleTapGesture;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *wordBeforeTap; // ivar: _wordBeforeTap


-(BOOL)containerAllowsSelection;
-(BOOL)containerAllowsSelectionTintOnly;
-(BOOL)containerIsAtom;
-(BOOL)containerIsBrowserView;
-(BOOL)overrideGestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)requiresImmediateUpdate;
-(BOOL)shouldSuppressSelectionCommands;
-(BOOL)shouldTryReplacementsForText:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)usesAsynchronousSelectionController;
-(BOOL)wantsLinkInteraction;
-(Class)selectionInteractionClass;
-(NSInteger)currentCursorBehavior;
-(id)_asText;
-(id)initWithView:(id)arg0 ;
-(id)textChecker;
-(void)addGestureRecognizersToView:(id)arg0 ;
-(void)dealloc;
-(void)didEndScrollingOverflow;
-(void)hideTextStyleOptions;
-(void)lookup:(id)arg0 fromRect:(struct CGRect )arg1 ;
-(void)lookup:(id)arg0 withRange:(struct _NSRange )arg1 fromRect:(struct CGRect )arg2 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionEnded:(struct CGPoint )arg0 ;
-(void)rangeSelectionMoved:(struct CGPoint )arg0 withTouchPoint:(struct CGPoint )arg1 ;
-(void)rangeSelectionStarted:(struct CGPoint )arg0 ;
-(void)scheduleChineseTransliterationForText:(id)arg0 ;
-(void)scheduleReplacementsForText:(id)arg0 ;
-(void)scheduleReplacementsForText:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)scheduleReplacementsWithOptions:(NSUInteger)arg0 ;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)selectTextForReplacement:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)selectWord;
-(void)selectionChanged;
-(void)selectionChangedWithGestureAt:(struct CGPoint )arg0 withGesture:(NSInteger)arg1 withState:(NSInteger)arg2 withFlags:(NSInteger)arg3 ;
-(void)selectionChangedWithTouchAt:(struct CGPoint )arg0 withSelectionTouch:(NSInteger)arg1 withFlags:(NSInteger)arg2 ;
-(void)showDictionaryFor:(id)arg0 fromRect:(struct CGRect )arg1 ;
-(void)showReplacementsForText:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(void)showSelectionView;
-(void)showShareSheetFor:(id)arg0 fromRect:(struct CGRect )arg1 ;
-(void)showTextServiceFor:(id)arg0 fromRect:(struct CGRect )arg1 ;
-(void)showTextStyleOptions;
-(void)translate:(id)arg0 fromRect:(struct CGRect )arg1 ;
-(void)updateActivatingSelectionView;
-(void)updateSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg0 ;
-(void)willChangeSelection;
-(void)willStartScrollingOverflow;


@end


#endif