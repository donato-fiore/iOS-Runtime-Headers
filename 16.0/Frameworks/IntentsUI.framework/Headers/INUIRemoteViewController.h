// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INUIREMOTEVIEWCONTROLLER_H
#define INUIREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSExtension, NSString, INWidgetDescriptor;
@protocol _INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate, NSCopying, INUIRemoteViewControllerDelegate;


#import "INUIExtensionViewControllerConfiguration.h"
#import "_INUIExtensionHostContext.h"
#import "INUIExtensionRequestInfo.h"

@interface INUIRemoteViewController : UIRemoteViewController <_INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate>



@property (retain, nonatomic) NSExtension *activeExtension; // ivar: _activeExtension
@property (copy, nonatomic) INUIExtensionViewControllerConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<NSCopying> *currentRequestIdentifier; // ivar: _currentRequestIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUIRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INUIExtensionHostContext *extensionHostContext; // ivar: _extensionHostContext
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsStateUpdate; // ivar: _needsStateUpdate
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (copy, nonatomic, setter=_setRequestInfo:) INUIExtensionRequestInfo *requestInfo; // ivar: _requestInfo
@property (readonly) Class superclass;
@property (retain, nonatomic) INWidgetDescriptor *widgetDescriptor; // ivar: _widgetDescriptor
@property (nonatomic, getter=isWidgetHost) BOOL widgetHost; // ivar: _widgetHost


+(void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg0 delegate:(id)arg1 connectionHandler:(id)arg2 ;
+(void)_getWidgetHostingRemoteViewControllerWithIntent:(id)arg0 descriptor:(id)arg1 completionHandler:(id)arg2 ;
+(void)_getWidgetHostingRemoteViewControllerWithIntent:(id)arg0 extensionMatchingError:(id)arg1 completionHandler:(id)arg2 ;
+(void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg0 delegate:(id)arg1 connectionHandler:(id)arg2 ;
+(void)_requestRemoteViewControllerWithRequestInfo:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;
+(void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg0 delegate:(id)arg1 connectionHandler:(id)arg2 ;
+(void)requestRemoteViewControllerForInteraction:(id)arg0 delegate:(id)arg1 connectionHandler:(id)arg2 ;
+(void)requestRemoteViewControllerWithRequestInfo:(id)arg0 reply:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)_errorHandlingServiceViewControllerProxy;
-(id)disconnect;
-(void)_queryRepresentedPropertiesWithCompletion:(id)arg0 ;
-(void)_updateExtensionContextStateWithCompletion:(id)arg0 ;
-(void)configureForParameters:(id)arg0 ofInteraction:(id)arg1 interactiveBehavior:(NSUInteger)arg2 context:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)configureWithInteraction:(id)arg0 context:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)configureWithInteraction:(id)arg0 context:(NSUInteger)arg1 errorHandlingCompletion:(id)arg2 ;
-(void)desiresInteractivity:(id)arg0 ;
-(void)extensionHostContext:(id)arg0 wantsToHandleIntent:(id)arg1 ;
-(void)extensionHostContextWillBeginEditing:(id)arg0 ;
-(void)requestCancellation;
-(void)setIdealConfiguration:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif