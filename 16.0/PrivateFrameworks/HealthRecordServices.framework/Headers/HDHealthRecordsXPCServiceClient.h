// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDSXPCSERVICECLIENT_H
#define HDHEALTHRECORDSXPCSERVICECLIENT_H

@class _HKXPCConnection, NSString;
@protocol _HKXPCExportable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHealthRecordsXPCServiceClient : NSObject <_HKXPCExportable>

 {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_actionCompletionOnClientQueue:(SEL)arg0 ;
-(id)_objectCompletionOnClientQueue:(SEL)arg0 ;
-(id)exportedInterface;
-(id)init;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)remoteInterface;
-(id)rulesVersionForFHIRDocumentExtractionWithError:(*id)arg0 ;
-(id)supportedFHIRConfigurationWithError:(*id)arg0 ;
// -(void)_performWithProxyHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_synchronousPerformWithProxyHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)executeFHIRExtractionRequest:(id)arg0 completion:(id)arg1 ;
-(void)executeFHIRReferenceExtractionRequest:(id)arg0 completion:(id)arg1 ;
-(void)optInDataForFHIRDocumentWithRequest:(id)arg0 redactor:(id)arg1 completion:(id)arg2 ;
-(void)preprocessSignedClinicalData:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)preprocessSignedClinicalDataFHIRResourceObject:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)processOriginalSignedClinicalDataRecords:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)processSignedClinicalDataContextCollection:(id)arg0 completion:(id)arg1 ;
-(void)reprocessOriginalSignedClinicalDataRecords:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif