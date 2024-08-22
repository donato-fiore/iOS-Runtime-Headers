// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKATTACHMENTSTORE_H
#define HKATTACHMENTSTORE_H

@class NSMutableDictionary, NSString;
@protocol _HKXPCExportable, HKAttachmentStoreClientInterface;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKAttachmentStore : NSObject <_HKXPCExportable, HKAttachmentStoreClientInterface>

 {
    NSMutableDictionary *_attachmentDataHandlersByIdentifier;
    NSMutableDictionary *_dataStreamProgressByIdentifier;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(NSUInteger)maxFileSize;
+(id)clientInterface;
+(id)serverInterface;
-(BOOL)_validateInputWithObject:(id)arg0 contentType:(id)arg1 URL:(id)arg2 error:(*id)arg3 ;
-(id)exportedInterface;
-(id)getDataForAttachment:(id)arg0 completion:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(id)streamDataForAttachment:(id)arg0 dataHandler:(id)arg1 ;
-(void)addAttachmentToObject:(id)arg0 name:(id)arg1 contentType:(id)arg2 URL:(id)arg3 metadata:(id)arg4 completion:(id)arg5 ;
-(void)addAttachmentWithName:(id)arg0 contentType:(id)arg1 URL:(id)arg2 toObjectWithIdentifier:(id)arg3 schemaIdentifier:(id)arg4 attachmentMetadata:(id)arg5 referenceMetadata:(id)arg6 completion:(id)arg7 ;
-(void)addReferenceWithAttachment:(id)arg0 toObjectWithIdentifier:(id)arg1 schemaIdentifier:(id)arg2 metadata:(id)arg3 completion:(id)arg4 ;
-(void)attachmentReferencesForObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)clientRemote_streamDataForAttachment:(id)arg0 dataChunk:(id)arg1 error:(id)arg2 done:(BOOL)arg3 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)getAttachmentsForObject:(id)arg0 completion:(id)arg1 ;
-(void)getDataChunkForAttachment:(id)arg0 chunkSize:(NSUInteger)arg1 offset:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)removeAttachment:(id)arg0 fromObject:(id)arg1 completion:(id)arg2 ;
-(void)removeReference:(id)arg0 schemaIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif