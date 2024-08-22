// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXARTICLELINKCOMPONENTVIEW_H
#define SXARTICLELINKCOMPONENTVIEW_H

@protocol SXURLActionFactory, SXArticleURLFactory, SXComponentInteractionHandler, SXActionComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager;


#import "SXContainerComponentView.h"

@interface SXArticleLinkComponentView : SXContainerComponentView

@property (readonly, nonatomic) NSObject<SXURLActionFactory> *URLActionFactory; // ivar: _URLActionFactory
@property (readonly, nonatomic) NSObject<SXArticleURLFactory> *articleURLFactory; // ivar: _articleURLFactory
@property (weak, nonatomic) NSObject<SXComponentInteractionHandler> *interactionHandler; // ivar: _interactionHandler
@property (readonly, nonatomic) NSObject<SXActionComponentInteractionHandlerFactory> *interactionHandlerFactory; // ivar: _interactionHandlerFactory
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandlerManager> *interactionHandlerManager; // ivar: _interactionHandlerManager


-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 mediaSharingPolicyProvider:(id)arg4 interactionHandlerManager:(id)arg5 interactionHandlerFactory:(id)arg6 URLActionFactory:(id)arg7 articleURLFactory:(id)arg8 ;
-(void)loadComponent:(id)arg0 ;


@end


#endif