// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTEUICONTROLLER_H
#define REMOTEUICONTROLLER_H

@class NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, NSUUID, NSArray, UIViewController, UINavigationController, NSURLSessionConfiguration;
@protocol RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>

#import "RUINavigationController.h"
#import "RUIPage.h"
#import "RUILoader.h"
#import "RUIStyle.h"

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>

 {
    RUINavigationController *_modalNavigationController;
    NSMutableArray *_objectModels;
    NSMutableArray *_modalObjectModels;
    NSMutableDictionary *_elementChangeHandlers;
    RUIPage *_pageOriginatingLoad;
    NSString *_listeningForSMSIdentifier;
    NSString *_SMSAutoFillToken;
    BOOL _testMode;
    UIActivityIndicatorView *_spinner;
}


@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RemoteUIControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedPages;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *hostViewController; // ivar: _hostViewController
@property (copy, nonatomic) id *loadCompletion; // ivar: _loadCompletion
@property (retain, nonatomic) RUILoader *loader; // ivar: _loader
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration
@property (retain, nonatomic) RUIStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userAgentString; // ivar: _userAgentString


-(BOOL)_objectModelPageWantsHSATokens:(id)arg0 ;
-(BOOL)_shouldAnimate;
-(BOOL)isListeningForHSATokenAutoFill;
-(BOOL)objectModel:(id)arg0 shouldDisplayNamedElement:(id)arg1 page:(id)arg2 ;
-(NSUInteger)supportedInterfaceOrientationsForObjectModel:(id)arg0 page:(id)arg1 ;
-(id)_handleDismissAndReplaceWithActionSignal:(SEL)arg0 objectModel:(id)arg1 ;
-(id)_handleDismissWithActionSignal:(SEL)arg0 objectModel:(id)arg1 ;
-(id)_modalObjectModels;
-(id)_objectModelStack;
-(id)_objectModels;
-(id)dismissObjectModelsAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(id)init;
-(id)parentViewControllerForObjectModel:(id)arg0 ;
-(id)parser:(id)arg0 createPageWithName:(id)arg1 attributes:(id)arg2 ;
-(id)popObjectModelAnimated:(BOOL)arg0 ;
-(id)popObjectModelAnimated:(BOOL)arg0 stopListeningForHSATokens:(BOOL)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)sessionConfigurationForLoader:(id)arg0 ;
// -(id)setHandlerForElementsMatching:(id)arg0 handler:(unk)arg1  ;
-(id)viewControllerForAlertPresentation;
-(void)_beginListeningForSMSAutoFill;
-(void)_didPresentObjectModel:(id)arg0 modally:(BOOL)arg1 ;
-(void)_didRemoveObjectModel:(id)arg0 ;
-(void)_enableTestMode;
-(void)_invalidateModalObjectModels;
-(void)_loadURL:(id)arg0 fromObjectModel:(id)arg1 postBody:(id)arg2 ;
-(void)_loadURL:(id)arg0 postBody:(id)arg1 fromObjectModel:(id)arg2 completion:(id)arg3 ;
-(void)_modalNavigationWasDismissed;
-(void)_modalViewControllerWasPopped:(id)arg0 ;
-(void)_objectModel:(id)arg0 receivedToken:(id)arg1 ;
-(void)_presentModalRUIController:(id)arg0 completion:(id)arg1 ;
-(void)_removePreviousObjectModelsBackToIdentifier:(id)arg0 ;
-(void)_replaceModalRUIController:(id)arg0 byController:(id)arg1 completion:(id)arg2 ;
-(void)_replaceObjectModelWithObjectModel:(id)arg0 ;
-(void)_replacePagesOfObjectModel:(id)arg0 byObjectModel:(id)arg1 sourceArray:(id)arg2 ;
// -(void)_setHandlerWithKey:(id)arg0 forElementsMatching:(id)arg1 handler:(unk)arg2  ;
-(void)_showPartialScreenModal:(id)arg0 ;
-(void)_stopListeningForSMSAutoFill;
-(void)_willPresentObjectModel:(id)arg0 modally:(BOOL)arg1 ;
-(void)dealloc;
-(void)handleCancel:(id)arg0 ;
-(void)loadData:(id)arg0 baseURL:(id)arg1 ;
-(void)loadRequest:(id)arg0 ;
-(void)loadRequest:(id)arg0 completion:(id)arg1 ;
-(void)loadURL:(id)arg0 postBody:(id)arg1 ;
-(void)loadURL:(id)arg0 postBody:(id)arg1 completion:(id)arg2 ;
-(void)loader:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)loader:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)loader:(id)arg0 didReceiveHTTPResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)loader:(id)arg0 loadResourcesForObjectModel:(id)arg1 completion:(id)arg2 ;
-(void)loader:(id)arg0 receivedObjectModel:(id)arg1 topActionSignal:(id)arg2 ;
-(void)loader:(id)arg0 willLoadRequest:(id)arg1 redirectResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)modalNavigationWasDismissed;
-(void)objectModel:(id)arg0 didNavigateBackFromController:(id)arg1 withGesture:(BOOL)arg2 ;
-(void)objectModel:(id)arg0 elementDidChange:(id)arg1 ;
-(void)objectModel:(id)arg0 pressedLink:(id)arg1 httpMethod:(id)arg2 completion:(id)arg3 ;
-(void)objectModel:(id)arg0 willLoadLinkURL:(id)arg1 attributes:(id)arg2 ;
-(void)presentLoadingSheet:(id)arg0 ;
-(void)pushObjectModel:(id)arg0 animated:(BOOL)arg1 ;
-(void)refreshTopModelWithModel:(id)arg0 ;
-(void)removeHandlerForKey:(id)arg0 ;
-(void)setHandlerForButtonName:(id)arg0 handler:(id)arg1 ;
// -(void)setHandlerForButtonsMatching:(id)arg0 handler:(unk)arg1  ;
-(void)setHandlerForElementName:(id)arg0 handler:(id)arg1 ;
-(void)startListeningForHSATokenAutoFill;
-(void)stopListeningForHSATokenAutoFill;


@end


#endif