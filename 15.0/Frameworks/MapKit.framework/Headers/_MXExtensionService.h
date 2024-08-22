// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXEXTENSIONSERVICE_H
#define _MXEXTENSIONSERVICE_H

@class NSUUID, NSExtension, UIViewController;
@protocol _MXExtensionURLHandling;

#import <Foundation/Foundation.h>

#import "_MXSerialQueue.h"
#import "_MXExtension.h"

@interface _MXExtensionService : NSObject {
    _MXSerialQueue *_serialQueue;
    BOOL _didSendConnectionTerminationNotifcation;
}


@property (weak, nonatomic) NSObject<_MXExtensionURLHandling> *URLHandlingDelegate; // ivar: _URLHandlingDelegate
@property (retain, nonatomic) NSUUID *connectionIdentifier; // ivar: _connectionIdentifier
@property (readonly, nonatomic) _MXExtension *extensionProxy; // ivar: _extensionProxy
@property (retain, nonatomic) NSExtension *realExtension; // ivar: _realExtension
@property (retain, nonatomic) UIViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly, nonatomic) NSUUID *serviceIdentifier;
@property (nonatomic) NSUInteger state; // ivar: _state


+(id)extensionCompletionQueue;
-(id)_errorForIntent:(id)arg0 ;
-(id)_errorForIntentResponse:(id)arg0 withExpectResponseClass:(Class)arg1 ;
-(id)_errorForIntentVendorContext:(id)arg0 ;
-(id)_handleOrConfirmIntent:(id)arg0 expectResponseClass:(Class)arg1 isHandle:(BOOL)arg2 withCompletion:(id)arg3 ;
-(id)confirmIntent:(id)arg0 expectResponseClass:(Class)arg1 withCompletion:(id)arg2 ;
-(id)context;
-(id)description;
-(id)extension;
-(id)handleIntent:(id)arg0 expectResponseClass:(Class)arg1 withCompletion:(id)arg2 ;
-(id)handleRequest:(id)arg0 requestDispatcher:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(id)initWithExtensionProxy:(id)arg0 ;
-(id)intentResponseObserverProxy;
-(id)resolveIntentSlot:(id)arg0 forIntent:(id)arg1 completionBlock:(id)arg2 ;
-(id)startSendingUpdatesForIntent:(id)arg0 toObserver:(id)arg1 ;
-(id)startSendingUpdatesForRequest:(id)arg0 requestDispatcher:(id)arg1 toObserver:(id)arg2 ;
-(id)vendorContextWithErrorHandler:(id)arg0 ;
-(int)processIdentifier;
-(void)_completeOrCancelTransaction:(BOOL)arg0 withIntentIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg0 Handler:(id)arg1 ;
-(void)cancel;
-(void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)completeTransactionWithIntentIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)connectExtensionWithHandler:(id)arg0 ;
-(void)connectExtensionWithRemoteViewControllerNeeded:(BOOL)arg0 Handler:(id)arg1 ;
-(void)connectUIExtensionWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)disconnectExtension;
-(void)handleIntent:(id)arg0 expectResponseClass:(Class)arg1 completion:(id)arg2 ;
-(void)setIntentResponseObserverProxy:(id)arg0 ;
-(void)stopSendingUpdatesForIntent:(id)arg0 ;
-(void)stopSendingUpdatesForRequest:(id)arg0 requestDispatcher:(id)arg1 ;


@end


#endif