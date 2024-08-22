// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCODER_H
#define IMTRANSCODER_H


#import <Foundation/Foundation.h>


@interface IMTranscoder : NSObject



+(BOOL)shouldPreserveHDREncoding:(id)arg0 ;
+(BOOL)shouldUseHEIFEncoding:(id)arg0 sourceUTI:(id)arg1 ;
+(BOOL)supportsUTI:(id)arg0 ;
+(id)supportedUTIs;
-(BOOL)transcodeProcessingRequired:(NSInteger)arg0 ;
-(NSInteger)shouldTranscodeTransfer:(id)arg0 transcoderUserInfo:(id)arg1 target:(NSInteger)arg2 utiType:(id)arg3 allowUnfilteredUTIs:(id)arg4 fileSizeLimit:(NSUInteger)arg5 ;
-(void)transcodeFileTransfer:(id)arg0 utiType:(id)arg1 allowUnfilteredUTIs:(id)arg2 target:(NSInteger)arg3 sizes:(id)arg4 commonCapabilities:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(NSInteger)arg8 completionBlock:(id)arg9 ;
-(void)validateFileTransfer:(id)arg0 utiType:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif