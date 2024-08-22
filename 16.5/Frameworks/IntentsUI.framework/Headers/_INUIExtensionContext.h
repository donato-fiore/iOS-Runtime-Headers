// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INUIEXTENSIONCONTEXT_H
#define _INUIEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _INUIExtensionContextVending, _INUIRemoteViewControllerServing;


#import "_INUIExtensionContextState.h"

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending>

 {
    _INUIExtensionContextState *_currentExtensionContextState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<_INUIRemoteViewControllerServing> *viewController; // ivar: _viewController


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_errorHandlingHostProxy;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)interfaceParametersDescription;
-(struct CGSize )_bestAllowedSizeForAllowedSizesDictionary:(id)arg0 ;
-(struct CGSize )hostedViewMaximumAllowedSize;
-(struct CGSize )hostedViewMinimumAllowedSize;
-(void)_requestHandlingOfIntent:(id)arg0 ;
-(void)_willBeginEditing;
-(void)configureForParameters:(id)arg0 ofInteraction:(id)arg1 interactiveBehavior:(NSUInteger)arg2 context:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)desiresInteractivity:(id)arg0 ;
-(void)queryRepresentedPropertiesWithCompletion:(id)arg0 ;
-(void)setExtensionContextState:(id)arg0 completion:(id)arg1 ;
-(void)viewWasCancelled;


@end


#endif