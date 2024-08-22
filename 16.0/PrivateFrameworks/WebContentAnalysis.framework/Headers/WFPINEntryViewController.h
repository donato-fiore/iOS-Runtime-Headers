// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPINENTRYVIEWCONTROLLER_H
#define WFPINENTRYVIEWCONTROLLER_H

@class UIViewController, _UIFallbackPresentationViewController, NSArray, NSURL, NSString;
@protocol WFPINEntryViewControllerProtocol;


#import "WFRemotePINEntryViewController.h"

@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol>

 {
    _UIFallbackPresentationViewController *_fallbackPresentationVC;
    NSArray *_windowsWithDisabledRotation;
    UIViewController *_rootViewControllerToUse;
    WFRemotePINEntryViewController *_remoteViewController;
    NSURL *_URL;
    NSString *_pageTitle;
    id *_completion;
}


@property (copy, nonatomic) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler


+(Class)remoteViewControllerClass;
+(id)serviceViewControllerClassName;
-(BOOL)hasUIWebViewSubView:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)_supportedInterfaceOrientationsForRootViewController;
-(NSUInteger)supportedInterfaceOrientations;
-(id)delegate;
-(id)initWithURL:(id)arg0 pageTitle:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)insertRemoteViewController:(id)arg0 ;
-(void)presentViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)userDidCancel;
-(void)userEnteredCorrectPIN;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif