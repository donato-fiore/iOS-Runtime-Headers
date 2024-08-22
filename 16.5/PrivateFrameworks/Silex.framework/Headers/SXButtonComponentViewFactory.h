// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXBUTTONCOMPONENTVIEWFACTORY_H
#define SXBUTTONCOMPONENTVIEWFACTORY_H

@protocol SXActionComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager;


#import "SXComponentViewFactory.h"

@interface SXButtonComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXActionComponentInteractionHandlerFactory> *interactionHandlerFactory; // ivar: _interactionHandlerFactory
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandlerManager> *interactionHandlerManager; // ivar: _interactionHandlerManager


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 interactionHandlerFactory:(id)arg4 interactionHandlerManager:(id)arg5 ;
-(id)type;
-(int)role;


@end


#endif