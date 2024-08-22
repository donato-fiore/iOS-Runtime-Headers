// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSFERAGENTCONTROLLER_H
#define IMTRANSFERAGENTCONTROLLER_H

@class MMCSController;

#import <Foundation/Foundation.h>


@interface IMTransferAgentController : NSObject

@property (retain, nonatomic) MMCSController *controller; // ivar: _controller


+(id)sharedInstance;
-(BOOL)_isAllowlistedURL:(id)arg0 ;
-(BOOL)_shouldRetryUploadGivenMMCSError:(id)arg0 retryAttemptCount:(NSUInteger)arg1 ;
-(id)_defaultMMCSAllowlist;
// -(void)_receiveFileTransfer:(id)arg0 topic:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 allowReauthorize:(BOOL)arg6 fileSize:(NSUInteger)arg7 sourceAppID:(id)arg8 progressBlock:(id)arg9 completionBlock:(unk)arg10  ;
// -(void)_sendFilePath:(id)arg0 topic:(id)arg1 transferID:(id)arg2 sourceAppID:(id)arg3 retryAttemptCount:(NSUInteger)arg4 userInfo:(id)arg5 progressBlock:(id)arg6 completionBlock:(unk)arg7  ;
-(void)cancelSendTransferID:(id)arg0 ;
-(void)dealloc;
// -(void)receiveFileTransfer:(id)arg0 topic:(id)arg1 path:(id)arg2 requestURLString:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 fileSize:(NSUInteger)arg6 sourceAppID:(id)arg7 progressBlock:(id)arg8 completionBlock:(unk)arg9  ;
// -(void)sendFilePath:(id)arg0 topic:(id)arg1 transferID:(id)arg2 sourceAppID:(id)arg3 userInfo:(id)arg4 progressBlock:(id)arg5 completionBlock:(unk)arg6  ;


@end


#endif