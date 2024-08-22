// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMFALLBACKTRANSCODER_H
#define IMFALLBACKTRANSCODER_H


#import <Foundation/Foundation.h>

#import "IMFallbackTranscoder_AudioMessage.h"

@interface IMFallbackTranscoder : NSObject

@property (retain, nonatomic) IMFallbackTranscoder_AudioMessage *audioTranscoder; // ivar: _audioTranscoder


-(id)_findPluginFallbackEncoder:(id)arg0 withBalloonBundleID:(id)arg1 ;
-(void)_transcodeAudioMessageContents:(id)arg0 utiType:(id)arg1 completionBlock:(id)arg2 ;
-(void)_transcodeAutoloopContents:(id)arg0 utiType:(id)arg1 completionBlock:(id)arg2 ;
-(void)dealloc;
-(void)transcodeFileTransferContents:(id)arg0 utiType:(id)arg1 transcoderUserInfo:(id)arg2 completionBlock:(id)arg3 ;
-(void)transcodeFileTransferData:(id)arg0 balloonBundleID:(id)arg1 attachments:(id)arg2 inFileURL:(id)arg3 fallBack:(BOOL)arg4 completionBlock:(id)arg5 ;


@end


#endif