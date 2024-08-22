// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBROWSERDRAGMANAGER_H
#define CKBROWSERDRAGMANAGER_H

@class NSString, UIWindow, UILongPressGestureRecognizer, UIViewController, UIView;
@protocol CKBrowserDragViewControllerDelegate, UIGestureRecognizerDelegate, CKBrowserDragControllerDelegate, CKBrowserDragControllerTranscriptDelegate;

#import <Foundation/Foundation.h>

#import "CKBrowserDragViewController.h"

@interface CKBrowserDragManager : NSObject <CKBrowserDragViewControllerDelegate, UIGestureRecognizerDelegate>



@property (retain, nonatomic) id *currentItem; // ivar: _currentItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserDragControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKBrowserDragViewController *dragViewController; // ivar: _dragViewController
@property (retain, nonatomic) UIWindow *dragWindow; // ivar: _dragWindow
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint locationInView; // ivar: _locationInView
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *targetView; // ivar: _targetView
@property (weak, nonatomic) NSObject<CKBrowserDragControllerTranscriptDelegate> *transcriptDelegate; // ivar: _transcriptDelegate


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)usesSeparateDragWindow;
-(id)browserDragViewControllerTargetView:(id)arg0 ;
-(id)initWithTargetView:(id)arg0 ;
-(id)superviewOfView:(id)arg0 matchingClass:(Class)arg1 ;
-(void)beginDraggingItem:(id)arg0 withAnimatedDragImage:(id)arg1 fromRect:(struct CGRect )arg2 ;
-(void)beginDraggingItem:(id)arg0 withDragImage:(id)arg1 fromRect:(struct CGRect )arg2 ;
-(void)browserDragViewController:(id)arg0 dragEndedWithTarget:(id)arg1 ;
-(void)browserDragViewController:(id)arg0 draggedWithTarget:(id)arg1 ;
-(void)dealloc;
-(void)setPlusButtonHidden:(BOOL)arg0 ;
-(void)tapRecognized:(id)arg0 ;


@end


#endif