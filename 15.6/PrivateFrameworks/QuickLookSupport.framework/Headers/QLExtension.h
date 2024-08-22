// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLEXTENSION_H
#define QLEXTENSION_H

@class NSXPCConnection, NSExtensionContext, NSExtension, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "QLGracePeriodTimer.h"

@interface QLExtension : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionHandlersQueue; // ivar: _completionHandlersQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSExtensionContext *context; // ivar: _context
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSMutableArray *extensionRequestHandlers; // ivar: _extensionRequestHandlers
@property NSInteger extensionScore; // ivar: _extensionScore
@property NSUInteger externalResourcesPermission; // ivar: _externalResourcesPermission
@property (retain, nonatomic) QLGracePeriodTimer *gracePeriodTimer; // ivar: _gracePeriodTimer
@property (nonatomic) BOOL isRequestingExtension; // ivar: _isRequestingExtension
@property (retain, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) id *requestIdentifier; // ivar: _requestIdentifier


-(id)initWithExtension:(id)arg0 ;
-(void)_callExtensionRequestHandlers;
-(void)_invalidate;
-(void)_invalidateAndCancelExtensionRequest;
-(void)_setupConnectionIfNeededWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)extensionContextWithCompletionHandler:(id)arg0 ;
-(void)invalidateAndCancelExtensionRequest;
-(void)registerClient:(id)arg0 ;
-(void)unregisterClient:(id)arg0 ;


@end


#endif