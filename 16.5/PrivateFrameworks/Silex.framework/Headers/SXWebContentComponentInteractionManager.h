// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXWEBCONTENTCOMPONENTINTERACTIONMANAGER_H
#define SXWEBCONTENTCOMPONENTINTERACTIONMANAGER_H

@protocol SXWebContentComponentInteractionHandlerFactory, SXComponentInteractionHandler, SXComponentInteractionHandlerManager, SWInteractionProvider;

#import <Foundation/Foundation.h>

#import "SXComponentView.h"

@interface SXWebContentComponentInteractionManager : NSObject

@property (readonly, nonatomic) NSObject<SXWebContentComponentInteractionHandlerFactory> *componentInteractionHandlerFactory; // ivar: _componentInteractionHandlerFactory
@property (readonly, weak, nonatomic) SXComponentView *componentView; // ivar: _componentView
@property (retain, nonatomic) NSObject<SXComponentInteractionHandler> *currentInteractionHandler; // ivar: _currentInteractionHandler
@property (readonly, weak, nonatomic) NSObject<SXComponentInteractionHandlerManager> *interactionHandlerManager; // ivar: _interactionHandlerManager
@property (readonly, nonatomic) NSObject<SWInteractionProvider> *interactionProvider; // ivar: _interactionProvider


-(id)initWithComponentView:(id)arg0 interactionProvider:(id)arg1 interactionHandlerManager:(id)arg2 componentInteractionHandlerFactory:(id)arg3 ;
-(void)manageInteractionHandlerForInteraction:(id)arg0 ;


@end


#endif