// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLVIDEOTRANSCODER_H
#define PLVIDEOTRANSCODER_H


#import <Foundation/Foundation.h>


@interface PLVideoTranscoder : NSObject



+(id)generatePosterFrameForAVAsset:(id)arg0 maxSize:(struct CGSize )arg1 error:(*id)arg2 ;
+(id)generatePosterFrameForVideoAtURL:(id)arg0 maxSize:(struct CGSize )arg1 error:(*id)arg2 ;
+(void)transcodeVideo:(id)arg0 outputURL:(id)arg1 presetName:(id)arg2 outputFileType:(id)arg3 metadata:(id)arg4 completionHandler:(id)arg5 ;
+(void)transcodeVideoWithObjectBuilder:(id)arg0 outputURL:(id)arg1 startTime:(struct ? )arg2 endTime:(struct ? )arg3 presetName:(id)arg4 outputFileType:(id)arg5 metadata:(id)arg6 completionHandler:(id)arg7 ;


@end


#endif