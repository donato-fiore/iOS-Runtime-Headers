// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPINTERFACECONTROLLER_H
#define CPINTERFACECONTROLLER_H

@class UITraitCollection, NSXPCConnection, NSString, NSMapTable, NSMutableArray, NSArray;
@protocol CPTemplateDelegate, CPTemplateServiceClientInterface, CPInterfaceControllerDelegate, CPTemplateProviding, CPWindowProviding;

#import <Foundation/Foundation.h>

#import "CPWindow.h"
#import "CPTemplate.h"

@interface CPInterfaceController : NSObject <CPTemplateDelegate, CPTemplateServiceClientInterface>



@property (readonly, nonatomic) UITraitCollection *carTraitCollection;
@property (retain, nonatomic) CPWindow *carWindow; // ivar: _carWindow
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPInterfaceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPTemplate *lastPresentedTemplate; // ivar: _lastPresentedTemplate
@property (nonatomic) BOOL prefersDarkUserInterfaceStyle; // ivar: _prefersDarkUserInterfaceStyle
@property (retain, nonatomic) CPTemplate *presentedTemplate; // ivar: _presentedTemplate
@property (retain, nonatomic) CPTemplate *rootTemplate; // ivar: _rootTemplate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *templateMapTable; // ivar: _templateMapTable
@property (retain, nonatomic) NSObject<CPTemplateProviding> *templateProvider; // ivar: _templateProvider
@property (retain, nonatomic) NSMutableArray *templateStack; // ivar: _templateStack
@property (readonly, nonatomic) NSArray *templates;
@property (readonly, nonatomic) CPTemplate *topTemplate;
@property (weak, nonatomic) NSObject<CPWindowProviding> *windowProvider; // ivar: _windowProvider


+(id)_templateClientInterface;
+(id)_templateProvidingInterface;
+(void)_whitelistClassesForBaseTemplateProvider:(id)arg0 ;
-(BOOL)isCarPlayCanvasActive;
-(id)_activeMapTemplate;
-(id)_init;
-(id)_listenerEndpointForSettings:(id)arg0 ;
-(id)_synchronousTemplateProvider;
-(id)_templateWithIdentifier:(id)arg0 ;
-(void)_connectToListenerEndpoint:(id)arg0 ;
// -(void)_handleCompletion:(id)arg0 withSuccess:(unk)arg1 error:(BOOL)arg2  ;
-(void)_invalidate;
-(void)_presentActionSheetTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentAlertTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_pushEntityTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushGridTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushInformationTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushListTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushMapTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushNowPlayingTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushSearchTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushTabBarTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_pushTemplate:(id)arg0 presentationStyle:(NSUInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_pushVoiceControlTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_sceneConnect:(id)arg0 ;
-(void)bannerDidAppearWithIdentifier:(id)arg0 ;
-(void)bannerDidDisappearWithIdentifier:(id)arg0 ;
-(void)bannerTappedWithIdentifier:(id)arg0 ;
-(void)clientAssistantCellUnavailableWithError:(id)arg0 ;
-(void)clientExceededAudioMetadataThrottleLimit;
-(void)clientExceededHierarchyDepthLimit;
-(void)clientExceededTabBarTabLimit;
-(void)clientPushNowPlayingTemplateAnimated:(BOOL)arg0 ;
-(void)clientPushedIllegalTemplateOfClass:(id)arg0 ;
-(void)dismissTemplateAnimated:(BOOL)arg0 ;
-(void)dismissTemplateAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)popTemplateAnimated:(BOOL)arg0 ;
-(void)popTemplateAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)popToRootTemplateAnimated:(BOOL)arg0 ;
-(void)popToRootTemplateAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)popToTemplate:(id)arg0 animated:(BOOL)arg1 ;
-(void)popToTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentTemplate:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)pushTemplate:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushTemplate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)templateDidAppearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)templateDidDisappearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)templateDidDismissWithIdentifier:(id)arg0 ;
-(void)templateIdentifierDidDismiss:(id)arg0 ;
-(void)templateIdentifierDidPop:(id)arg0 ;
-(void)templateWillAppearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)templateWillDisappearWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets )arg0 ;
-(void)updateTabBarTemplate:(id)arg0 ;


@end


#endif