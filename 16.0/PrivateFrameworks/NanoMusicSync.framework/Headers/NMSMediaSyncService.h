// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIASYNCSERVICE_H
#define NMSMEDIASYNCSERVICE_H

@class IDSService, NSMutableDictionary, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSMediaSyncService : NSObject <IDSServiceDelegate>

 {
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_idsActionHandlerQueue;
    NSMutableDictionary *_completionsByIDSMsgID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_sendServiceResponse:(NSUInteger)arg0 idsMessageID:(id)arg1 timeout:(CGFloat)arg2 ;
-(BOOL)_sendServiceResultMessage:(id)arg0 idsMessageID:(id)arg1 timeout:(CGFloat)arg2 ;
-(Class)_modelClassForContainerType:(int)arg0 ;
-(NSInteger)_convertMediaSyncServiceKeepLocalEnableState:(int)arg0 ;
-(NSInteger)_nsQOSFromNMSQOS:(int)arg0 ;
-(NSUInteger)_convertMediaSyncServiceKeepLocalCellularPolicy:(int)arg0 ;
-(NSUInteger)_convertMediaSyncServiceKeepLocalPowerPolicy:(int)arg0 ;
-(NSUInteger)_nmsKeepLocalExceptionFromNMSSyncServiceException:(int)arg0 ;
-(id)_defaultPairedDevice;
-(id)_idsMessageOptionsWithTimeout:(CGFloat)arg0 ;
-(id)_midDataFromModelObject:(id)arg0 ;
-(id)_sendMessage:(id)arg0 messageType:(NSInteger)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;
-(id)_sendProtoBufForMessage:(id)arg0 messageType:(NSInteger)arg1 timeout:(CGFloat)arg2 ;
-(id)init;
-(int)_containerTypeForModelObject:(id)arg0 ;
-(int)_convertMPModelObjectKeepLocalEnableState:(NSInteger)arg0 ;
-(int)_convertNMSKeepLocalRequestCellularPolicy:(NSUInteger)arg0 ;
-(int)_convertNMSKeepLocalRequestPowerPolicy:(NSUInteger)arg0 ;
-(int)_nmsQOSFromNSQOS:(NSInteger)arg0 ;
-(void)_callAndRemoveCompletionWithResult:(NSUInteger)arg0 idsMessageID:(id)arg1 ;
-(void)_cleanupCompletionWithID:(id)arg0 ;
-(void)_handleMediaSyncServiceKeepLocalRequest:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_handleMediaSyncServiceKeepLocalResponse:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_performFailSafeWithIDSMessageIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)_setMessage:(id)arg0 withValidatorException:(NSUInteger)arg1 ;
-(void)_setProtobufHandlers;
-(void)dealloc;
-(void)performKeepLocalRequestWithEnableState:(NSInteger)arg0 modelObject:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif