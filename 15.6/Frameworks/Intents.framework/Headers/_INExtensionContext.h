// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INEXTENSIONCONTEXT_H
#define _INEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol INIntentDeliveringDelegate, _INExtensionContextVending, OS_dispatch_queue, INIntentDelivering, INIntentHandlerProvidingPrivate;



@interface _INExtensionContext : NSExtensionContext <INIntentDeliveringDelegate, _INExtensionContextVending>

 {
    BOOL _isPrivateExtension;
    id *_handlerForIntent;
    NSObject<OS_dispatch_queue> *_queue;
    id<INIntentDelivering> *_intentDeliverer;
}


@property (readonly, nonatomic) NSObject<INIntentHandlerProvidingPrivate> *_extensionHandler; // ivar: _extensionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(void)initialize;
-(id)_intentDelivererForIntent:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 extension:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)initWithInputItems:(id)arg0 privateIntentHandlerProvider:(id)arg1 ;
-(void)_beginTransactionWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_commonInit;
-(void)_completeTransactionWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_validateExtension;
-(void)beginTransactionWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)cancelTransactionDueToTimeout;
-(void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)completeTransaction;
-(void)completeTransactionWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)confirmIntent:(id)arg0 withCompletion:(id)arg1 ;
-(void)confirmationResponseForIntent:(id)arg0 completion:(id)arg1 ;
-(void)getIntentParameterDefaultValue:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(void)getIntentParameterOptions:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(void)getIntentParameterOptions:(id)arg0 forIntent:(id)arg1 searchTerm:(id)arg2 completionBlock:(id)arg3 ;
-(void)handleIntent:(id)arg0 completion:(id)arg1 ;
-(void)handleIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleIntent:(id)arg0 withCompletion:(id)arg1 ;
-(void)intentDeliverer:(id)arg0 deliverIntent:(id)arg1 withBlock:(id)arg2 ;
-(void)resolveIntentSlot:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(void)resolveIntentSlots:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(void)startSendingUpdatesForIntent:(id)arg0 toObserver:(id)arg1 ;
-(void)stopSendingUpdatesForIntent:(id)arg0 ;


@end


#endif