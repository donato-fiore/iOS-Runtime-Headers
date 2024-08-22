// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDSLEGACYINGESTIONSERVICECLIENT_H
#define HDHEALTHRECORDSLEGACYINGESTIONSERVICECLIENT_H

@class _HKXPCConnection, NSString;
@protocol _HKXPCExportable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHealthRecordsLegacyIngestionServiceClient : NSObject <_HKXPCExportable>

 {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_objectCompletionOnClientQueue:(SEL)arg0 ;
-(id)_objectReturnOnClientQueue:(SEL)arg0 ;
-(id)exportedInterface;
-(id)init;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)remoteInterface;
// -(void)_performWithProxyHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)foo;
-(void)performDownloadRequest:(id)arg0 completion:(id)arg1 ;
-(void)pingWithCompletion:(id)arg0 ;


@end


#endif