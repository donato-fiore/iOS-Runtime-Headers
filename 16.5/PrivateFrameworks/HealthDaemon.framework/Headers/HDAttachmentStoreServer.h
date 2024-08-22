// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDATTACHMENTSTORESERVER_H
#define HDATTACHMENTSTORESERVER_H

@class NSMutableDictionary, NSString;
@protocol HKAttachmentStoreServerInterface;


#import "HDStandardTaskServer.h"

@interface HDAttachmentStoreServer : HDStandardTaskServer <HKAttachmentStoreServerInterface>

 {
    NSMutableDictionary *_openReadersByAttachment;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_addAttachmentWithName:(id)arg0 contentTypeIdentifier:(id)arg1 fileHandle:(id)arg2 toObjectWithIdentifier:(id)arg3 schemaIdentifier:(id)arg4 attachmentMetadata:(id)arg5 referenceMetadata:(id)arg6 completion:(id)arg7 ;
-(void)remote_addReferenceWithAttachment:(id)arg0 toObjectWithIdentifier:(id)arg1 schemaIdentifier:(id)arg2 metadata:(id)arg3 completion:(id)arg4 ;
-(void)remote_attachmentReferencesForObjectIdentifier:(id)arg0 schemaIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)remote_getDataChunkForAttachment:(id)arg0 chunkSize:(NSUInteger)arg1 offset:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)remote_removeAllReferencesWithAttachmentIdentifier:(id)arg0 objectIdentifier:(id)arg1 schemaIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)remote_streamDataForAttachment:(id)arg0 ;


@end


#endif