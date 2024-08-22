// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPHYPERLINKUICONTROLLER_H
#define TSWPHYPERLINKUICONTROLLER_H

@class TSDRep<TSWPHyperlinkHostRepProtocol>, NSString, UIViewController;
@protocol TSWPStorageObserver, UIPopoverControllerDelegate, UITextFieldDelegate;

#import <Foundation/Foundation.h>

#import "TSWPHyperlinkField.h"
#import "TSWPStorage.h"
#import "TSWPEditingController.h"
#import "TSWPChangeSession.h"
#import "TSWPInteractiveCanvasController.h"

@interface TSWPHyperlinkUIController : NSObject <TSWPStorageObserver, UIPopoverControllerDelegate, UITextFieldDelegate>

 {
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hyperlinkRep;
    TSWPHyperlinkField *_hyperlinkField;
    TSWPStorage *_observedStorage;
    NSUInteger _hyperlinkUISessionID;
    TSWPEditingController *_cachedEditingController;
    TSWPChangeSession *_changeSession;
    NSString *_originalDisplayText;
    BOOL _removeHyperlink;
    BOOL _closingDocument;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *editedDisplayText; // ivar: _editedDisplayText
@property (retain, nonatomic) NSString *editedURLString; // ivar: _editedURLString
@property (readonly, nonatomic) TSWPEditingController *editingController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) BOOL isCanvasInReadMode;
@property (nonatomic) BOOL shouldMaintainKeyboardWhenEndingSession; // ivar: _shouldMaintainKeyboardWhenEndingSession
@property (readonly, nonatomic) NSString *stringForDisplay;
@property (readonly, nonatomic) NSString *stringForURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewControllerForPresenting;


+(id)defaultTableView;
+(id)sharedHyperlinkUIController;
-(BOOL)hasOpenSessionForHyperlinkField:(id)arg0 ;
-(BOOL)hasStartedSession;
-(BOOL)isDisplayingHyperlinkUI;
-(BOOL)p_shouldSetCanvasSelectionWhenDismissing;
-(BOOL)p_shouldSetTextSelectionWhenDismissing;
-(int)p_UIState;
-(struct CGRect )p_viewBoundsForField;
-(void)dealloc;
-(void)endUISession;
-(void)hideHyperlinkHighlight;
-(void)i_openURLAction;
-(void)p_clearTextSelection;
-(void)p_initChangeSessionAuthorCreatedWithCommand:(*id)arg0 ;
-(void)p_selectHyperlinkField;
-(void)p_stopObservingStorage;
-(void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(BOOL)arg0 ;
-(void)showHyperlinkHighlight;
-(void)startUISessionForHyperlinkField:(id)arg0 inRep:(id)arg1 ;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(int)arg3 ;
-(void)visit;


@end


#endif