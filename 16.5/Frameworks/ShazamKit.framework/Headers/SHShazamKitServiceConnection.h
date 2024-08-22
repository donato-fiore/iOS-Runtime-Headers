// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHAZAMKITSERVICECONNECTION_H
#define SHSHAZAMKITSERVICECONNECTION_H

@class NSXPCConnection, NSString;
@protocol SHShazamKitService;

#import <Foundation/Foundation.h>

#import "SHShazamKitServiceConnectionProvider.h"
#import "SHShazamKitServiceConnectionClient.h"

@interface SHShazamKitServiceConnection : NSObject <SHShazamKitService>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) os_unfair_lock_s connectionLock; // ivar: _connectionLock
@property (readonly, nonatomic) SHShazamKitServiceConnectionProvider *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SHShazamKitServiceConnectionClient *shazamKitClient; // ivar: _shazamKitClient
@property (readonly) Class superclass;


-(id)initWithConnectionProvider:(id)arg0 ;
-(id)matcherDelegateErrorHandlerForSignature:(SEL)arg0 ;
-(void)_libraryInfoWithCompletionHandler:(id)arg0 ;
-(void)_queryLibraryWithParameters:(id)arg0 completionHandler:(id)arg1 ;
-(void)_synchronizeSnapshot:(id)arg0 startCondition:(id)arg1 ;
-(void)attachDefaultConnectionHandlers;
-(void)dealloc;
-(void)matcher:(id)arg0 didProduceResponse:(id)arg1 ;
-(void)mediaItemForShazamID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendEventSignal:(id)arg0 ;
-(void)startRecognitionForRequest:(id)arg0 ;
-(void)stopRecognition;
-(void)stopRecognitionForRequestID:(id)arg0 ;
-(void)tearDownConnection;


@end


#endif