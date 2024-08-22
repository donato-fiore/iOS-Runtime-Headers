// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFVIEWTOUCHHANDLER_H
#define UIPDFVIEWTOUCHHANDLER_H

@class UIResponder, UITapGestureRecognizer, UILongPressGestureRecognizer, UIMenuController, NSString;
@protocol UIGestureRecognizerDelegate;


#import "UIPDFPageView.h"
#import "UIPDFSelectionController.h"
#import "UIPDFMagnifierController.h"

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate>

 {
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_twoFingerTapRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFMagnifierController *_magnifyController;
    BOOL _trackingSelection;
    BOOL _showMagnifier;
    BOOL _showLoupe;
    BOOL _firstTouch;
    BOOL _useDelegateForLinks;
}


@property BOOL allowMenu; // ivar: _allowMenu
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)releaseViewManager;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)delegateGesture:(id)arg0 kind:(int)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(id)initWithView:(id)arg0 ;
-(id)nextResponder;
-(void)briefPressRecognized:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)disableRecognizers;
-(void)doubleTapRecognized:(id)arg0 ;
-(void)enableRecognizers;
-(void)hideMenu;
-(void)longPressRecognized:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setFirstTouch;
-(void)showMenu;
-(void)singleTapRecognized:(id)arg0 ;
-(void)twoFingerTapRecognized:(id)arg0 ;


@end


#endif