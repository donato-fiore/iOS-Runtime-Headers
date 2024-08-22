// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIOBJECTMODEL_H
#define RUIOBJECTMODEL_H

@class NSMutableArray, NSTimer, NSMutableDictionary, NSString, NSDictionary, NSArray, NSURL;
@protocol RemoteUIWebViewControllerDelegate, RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate, RUIWebViewDelegate, RUIObjectModelDelegate;

#import <Foundation/Foundation.h>

#import "RUIAlertView.h"
#import "RUIElement.h"
#import "RUIStyle.h"
#import "RUIPage.h"

@interface RUIObjectModel : NSObject <RemoteUIWebViewControllerDelegate, RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate, RUIWebViewDelegate>

 {
    NSMutableArray *_displayedPages;
    int _currentPage;
    *OpaqueJSContext _ctx;
    NSTimer *_refreshTimer;
    RUIAlertView *_primaryAlert;
    NSMutableDictionary *_namedAlerts;
    NSMutableDictionary *_httpHeaders;
    NSString *_authPasswordEquivalent;
    NSString *_authPasswordFieldID;
    BOOL _parseFinished;
    id *_webViewDismissHandler;
}


@property (readonly, nonatomic) RUIElement *activeElement; // ivar: _activeElement
@property (retain, nonatomic) NSDictionary *alert; // ivar: _alert
@property (readonly, nonatomic) NSArray *allPages;
@property (copy, nonatomic) NSDictionary *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *defaultPages; // ivar: _defaultPages
@property (weak, nonatomic) NSObject<RUIObjectModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedPages;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *idOfObjectModelToReplace; // ivar: _idOfObjectModelToReplace
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *identifierMarkingStackRemovalAfterPush; // ivar: _identifierMarkingStackRemovalAfterPush
@property (copy, nonatomic) NSString *inlineScript; // ivar: _inlineScript
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *namedPages; // ivar: _namedPages
@property (nonatomic) NSInteger nextButtonStyle; // ivar: _nextButtonStyle
@property (readonly, nonatomic) NSArray *pages;
@property (readonly, nonatomic) RUIAlertView *primaryAlert;
@property (nonatomic) int refreshDelay; // ivar: _refreshDelay
@property (copy, nonatomic) NSString *refreshURL; // ivar: _refreshURL
@property (copy, nonatomic) NSURL *scriptURL; // ivar: _scriptURL
@property (copy, nonatomic) NSDictionary *serverInfo; // ivar: _serverInfo
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (retain, nonatomic) RUIStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *updateInfo; // ivar: _updateInfo
@property (copy, nonatomic) NSString *validationFunction; // ivar: _validationFunction
@property (readonly, nonatomic) RUIPage *visiblePage;


