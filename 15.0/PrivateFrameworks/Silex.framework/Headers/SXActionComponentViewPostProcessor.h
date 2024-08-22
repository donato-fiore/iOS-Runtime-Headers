// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXACTIONCOMPONENTVIEWPOSTPROCESSOR_H
#define SXACTIONCOMPONENTVIEWPOSTPROCESSOR_H

@class NSString;
@protocol SXComponentViewPostProcessor, SXActionProvider, SXActionComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager;

#import <Foundation/Foundation.h>


@interface SXActionComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>



@property (readonly, nonatomic) NSObject<SXActionProvider> *actionProvider; // ivar: _actionProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXActionComponentInteractionHandlerFactory> *factory; // ivar: _factory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandlerManager> *interactionHandlerManager; // ivar: _interactionHandlerManager
@property (readonly) Class superclass;


-(id)initWithActionProvider:(id)arg0 interactionHandlerFactory:(id)arg1 interactionHandlerManager:(id)arg2 ;
-(void)processComponent:(id)arg0 view:(id)arg1 ;


@end


#endif