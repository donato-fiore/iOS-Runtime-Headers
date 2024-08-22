// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMFALLBACKTRANSCODER_AUDIOMESSAGE_H
#define IMFALLBACKTRANSCODER_AUDIOMESSAGE_H


#import <Foundation/Foundation.h>


@interface IMFallbackTranscoder_AudioMessage : NSObject



-(id)_tmpOutputFileURL;
-(void)_failWithOSStatusErrorCode:(int)arg0 description:(id)arg1 completion:(id)arg2 ;
-(void)transcodeOpusFile:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif