// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOMIXEFFECTPARAMETERS_H
#define AVAUDIOMIXEFFECTPARAMETERS_H

@class AVAudioMixEffectParametersInternal;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVAudioMixEffectParameters : NSObject <NSCopying>

 {
    AVAudioMixEffectParametersInternal *_audioEffect;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif