// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSASSETSOURCE_H
#define TTSASSETSOURCE_H



#import "TTSStringEnum.h"

@interface TTSAssetSource : TTSStringEnum



+(id)adhoc;
+(id)macosLegacy;
+(id)mobileAsset;
+(id)preinstalled;
+(id)turiTrial;


@end


#endif