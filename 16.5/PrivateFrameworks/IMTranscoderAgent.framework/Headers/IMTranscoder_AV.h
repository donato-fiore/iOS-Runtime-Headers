// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTRANSCODER_AV_H
#define IMTRANSCODER_AV_H



#import "IMTranscoder.h"

@interface IMTranscoder_AV : IMTranscoder



+(id)supportedUTIs;
-(BOOL)_isHEVCVideo:(id)arg0 ;
-(NSInteger)shouldTranscodeTransfer:(id)arg0 transcoderUserInfo:(id)arg1 target:(NSInteger)arg2 utiType:(id)arg3 allowUnfilteredUTIs:(id)arg4 fileSizeLimit:(NSUInteger)arg5 commonCapabilities:(id)arg6 ;
-(NSInteger)shouldTranscodeTransfer:(id)arg0 transcoderUserInfo:(id)arg1 target:(NSInteger)arg2 utiType:(id)arg3 allowUnfilteredUTIs:(id)arg4 isAnimojiV2:(BOOL)arg5 removeAlpha:(BOOL)arg6 isHDR:(BOOL)arg7 preserveHDR:(BOOL)arg8 isAA:(BOOL)arg9 preserveAA:(BOOL)arg10 fileSizeLimit:(NSUInteger)arg11 ;
-(NSUInteger)_fileSizeForTransfer:(id)arg0 ;
-(void)_transcodeVideoAsync:(id)arg0 target:(NSInteger)arg1 maxBytes:(NSUInteger)arg2 isAnimojiV2:(BOOL)arg3 removeAlpha:(BOOL)arg4 preserveHDR:(BOOL)arg5 isAA:(BOOL)arg6 preserveAA:(BOOL)arg7 userInfo:(id)arg8 completionHandler:(id)arg9 ;
-(void)transcodeFileTransfer:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(NSInteger)arg8 completionBlock:(id)arg9 ;


@end


#endif