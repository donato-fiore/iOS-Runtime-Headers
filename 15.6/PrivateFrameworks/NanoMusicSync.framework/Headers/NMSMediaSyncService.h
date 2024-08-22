// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIASYNCSERVICE_H
#define NMSMEDIASYNCSERVICE_H

@class IDSService, NSMutableDictionary, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSMediaSyncService : NSObject <IDSServiceDelegate>

 {
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_idsActionHandlerQueue;
    NSMutableDictionary *_downloadCompletionHandlersByIDSMsgID;
    NSMutableDictionary *_removeCompletionHandlersByIDSMsgID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_mediaSyncServiceDescriptionFromDownloadResult:(NSInteger)arg0 ;
-(BOOL)_sendServiceDownloadResult:(int)arg0 idsMessageID:(id)arg1 ;
-(BOOL)_sendServiceRemoveResult:(int)arg0 idsMessageID:(id)arg1 ;
-(BOOL)_sendServiceResultMessage:(id)arg0 idsMessageID:(id)arg1 ;
-(NSInteger)_convertIDSServiceResultToMediaSyncServiceResult:(int)arg0 ;
-(id)_convertPersistentID:(NSInteger)arg0 containerType:(int)arg1 ;
-(id)_defaultPairedDevice;
-(id)_idsMessageOptions;
-(id)_sendDownloadMessage:(id)arg0 completionHandler:(id)arg1 ;
-(id)_sendProtoBufForMessage:(id)arg0 messageType:(NSInteger)arg1 ;
-(id)_sendRemoveMessage:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(int)_convertKeepLocalValidationResultToIDSServiceResult:(NSUInteger)arg0 ;
-(int)_convertMediaSyncServiceContainerToIDSContainer:(NSInteger)arg0 ;
-(int)_convertToInternalDownloadIntent:(NSInteger)arg0 ;
-(void)_callAndRemoveCompletionHandlerForDownloadWithResult:(NSInteger)arg0 idsMessageID:(id)arg1 ;
-(void)_callAndRemoveCompletionHandlerForRemoveWithResult:(BOOL)arg0 idsMessageID:(id)arg1 ;
-(void)_cleanupDownloadCompletionHandlerWithID:(id)arg0 ;
-(void)_cleanupRemoveCompletionHandlerWithID:(id)arg0 ;
-(void)_downloadContainerWithPID:(NSInteger)arg0 containerType:(int)arg1 intent:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_downloadWithPersistentID:(NSInteger)arg0 containerType:(int)arg1 intent:(int)arg2 idsMessageID:(id)arg3 ;
-(void)_handleDownloadMedia:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_handleDownloadMediaResult:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_handleRemoveMedia:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_handleRemoveMediaResult:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_performFailSafeWithIDSMessageIdentifier:(id)arg0 messageType:(NSInteger)arg1 ;
-(void)_removeContainerWithPID:(NSInteger)arg0 containerType:(int)arg1 completionHandler:(id)arg2 ;
-(void)_runKeepLocalEnabled:(BOOL)arg0 withAssetPID:(NSInteger)arg1 containerType:(int)arg2 onCharger:(BOOL)arg3 idsMessageID:(id)arg4 completionHandler:(id)arg5 ;
-(void)_setProtobufHandlers;
-(void)dealloc;
-(void)downloadContainerWithPID:(NSInteger)arg0 type:(NSInteger)arg1 intent:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)removeContainerWithPID:(NSInteger)arg0 type:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif