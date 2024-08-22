// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXWEBCONTENTCOMPONENTINTERACTIONMANAGERFACTORY_H
#define SXWEBCONTENTCOMPONENTINTERACTIONMANAGERFACTORY_H

@class NSString;
@protocol SXWebContentComponentInteractionManagerFactory, SXWebContentComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager, SWInteractionProvider;

#import <Foundation/Foundation.h>


@interface SXWebContentComponentInteractionManagerFactory : NSObject <SXWebContentComponentInteractionManagerFactory>



@property (readonly, nonatomic) NSObject<SXWebContentComponentInteractionHandlerFactory> *componentInteractionHandlerFactory; // ivar: _componentInteractionHandlerFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandlerManager> *interactionHandlerManager; // ivar: _interactionHandlerManager
@property (readonly, nonatomic) NSObject<SWInteractionProvider> *interactionProvider; // ivar: _interactionProvider
@property (readonly) Class superclass;


-(id)initWithInteractionProvider:(id)arg0 interactionHandlerManager:(id)arg1 componentInteractionHandlerFactory:(id)arg2 ;
-(id)interactionManagerForComponentView:(id)arg0 ;


@end


#endif