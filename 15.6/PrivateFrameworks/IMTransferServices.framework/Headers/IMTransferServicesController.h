// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSFERSERVICESCONTROLLER_H
#define IMTRANSFERSERVICESCONTROLLER_H


#import <Foundation/Foundation.h>


@interface IMTransferServicesController : NSObject



+(id)sharedInstance;
// -(void)_receiveFileTransfer:(id)arg0 topic:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 sourceAppID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(NSUInteger)arg9 progressBlock:(id)arg10 completionBlock:(unk)arg11  ;
// -(void)_sendFilePath:(id)arg0 topic:(id)arg1 userInfo:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 encryptFile:(BOOL)arg5 retries:(int)arg6 progressBlock:(id)arg7 completionBlock:(unk)arg8  ;
-(void)cancelSendTransferID:(id)arg0 ;
-(void)deleteAllPersonalNicknamesWithCompletion:(id)arg0 ;
-(void)getNicknameWithRecordID:(id)arg0 decryptionKey:(id)arg1 completionBlock:(id)arg2 ;
-(void)preWarmMMCSForOwnerID:(id)arg0 ;
// -(void)receiveFileTransfer:(id)arg0 topic:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 decryptionKey:(id)arg6 fileSize:(NSUInteger)arg7 progressBlock:(id)arg8 completionBlock:(unk)arg9  ;
// -(void)receiveFileTransfer:(id)arg0 topic:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 sourceAppID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(NSUInteger)arg8 progressBlock:(id)arg9 completionBlock:(unk)arg10  ;
// -(void)sendFilePath:(id)arg0 topic:(id)arg1 transferID:(id)arg2 encryptFile:(BOOL)arg3 progressBlock:(id)arg4 completionBlock:(unk)arg5  ;
// -(void)sendFilePath:(id)arg0 topic:(id)arg1 userInfo:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 progressBlock:(id)arg5 completionBlock:(unk)arg6  ;
// -(void)sendFilePath:(id)arg0 topic:(id)arg1 userInfo:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 encryptFile:(BOOL)arg5 progressBlock:(id)arg6 completionBlock:(unk)arg7  ;
-(void)setPersonalNickname:(id)arg0 oldRecordID:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif