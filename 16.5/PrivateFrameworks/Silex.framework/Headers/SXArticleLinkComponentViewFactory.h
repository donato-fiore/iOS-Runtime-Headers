// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXARTICLELINKCOMPONENTVIEWFACTORY_H
#define SXARTICLELINKCOMPONENTVIEWFACTORY_H

@protocol SXURLActionFactory, SXArticleURLFactory, SXActionComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager;


#import "SXContainerComponentViewFactory.h"

@interface SXArticleLinkComponentViewFactory : SXContainerComponentViewFactory

@property (readonly, nonatomic) NSObject<SXURLActionFactory> *URLActionFactory; // ivar: _URLActionFactory
@property (readonly, nonatomic) NSObject<SXArticleURLFactory> *articleURLFactory; // ivar: _articleURLFactory
@property (readonly, nonatomic) NSObject<SXActionComponentInteractionHandlerFactory> *interactionHandlerFactory; // ivar: _interactionHandlerFactory
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandlerManager> *interactionHandlerManager; // ivar: _interactionHandlerManager


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 mediaSharingPolicyProvider:(id)arg4 interactionHandlerManager:(id)arg5 interactionHandlerFactory:(id)arg6 URLActionFactory:(id)arg7 articleURLFactory:(id)arg8 ;
-(id)type;
-(int)role;


@end


#endif