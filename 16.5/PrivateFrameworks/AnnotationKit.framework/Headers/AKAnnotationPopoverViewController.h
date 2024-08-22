// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKANNOTATIONPOPOVERVIEWCONTROLLER_H
#define AKANNOTATIONPOPOVERVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, IMTheme;
@protocol UIGestureRecognizerDelegate, AKPopoverAnnotationEditor, AKAnnotationEditorDelegate;


#import "AKTouchOutsideViewGestureRecognizer.h"
#import "AKAnnotation.h"
#import "AKPageController.h"
#import "AKAnnotationTheme.h"

@interface AKAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate, AKPopoverAnnotationEditor>

 {
    AKTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    id *mObserver;
}


@property (retain, nonatomic) AKAnnotation *annotation; // ivar: mAnnotation
@property (retain, nonatomic) AKPageController *annotationPageController; // ivar: mAnnotationPageController
@property (retain, nonatomic) AKAnnotationTheme *annotationTheme; // ivar: mAnnotationTheme
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAnnotationEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editsOnLaunch; // ivar: _editsOnLaunch
@property (readonly) NSUInteger hash;
@property (nonatomic) int position; // ivar: mPosition
@property (nonatomic) CGRect presentationRect; // ivar: _presentationRect
@property (retain, nonatomic) UIView *presentationView; // ivar: _presentationView
@property (readonly) Class superclass;
@property (retain, nonatomic) IMTheme *theme;


-(BOOL)canPresentInPosition:(int)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(int)willPresentInPosition:(struct CGRect )arg0 view:(id)arg1 ;
-(struct CGRect )p_containerFrameForView:(id)arg0 ;
-(void)dealloc;
-(void)didHide;
-(void)didReceiveMemoryWarning;
-(void)didShow;
-(void)hide;
-(void)presentFromRect:(struct CGRect )arg0 view:(id)arg1 ;
-(void)releaseOutlets;
-(void)viewDidLoad;
-(void)willHide;
-(void)willShow;


@end


#endif