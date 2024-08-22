// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUIBUGREPORTPRESENTER_H
#define AFUIBUGREPORTPRESENTER_H

@class UIViewController<AFUIInternalDebugControlling>, UIAlertController;
@protocol AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, AFUIBugReportPresenting, AFUIDebugControlling, AFUIBugReportPresentingDelegate;

#import <Foundation/Foundation.h>


@interface AFUIBugReportPresenter : NSObject <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, AFUIBugReportPresenting>

 {
    UIViewController<AFUIInternalDebugControlling> *_internalDebugController;
    id<AFUIDebugControlling> *_debugController;
}


@property (weak) NSObject<AFUIBugReportPresentingDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic, setter=_setPresentedAlertController:) UIAlertController *presentedAlertController; // ivar: _presentedAlertController


-(BOOL)hasContentAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)_logTime;
-(NSInteger)_actionStyleForAlertAction:(NSInteger)arg0 ;
-(id)_actionForAlertAction:(NSInteger)arg0 ;
-(id)_actionTitleForAlertAction:(NSInteger)arg0 ;
-(id)_alertControllerWithActionTypes:(id)arg0 ;
-(id)_confirmationAlertControllerWithTitle:(id)arg0 onConfirmation:(id)arg1 ;
-(id)_conversationDataFromConversation:(id)arg0 ;
-(id)_lastUserTextFromConversation:(id)arg0 ;
-(id)debugControllerRequestsBugReportKeywordIdentifiers:(id)arg0 ;
-(id)debugControllerRequestsBugReportPrefixForTitle:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_actionClickedForAction:(id)arg0 withActionType:(NSInteger)arg1 ;
-(void)_captureViewHierarchyDescriptionForController:(id)arg0 ;
-(void)_debugControllerPresentationDidEnd;
-(void)_debugControllerPresentationWillStart;
-(void)_dismissAlertControllerAnimated:(BOOL)arg0 ;
-(void)_dismissInternalDebugController;
// -(void)_requestDeviceUnlockWithSuccessCompletion:(id)arg0 withErrorCompletion:(unk)arg1  ;
-(void)_requestToOpenURL:(id)arg0 ;
-(void)_requestToPresentAlertController:(id)arg0 ;
-(void)_requestToPresentDebugController:(id)arg0 ;
-(void)_requestToPresentInternalDebugController:(id)arg0 ;
-(void)debugController:(id)arg0 openURL:(id)arg1 ;
-(void)debugController:(id)arg0 requestsPermissionToScreenshot:(id)arg1 ;
-(void)debugController:(id)arg0 requestsScreenShotWithCompletion:(id)arg1 ;
-(void)debugController:(id)arg0 stateDidChangeWithAddViews:(id)arg1 ;
-(void)didReceiveBugButtonLongPress;
-(void)didReceiveReportBugAction;
-(void)dismiss;
-(void)internalDebugControllerWantsDismissViewController;


@end


#endif