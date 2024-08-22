// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSASSETTYPE_H
#define TTSASSETTYPE_H



#import "TTSStringEnum.h"

@interface TTSAssetType : TTSStringEnum



+(id)combinedVoice;
+(id)customVoice;
+(id)gryphonVoice;
+(id)macintalkVoice;
+(id)vocalizerVoice;
+(id)voiceResources;
-(id)pathComponent;


@end


#endif