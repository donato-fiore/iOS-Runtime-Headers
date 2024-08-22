// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPUIACTIONVIEWCONTROLLER_H
#define FPUIACTIONVIEWCONTROLLER_H

@class UIViewController, _UIResilientRemoteViewContainerViewController, NSString, NSURL, NSError, NSArray;
@protocol FPUIActionRemoteViewControllerDelegate, FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol, FPUIActionExtensionViewControllerProtocol, FPUIActionViewControllerDelegate;



@interface FPUIActionViewController : UIViewController <FPUIActionRemoteViewControllerDelegate, FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol>

 {
    id<FPUIActionExtensionViewControllerProtocol> *_extensionViewController;
    _UIResilientRemoteViewContainerViewController *_placeholderVC;
}


@property (retain, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (retain, nonatomic) NSURL *authenticationURL; // ivar: _authenticationURL
@property (readonly, nonatomic) NSUInteger browserUserInterfaceStyle; // ivar: _browserUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPUIActionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didLoadRemoteViewControllerCompletionHandler; // ivar: _didLoadRemoteViewControllerCompletionHandler
@property (nonatomic) BOOL displayInline; // ivar: _displayInline
@property (retain, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (copy, nonatomic) NSURL *serverConnectionURL; // ivar: _serverConnectionURL
@property (readonly) Class superclass;


+(id)actionControllerForActionIdentifier:(id)arg0 actionTitle:(id)arg1 items:(id)arg2 providerIdentifier:(id)arg3 domainIdentifier:(id)arg4 ;
+(id)actionControllerForAuthenticationUsingURL:(id)arg0 providerIdentifier:(id)arg1 ;
+(id)actionControllerForConnectingToServerURL:(id)arg0 actionTitle:(id)arg1 providerIdentifier:(id)arg2 ;
+(id)actionControllerForError:(id)arg0 extensionIdentifier:(id)arg1 providerDomainIdentifier:(id)arg2 ;
+(id)actionControllerForError:(id)arg0 providerIdentifier:(id)arg1 ;
+(id)actionControllerForInlineError:(id)arg0 providerIdentifier:(id)arg1 ;
+(id)actionControllerForInlineError:(id)arg0 providerIdentifier:(id)arg1 providerDomainIdentifier:(id)arg2 ;
-(id)_getExtensionWithError:(*id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_delegateDidFinishWithUserInfo:(id)arg0 error:(id)arg1 ;
-(void)_delegateError:(id)arg0 ;
-(void)_dismissViewController;
-(void)effectiveAppearanceDidChange:(id)arg0 ;
-(void)embedViewController:(id)arg0 ;
-(void)remoteActionContext:(id)arg0 didEncounterError:(id)arg1 completionHandler:(id)arg2 ;
-(void)remoteActionContextDidFinishAction:(id)arg0 userInfo:(id)arg1 error:(id)arg2 ;
-(void)remoteActionControllerDidFinishAction:(id)arg0 error:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif