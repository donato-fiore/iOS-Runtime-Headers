// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTRANSCODINGAGENTCONTROLLER_H
#define IMTRANSCODINGAGENTCONTROLLER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMTranscodingAgentController : NSObject {
    NSArray *_transcoders;
    NSArray *_fallbackTranscoders;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_previewGenerationQueue;
}




+(id)sharedInstance;
-(BOOL)shouldProcessFileTransfer:(id)arg0 utiType:(id)arg1 transcoderUserInfo:(id)arg2 target:(NSInteger)arg3 allowUnfilteredUTIs:(id)arg4 fileSizeLimit:(NSUInteger)arg5 ;
-(id)_findTranscoderForUTI:(id)arg0 ;
-(id)init;
-(void)_registerTranscoders;
-(void)decodeiMessageAppPayload:(id)arg0 bundleID:(id)arg1 completionBlock:(id)arg2 ;
-(void)generatePreview:(id)arg0 previewURL:(id)arg1 balloonBundleID:(id)arg2 constraints:(struct IMPreviewConstraints )arg3 completionBlock:(id)arg4 ;
-(void)generatePreviewMetadata:(id)arg0 destinationURL:(id)arg1 constraints:(struct IMPreviewConstraints )arg2 completionBlock:(id)arg3 ;
-(void)generateSafeRender:(id)arg0 constraints:(struct IMPreviewConstraints )arg1 completionBlock:(id)arg2 ;
-(void)generateSnapshotForMessageGUID:(id)arg0 payloadURL:(id)arg1 balloonBundleID:(id)arg2 isFromMe:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)sizePreview:(id)arg0 constraints:(struct IMPreviewConstraints )arg1 completionBlock:(id)arg2 ;
-(void)transcodeFileTransferContents:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 fallback:(BOOL)arg8 representations:(NSInteger)arg9 completionBlock:(id)arg10 ;
-(void)transcodeFileTransferData:(id)arg0 balloonBundleID:(id)arg1 attachments:(id)arg2 fallBack:(BOOL)arg3 completionBlock:(id)arg4 ;


@end


#endif