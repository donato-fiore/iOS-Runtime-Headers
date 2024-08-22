// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTOMATIONCONTROLLER_H
#define AUTOMATIONCONTROLLER_H

@class SFAutomationController, NSMapTable, SFClient, UIAutonomousSingleAppModeSession, _WKAutomationSessionConfiguration, _WKAutomationSession, NSString;
@protocol _WKAutomationDelegate, _WKAutomationSessionDelegate;



@interface AutomationController : SFAutomationController <_WKAutomationDelegate, _WKAutomationSessionDelegate>

 {
    BOOL _automationSessionRequestedFirstWebView;
    BOOL _closingAutomationTabsForSessionTeardown;
    NSMapTable *_activeDialogs;
    SFClient *_sharingClient;
    UIAutonomousSingleAppModeSession *_guidedAccessSession;
    _WKAutomationSessionConfiguration *_provisionalSessionConfiguration;
}


@property (readonly, nonatomic) _WKAutomationSession *automationSession; // ivar: _automationSession
@property (readonly, nonatomic) BOOL canCreateNewAutomationTabs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_automationSession:(id)arg0 isShowingJavaScriptDialogForWebView:(id)arg1 ;
-(BOOL)_processPoolAllowsRemoteAutomation:(id)arg0 ;
-(BOOL)_uninstallAutomationSession;
-(NSInteger)_automationSession:(id)arg0 currentPresentationForWebView:(id)arg1 ;
-(NSInteger)_automationSession:(id)arg0 typeOfCurrentJavaScriptDialogForWebView:(id)arg1 ;
-(id)_automationSession:(id)arg0 messageOfCurrentJavaScriptDialogForWebView:(id)arg1 ;
-(id)_browserControllerForAutomation;
-(id)init;
-(void)_applicationDidEnterBackground;
-(void)_automationSession:(id)arg0 acceptCurrentJavaScriptDialogForWebView:(id)arg1 ;
-(void)_automationSession:(id)arg0 dismissCurrentJavaScriptDialogForWebView:(id)arg1 ;
-(void)_automationSession:(id)arg0 requestNewWebViewWithOptions:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_automationSession:(id)arg0 requestSwitchToWebView:(id)arg1 completionHandler:(id)arg2 ;
-(void)_automationSession:(id)arg0 setUserInput:(id)arg1 forCurrentJavaScriptDialogForWebView:(id)arg2 ;
-(void)_automationSessionDidDisconnectFromRemote:(id)arg0 ;
-(void)_developerPreferencesChanged;
-(void)_processPool:(id)arg0 didRequestAutomationSessionWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(void)_processPoolDidRequestInspectorDebuggablesToWakeUp:(id)arg0 ;
-(void)_uninstallGuidedAccessSession;
-(void)createAutomationSessionWithIdentifier:(id)arg0 ;
-(void)createAutomationSessionWithIdentifier:(id)arg0 configuration:(id)arg1 retryBehavior:(NSInteger)arg2 ;
-(void)dealloc;
-(void)tabDocument:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)tabDocument:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)tabDocument:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 completionHandler:(id)arg3 ;
-(void)terminateSession;
-(void)updatePreferencesForAutomation:(id)arg0 ;


@end


#endif