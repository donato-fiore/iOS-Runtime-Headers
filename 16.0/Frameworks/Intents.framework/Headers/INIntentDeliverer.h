// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENTDELIVERER_H
#define ININTENTDELIVERER_H

@class NSString;
@protocol INIntentParameterOptionsProviding, INIntentDelivering, INIntentDeliveringDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "INExtensionContextIntentResponseObserver.h"

@interface INIntentDeliverer : NSObject <INIntentParameterOptionsProviding, INIntentDelivering>



@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INIntentDeliveringDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) INExtensionContextIntentResponseObserver *getCarPowerLevelObserver; // ivar: _getCarPowerLevelObserver
@property (retain, nonatomic) INExtensionContextIntentResponseObserver *getRideStatusObserver; // ivar: _getRideStatusObserver
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_updateIntent:(id)arg0 intentSlotDescription:(id)arg1 resolutionResultDataProvider:(id)arg2 ;
-(id)_processIntentResponseCompletionHandlerWithIntent:(SEL)arg0 completion:(id)arg1 ;
-(id)_processOptionsForIntent:(SEL)arg0 parameterNamed:(id)arg1 completionHandler:(id)arg2 ;
-(id)_processResolutionDataProviderForIntent:(SEL)arg0 intentSlotDescription:(id)arg1 updateIntent:(id)arg2 completion:(BOOL)arg3 ;
-(id)initWithQueue:(id)arg0 auditToken:(struct ? )arg1 ;
-(void)_deliverIntent:(id)arg0 withBlock:(id)arg1 ;
// -(void)_invokeIntentHandlerMethodForIntent:(id)arg0 intentHandler:(id)arg1 parameterNamed:(id)arg2 keyForSelectors:(id)arg3 executionHandler:(id)arg4 unimplementedHandler:(unk)arg5  ;
-(void)_processDefaultValue:(id)arg0 forIntent:(id)arg1 parameterNamed:(id)arg2 completionHandler:(id)arg3 ;
-(void)_processIntent:(id)arg0 intentResponse:(id)arg1 completion:(id)arg2 ;
-(void)_resolveIntentParameter:(id)arg0 forIntent:(id)arg1 intentHandler:(id)arg2 updateIntent:(BOOL)arg3 withCompletion:(id)arg4 ;
-(void)_startSendingUpdatesForIntent:(id)arg0 toObserver:(id)arg1 fromConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)_stopSendingUpdatesForIntent:(id)arg0 fromConnection:(id)arg1 completionHandler:(id)arg2 ;
-(void)confirmIntent:(id)arg0 withCompletion:(id)arg1 ;
-(void)getIntentParameterDefaultValue:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(void)getIntentParameterOptions:(id)arg0 forIntent:(id)arg1 searchTerm:(id)arg2 completionBlock:(id)arg3 ;
-(void)getParameterOptionsForParameterNamed:(id)arg0 intent:(id)arg1 searchTerm:(id)arg2 completionBlock:(id)arg3 ;
-(void)getSupportsParameterOptionsForParameterNamed:(id)arg0 intent:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleIntent:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveIntentParameter:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(void)resolveIntentParameters:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(void)startSendingUpdatesForIntent:(id)arg0 toObserver:(id)arg1 completionHandler:(id)arg2 ;
-(void)stopSendingUpdatesForIntent:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif