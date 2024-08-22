// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASERVICECLIENTHANDLER_H
#define PHASERVICECLIENTHANDLER_H

@class NSString, NSMutableArray, NSMutableDictionary, NSXPCConnection;
@protocol NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAServiceOperationListener, PLPhotoAnalysisServiceProtocol;

#import <Foundation/Foundation.h>

#import "PHAExecutive.h"
#import "PHAManager.h"

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAServiceOperationListener, PLPhotoAnalysisServiceProtocol>

 {
    NSString *_clientBundleID;
    NSMutableArray *_clientHandlers;
    NSMutableDictionary *_operationsByIdentifier;
    os_unfair_lock_s _lock;
}


@property (readonly) NSString *clientBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PHAExecutive *executive; // ivar: _executive
@property (readonly) NSUInteger hash;
@property (retain) PHAManager *photoAnalysisManager; // ivar: _photoAnalysisManager
@property (retain) id *serviceUnavailableHandler; // ivar: _serviceUnavailableHandler
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)isPhotos;
-(BOOL)isplphotosctl;
-(id)contextInformationFromInvocation:(id)arg0 ;
-(id)forwardingTargetForInvocation:(id)arg0 contextInformation:(id)arg1 cancelBackgroundActivities:(*BOOL)arg2 ;
-(id)init;
-(id)initWithXPCConnection:(id)arg0 executive:(id)arg1 ;
-(id)libraryURLFromContextInformation:(id)arg0 ;
-(id)managerForInvocation:(id)arg0 contextInformation:(id)arg1 ;
-(void)addOperation:(id)arg0 ;
-(void)cancelOperationsWithIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)handleOperation:(id)arg0 ;
-(void)operationDidFinish:(id)arg0 ;
-(void)operationWillStart:(id)arg0 ;
-(void)removeClientFromExecutiveIfNeeded;
-(void)setJobProcessingConstraintsWithValues:(id)arg0 mask:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)shutdown;
-(void)submitBlockToExecutiveStateQueue:(id)arg0 ;
-(void)xpcHandlerInvalidate;


@end


#endif