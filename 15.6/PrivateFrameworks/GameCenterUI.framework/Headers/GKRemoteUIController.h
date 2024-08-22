// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKREMOTEUICONTROLLER_H
#define GKREMOTEUICONTROLLER_H

@class NSString, NSDictionary, NSError, NSURL, RUILoader, UINavigationController, NSMutableArray, GKLocalPlayer, NSData, NSArray;
@protocol RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate;

#import <Foundation/Foundation.h>

#import "GKRemoteUIController.h"

@interface GKRemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate>



@property (retain, nonatomic) NSString *alias; // ivar: _alias
@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) NSDictionary *authInfo; // ivar: _authInfo
@property (retain, nonatomic) NSString *authToken; // ivar: _authToken
@property (readonly, nonatomic) NSString *bagKey;
@property (nonatomic) BOOL complete; // ivar: _complete
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSURL *fallbackURL;
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isServerAuthenticated; // ivar: _isServerAuthenticated
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) int layoutStyle; // ivar: _layoutStyle
@property (copy, nonatomic) id *loadHandler; // ivar: _loadHandler
@property (retain, nonatomic) RUILoader *loader; // ivar: _loader
@property (nonatomic) BOOL loading; // ivar: _loading
@property (nonatomic) BOOL loadingInitialUI; // ivar: _loadingInitialUI
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) NSMutableArray *objectModels; // ivar: _objectModels
@property (retain, nonatomic) GKLocalPlayer *playerForRemoteUI; // ivar: _playerForRemoteUI
@property (retain, nonatomic) NSString *playerID; // ivar: _playerID
@property (retain, nonatomic) GKRemoteUIController *presentedRemoteUIController; // ivar: _presentedRemoteUIController
@property (nonatomic) BOOL previousUseCustomBackButtonActionValue; // ivar: _previousUseCustomBackButtonActionValue
@property (retain, nonatomic) NSData *pushToken; // ivar: _pushToken
@property (nonatomic) BOOL shouldApplyGameCenterTheme; // ivar: _shouldApplyGameCenterTheme
@property (retain, nonatomic) NSArray *staticViewControllers; // ivar: _staticViewControllers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;


+(id)remoteUIController;
-(BOOL)objectModel:(id)arg0 shouldShowModalHTMLViewWithURL:(id)arg1 ;
-(Class)objectModel:(id)arg0 customFooterClassForSection:(id)arg1 ;
-(Class)objectModel:(id)arg0 customHeaderClassForSection:(id)arg1 ;
-(NSInteger)indexOfVisiblePage;
-(id)addThemeInfoToAttributes:(id)arg0 ;
-(id)init;
-(id)initWithObjectModel:(id)arg0 ;
-(id)objectModel:(id)arg0 tableFooterViewForAttributes:(id)arg1 page:(id)arg2 ;
-(id)objectModel:(id)arg0 tableHeaderViewForAttributes:(id)arg1 page:(id)arg2 ;
-(id)parentViewControllerForObjectModel:(id)arg0 ;
-(id)postBodyForInitialLoad;
-(id)postbackDataForDictionary:(id)arg0 ;
-(id)viewControllerForAlertPresentation;
-(id)viewControllers;
-(int)preferredLayoutStyle;
-(void)auxiliaryView:(id)arg0 pressedButton:(id)arg1 attributes:(id)arg2 ;
-(void)auxiliaryView:(id)arg0 pressedLink:(id)arg1 attributes:(id)arg2 ;
-(void)configureFromBagKey:(id)arg0 player:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)didLoadURL:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)finishLoadingWithError:(id)arg0 ;
-(void)fireCompletionHandler;
-(void)loadInitialRemoteUIForPlayer:(id)arg0 handler:(id)arg1 ;
-(void)loadInitialRemoteUIWithHandler:(id)arg0 ;
-(void)loadURL:(id)arg0 forPlayer:(id)arg1 postBody:(id)arg2 ;
-(void)loadURL:(id)arg0 forPlayer:(id)arg1 postData:(id)arg2 ;
-(void)loadURL:(id)arg0 postBody:(id)arg1 ;
-(void)loadURL:(id)arg0 postData:(id)arg1 ;
-(void)loader:(id)arg0 didFailWithError:(id)arg1 ;
-(void)loader:(id)arg0 receivedObjectModel:(id)arg1 actionSignal:(NSUInteger)arg2 ;
-(void)objectModel:(id)arg0 configureTableRow:(id)arg1 page:(id)arg2 ;
-(void)objectModel:(id)arg0 configureTableSection:(id)arg1 page:(id)arg2 ;
-(void)objectModel:(id)arg0 configureTableView:(id)arg1 page:(id)arg2 ;
-(void)objectModel:(id)arg0 elementDidChange:(id)arg1 ;
-(void)objectModel:(id)arg0 page:(id)arg1 toggledEditing:(BOOL)arg2 ;
-(void)objectModel:(id)arg0 pressedLink:(id)arg1 httpMethod:(id)arg2 ;
-(void)objectModelDidChange:(id)arg0 ;
-(void)objectModelPressedBack:(id)arg0 ;
-(void)performAction:(NSUInteger)arg0 withObjectModel:(id)arg1 ;
-(void)popObjectModelAnimated:(BOOL)arg0 ;
-(void)presentInParentNavigationController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentObjectModel:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushObjectModel:(id)arg0 animated:(BOOL)arg1 ;
-(void)replaceObjectModelAtIndex:(NSUInteger)arg0 withObjectObjectModel:(id)arg1 ;
-(void)takeValuesFromClientInfo:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateAccountAndMarkComplete:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updatePostbackDictionary:(id)arg0 withHandler:(id)arg1 ;


@end


#endif