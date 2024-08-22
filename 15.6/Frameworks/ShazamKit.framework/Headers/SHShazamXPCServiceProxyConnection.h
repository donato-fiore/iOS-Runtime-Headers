// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHAZAMXPCSERVICEPROXYCONNECTION_H
#define SHSHAZAMXPCSERVICEPROXYCONNECTION_H

@class NSXPCConnection, NSString;
@protocol SHXPCServiceProxy;

#import <Foundation/Foundation.h>


@interface SHShazamXPCServiceProxyConnection : NSObject <SHXPCServiceProxy>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy, nonatomic) id *connectionErrorHandler; // ivar: _connectionErrorHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSObject<SHXPCServiceProxy> *proxy; // ivar: _proxy
@property (readonly) Class superclass;


-(void)_libraryInfoWithCompletionHandler:(id)arg0 ;
-(void)_queryLibraryWithParameters:(id)arg0 completionHandler:(id)arg1 ;
-(void)_synchronizeSnapshot:(id)arg0 startCondition:(id)arg1 ;
-(void)attachDefaultConnectionHandlers;
-(void)dealloc;
-(void)mediaItemForShazamID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDefaultConnectionHandlers;
-(void)sendEventSignal:(id)arg0 ;
-(void)startRecognitionForRequest:(id)arg0 ;
-(void)stop;


@end


#endif