// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDATTACHMENTSTORESERVER_H
#define HDATTACHMENTSTORESERVER_H

@class HKAttachmentStoreTaskConfiguration, NSMutableDictionary, NSString;
@protocol HKAttachmentStoreServerInterface;


#import "HDStandardTaskServer.h"

@interface HDAttachmentStoreServer : HDStandardTaskServer <HKAttachmentStoreServerInterface>

 {
    HKAttachmentStoreTaskConfiguration *_configuration;
    NSMutableDictionary *_openReadersByAttachment;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_addAttachmentWithName:(id)arg0 contentTypeIdentifier:(id)arg1 fileHandle:(id)arg2 toObjectWithIdentifier:(id)arg3 attachmentMetadata:(id)arg4 referenceMetadata:(id)arg5 completion:(id)arg6 ;
-(void)remote_addReferenceWithAttachment:(id)arg0 toObjectWithIdentifier:(id)arg1 metadata:(id)arg2 completion:(id)arg3 ;
-(void)remote_attachmentReferencesForObjectIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_getDataChunkForAttachment:(id)arg0 chunkSize:(NSUInteger)arg1 offset:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)remote_removeAllReferencesWithAttachmentIdentifier:(id)arg0 objectIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)remote_streamDataForAttachment:(id)arg0 ;


@end


#endif