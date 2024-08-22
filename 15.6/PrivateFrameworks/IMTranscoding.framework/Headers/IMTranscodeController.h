// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCODECONTROLLER_H
#define IMTRANSCODECONTROLLER_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMTranscodeController : NSObject {
    NSObject<OS_xpc_object> *_connection;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue


+(id)sharedInstance;
-(BOOL)_connect;
-(id)init;
// -(void)_decodeiMessageAppPayload:(id)arg0 bundleID:(id)arg1 retries:(NSUInteger)arg2 completionBlock:(id)arg3 blockUntilReply:(unk)arg4  ;
-(void)_disconnected;
// -(void)_generateMetadata:(id)arg0 metadataURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 retries:(NSUInteger)arg3 completionBlock:(id)arg4 blockUntilReply:(unk)arg5  ;
// -(void)_generatePreview:(id)arg0 previewURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 retries:(NSUInteger)arg3 balloonBundleID:(id)arg4 completionBlock:(id)arg5 blockUntilReply:(unk)arg6  ;
-(void)_transcodeFileTransferContents:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(NSInteger)arg8 fallBack:(BOOL)arg9 retries:(int)arg10 completionBlock:(id)arg11 ;
-(void)_transcodeFileTransferPayloadData:(id)arg0 balloonBundleID:(id)arg1 attachments:(id)arg2 retries:(NSUInteger)arg3 fallBack:(BOOL)arg4 completionBlock:(id)arg5 ;
-(void)_validateFileTransfer:(id)arg0 utiType:(id)arg1 retries:(int)arg2 completionBlock:(id)arg3 ;
// -(void)_validateTextRenderingForMessage:(id)arg0 retries:(int)arg1 completionBlock:(id)arg2 blockUntilReply:(unk)arg3  ;
// -(void)decodeiMessageAppPayload:(id)arg0 bundleID:(id)arg1 completionBlock:(id)arg2 blockUntilReply:(unk)arg3  ;
-(void)generateMetadata:(id)arg0 metadataURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 completionBlock:(id)arg3 ;
// -(void)generateMetadata:(id)arg0 metadataURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 completionBlock:(id)arg3 blockUntilReply:(unk)arg4  ;
// -(void)generatePreview:(id)arg0 previewURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 balloonBundleID:(id)arg3 completionBlock:(id)arg4 blockUntilReply:(unk)arg5  ;
-(void)generatePreview:(id)arg0 previewURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 completionBlock:(id)arg3 ;
// -(void)generatePreview:(id)arg0 previewURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 completionBlock:(id)arg3 blockUntilReply:(unk)arg4  ;
-(void)generateSnapshotForMessageGUID:(id)arg0 payloadURL:(id)arg1 balloonBundleID:(id)arg2 isFromMe:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)sizePreview:(id)arg0 constraints:(struct IMPreviewConstraints )arg1 completionBlock:(id)arg2 ;
// -(void)sizePreview:(id)arg0 constraints:(struct IMPreviewConstraints )arg1 completionBlock:(id)arg2 blockUntilReply:(unk)arg3  ;
// -(void)sizePreview:(id)arg0 constraints:(struct IMPreviewConstraints )arg1 retries:(NSUInteger)arg2 completionBlock:(id)arg3 blockUntilReply:(unk)arg4  ;
-(void)transcodeFallbackFileTransferContents:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(NSInteger)arg8 completionBlock:(id)arg9 ;
-(void)transcodeFallbackFileTransferPayloadData:(id)arg0 balloonBundleID:(id)arg1 attachments:(id)arg2 completionBlock:(id)arg3 ;
-(void)transcodeFileTransferContents:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(NSInteger)arg8 completionBlock:(id)arg9 ;
-(void)transcodeLocalTransferPayloadData:(id)arg0 balloonBundleID:(id)arg1 completionBlock:(id)arg2 ;
-(void)validateFileTransfer:(id)arg0 utiType:(id)arg1 completionBlock:(id)arg2 ;
-(void)validateTextRenderingForMessage:(id)arg0 completionBlock:(id)arg1 ;
// -(void)validateTextRenderingForMessage:(id)arg0 completionBlock:(id)arg1 blockUntilReply:(unk)arg2  ;


@end


#endif