+(id)objectModelForXMLNamed:(id)arg0 ;
+(void)_enableTestMode;
-(BOOL)_shouldDisplayNamedElement:(id)arg0 page:(id)arg1 ;
-(BOOL)goBack;
-(BOOL)goBack:(BOOL)arg0 ;
-(BOOL)hasAttributeOrAttributeFunctionNamed:(id)arg0 withAttributes:(id)arg1 ;
-(BOOL)hasConfirmationAttributes:(id)arg0 ;
-(BOOL)hasSecondConfirmationAttributes:(id)arg0 ;
-(BOOL)prepareScriptContext;
-(BOOL)tableViewOM:(id)arg0 deleteRowAtIndexPath:(id)arg1 ;
-(BOOL)validateWithFunction:(id)arg0 ;
-(BOOL)webViewOM:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(Class)customFooterClassForSection:(id)arg0 ;
-(Class)customHeaderClassForSection:(id)arg0 ;
-(Class)customTableCellClassForTableViewRow:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientationsForRUIPage:(id)arg0 ;
-(id)_firstPageForPresentation;
-(id)_pageContainingTableView:(id)arg0 ;
-(id)_parentNavigationController;
-(id)_parentViewController;
-(id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:(BOOL)arg0 ;
-(id)absoluteURLWithString:(id)arg0 ;
-(id)elementsWithName:(id)arg0 ;
-(id)init;
-(id)invokeScriptFunction:(id)arg0 withArguments:(id)arg1 ;
-(id)newNavigationControllerForPresentation;
-(id)objectForJSValue:(struct OpaqueJSValue *)arg0 ;
-(id)postbackData;
-(id)postbackDictionary;
-(id)relativeURLWithString:(id)arg0 ;
-(id)rowForFormField:(id)arg0 ;
-(id)stringForAttributeName:(id)arg0 withAttributes:(id)arg1 ;
-(id)subElementWithID:(id)arg0 ;
-(id)tableFooterViewForAttributes:(id)arg0 ;
-(id)tableHeaderViewForAttributes:(id)arg0 ;
-(id)textInRowWithIdentifier:(id)arg0 ;
-(void)RUIPage:(id)arg0 pressedNavBarButton:(id)arg1 ;
-(void)RUIPage:(id)arg0 toggledEditing:(BOOL)arg1 ;
-(void)_displayNamedPage:(id)arg0 animated:(BOOL)arg1 ;
-(void)_displaySupplementalPage:(id)arg0 ;
-(void)_handleElementChange:(id)arg0 completion:(id)arg1 ;
-(void)_handleLinkPress:(id)arg0 attributes:(id)arg1 completion:(id)arg2 ;
-(void)_logException:(struct OpaqueJSValue *)arg0 ;
-(void)_navigateBackWithPop:(BOOL)arg0 fromViewController:(id)arg1 ;
-(void)_navigateToNextPageAnimated;
-(void)_populatePageNavItem:(id)arg0 withNextButton:(BOOL)arg1 ;
-(void)_populateRequest:(id)arg0 ;
-(void)_presentConfirmationWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)_presentSecondConfirmationWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg0 ;
-(void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg0 ;
-(void)activateElement:(id)arg0 completion:(id)arg1 ;
-(void)addAlertElement:(id)arg0 ;
-(void)alertView:(id)arg0 pressedButton:(id)arg1 completion:(id)arg2 ;
-(void)back:(id)arg0 ;
-(void)cleanupRefreshTimer;
-(void)configureRow:(id)arg0 ;
-(void)configureSection:(id)arg0 ;
-(void)configureTableView:(id)arg0 ;
-(void)dealloc;
-(void)didNavigateBackFromViewController:(id)arg0 ;
-(void)handleAppleIDAuthenticationIfNeededForAttributes:(id)arg0 completion:(id)arg1 ;
-(void)handleElementChange:(id)arg0 action:(int)arg1 completion:(id)arg2 ;
-(void)navigateToNextPageAnimated:(BOOL)arg0 ;
-(void)openLink:(id)arg0 HTTPMethod:(id)arg1 completion:(id)arg2 ;
-(void)pageDidDisappear:(id)arg0 ;
-(void)parseDidFinish;
-(void)passcodeViewOM:(id)arg0 activatedElement:(id)arg1 completion:(id)arg2 ;
-(void)populatePostbackDictionary:(id)arg0 ;
-(void)presentConfirmationIfNeededForElement:(id)arg0 completion:(id)arg1 ;
-(void)presentInParentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentInParentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentPage:(id)arg0 inViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)presentWithBlock:(id)arg0 ;
-(void)refreshTimeout;
-(void)refreshWithObjectModel:(id)arg0 ;
-(void)remoteUIWebViewController:(id)arg0 dismissWithPayload:(id)arg1 ;
-(void)remoteUIWebViewControllerDidDismiss:(id)arg0 ;
-(void)runScript;
-(void)setJSGlobalContext:(struct OpaqueJSContext *)arg0 ;
// -(void)showModalWebViewWithLinkURL:(id)arg0 dismissButtonLabel:(id)arg1 dismissButtonAlignment:(id)arg2 scaleToFit:(BOOL)arg3 loadCompletion:(id)arg4 dismissHandler:(unk)arg5  ;
-(void)startActivityIndicator;
-(void)startNavigationBarSpinnerWithTitle:(id)arg0 ;
-(void)stopActivityIndicator;
-(void)stopNavigationBarSpinner;
-(void)tableViewOM:(id)arg0 elementDidChange:(id)arg1 action:(int)arg2 completion:(id)arg3 ;
-(void)tableViewOMDidChange:(id)arg0 ;
-(void)tableViewOMSubmitForm:(id)arg0 ;


@end


#endif