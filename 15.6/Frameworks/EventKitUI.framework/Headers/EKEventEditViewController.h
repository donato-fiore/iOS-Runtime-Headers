// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTEDITVIEWCONTROLLER_H
#define EKEVENTEDITVIEWCONTROLLER_H

@class UINavigationController, EKEventStore, EKEvent, NSString, UIColor;
@protocol UIAdaptivePresentationControllerDelegate, EKUIManagedViewController, EKEventEditViewDelegate;


#import "EKEventEditor.h"
#import "EKEventEditViewController.h"

@interface EKEventEditViewController : UINavigationController <UIAdaptivePresentationControllerDelegate, EKUIManagedViewController>

 {
    EKEventStore *_store;
    EKEvent *_event;
    NSString *_eventId;
    BOOL _completedWithAction;
}


@property (nonatomic) BOOL canHideDoneAndCancelButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displayingRootView;
@property (weak, nonatomic) NSObject<EKEventEditViewDelegate> *editViewDelegate; // ivar: _editViewDelegate
@property (retain, nonatomic) EKEventEditor *editor; // ivar: _editor
@property (retain, nonatomic) UIColor *editorBackgroundColor;
@property (nonatomic) CGFloat editorNavBarLeftContentInset;
@property (nonatomic) CGFloat editorNavBarRightContentInset;
@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreUnsavedChanges; // ivar: _ignoreUnsavedChanges
@property (nonatomic) BOOL scrollToNotes;
@property (nonatomic) BOOL showAttachments;
@property (retain, nonatomic) EKEventEditViewController *strongSelf; // ivar: _strongSelf
@property (retain, nonatomic) NSString *suggestionKey; // ivar: _suggestionKey
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeImplicitlySet;
@property (nonatomic) int transitionForModalViewPresentation; // ivar: _transitionForModalViewPresentation


+(id)eventEditViewControllerWithEvent:(id)arg0 eventStore:(id)arg1 editViewDelegate:(id)arg2 ;
+(void)setDefaultDatesForEvent:(id)arg0 ;
-(BOOL)canManagePresentationStyle;
-(BOOL)editor:(id)arg0 shouldCompleteWithAction:(NSInteger)arg1 ;
-(BOOL)hasUnsavedChanges;
-(BOOL)isModalInPresentation;
-(BOOL)saveWithSpan:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)wantsManagement;
-(BOOL)willPresentDialogOnSave;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_confirmDismissAlertExplanationText;
-(id)_leftBarButtonItem;
-(id)_rightBarButtonItem;
-(id)confirmDismissAlertController;
-(id)confirmPendingConferenceDismissAlertController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_storeChanged:(id)arg0 ;
-(void)cancelEditing;
-(void)cancelEditingWithDelegateNotification:(BOOL)arg0 forceCancel:(BOOL)arg1 ;
-(void)completeAndSave;
-(void)completeAndSaveWithContinueBlock:(id)arg0 ;
-(void)dealloc;
-(void)editor:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)editor:(id)arg0 prepareCalendarItemForEdit:(id)arg1 ;
-(void)focusAndSelectStartDate;
-(void)focusAndSelectTitle;
-(void)focusTitle;
-(void)handleTapOutside;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerDidAttemptToDismissWithPendingConference:(id)arg0 ;
-(void)refreshStartAndEndDates;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif