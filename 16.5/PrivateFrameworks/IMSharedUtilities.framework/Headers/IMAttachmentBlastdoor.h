// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMATTACHMENTBLASTDOOR_H
#define IMATTACHMENTBLASTDOOR_H


#import <Foundation/Foundation.h>


@interface IMAttachmentBlastdoor : NSObject



+(BOOL)supportsFeature:(id)arg0 ;
+(BOOL)supportsSyncXPC;
+(id)blastdoorInterface;
+(id)logger;
+(void)defuseBalloonPluginPayloadData:(id)arg0 withBundleIdentifier:(id)arg1 completionBlock:(id)arg2 ;
+(void)generateAnimatedImagePreview:(id)arg0 maxPixelDimension:(CGFloat)arg1 index:(NSInteger)arg2 maxCount:(NSInteger)arg3 withCompletionBlock:(id)arg4 ;
+(void)generateAudioPreview:(id)arg0 withCompletionBlock:(id)arg1 ;
+(void)generateMoviePreview:(id)arg0 maxPxWidth:(CGFloat)arg1 minThumbnailPxSize:(struct CGSize )arg2 scale:(CGFloat)arg3 withCompletionBlock:(id)arg4 ;
+(void)generateNickname:(id)arg0 forRecordID:(id)arg1 withKey:(id)arg2 completionBlock:(id)arg3 ;
+(void)generatePassPreview:(id)arg0 withCompletionBlock:(id)arg1 ;
+(void)generatePreview:(id)arg0 maxPxWidth:(CGFloat)arg1 scale:(CGFloat)arg2 withCompletionBlock:(id)arg3 ;
+(void)getMetadataForAnimatedImage:(id)arg0 maxCount:(NSInteger)arg1 withCompletionBlock:(id)arg2 ;
+(void)sendBalloonPluginPayloadData:(id)arg0 withBundleIdentifier:(id)arg1 completionBlock:(id)arg2 ;
+(void)sendData:(id)arg0 forPreviewType:(unsigned char)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif