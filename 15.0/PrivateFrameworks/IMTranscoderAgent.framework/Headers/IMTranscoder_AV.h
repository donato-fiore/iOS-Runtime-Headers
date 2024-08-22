// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMTRANSCODER_AV_H
#define IMTRANSCODER_AV_H



#import "IMTranscoder.h"

@interface IMTranscoder_AV : IMTranscoder



+(id)supportedUTIs;
-(BOOL)_isHEVCVideo:(id)arg0 ;
-(NSInteger)shouldTranscodeTransfer:(id)arg0 transcoderUserInfo:(id)arg1 target:(NSInteger)arg2 utiType:(id)arg3 allowUnfilteredUTIs:(id)arg4 fileSizeLimit:(NSUInteger)arg5 ;
-(NSUInteger)_fileSizeForTransfer:(id)arg0 ;
-(void)_transcodeVideoAsync:(id)arg0 target:(NSInteger)arg1 maxBytes:(NSUInteger)arg2 removeAlpha:(BOOL)arg3 preserveHEVC:(BOOL)arg4 userInfo:(id)arg5 completionHandler:(id)arg6 ;
-(void)transcodeFileTransfer:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(NSInteger)arg8 completionBlock:(id)arg9 ;
-(void)validateFileTransfer:(id)arg0 utiType:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif