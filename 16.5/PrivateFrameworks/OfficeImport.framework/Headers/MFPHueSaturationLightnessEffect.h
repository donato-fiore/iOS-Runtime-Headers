// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPHUESATURATIONLIGHTNESSEFFECT_H
#define MFPHUESATURATIONLIGHTNESSEFFECT_H



#import "MFPEffect.h"

@interface MFPHueSaturationLightnessEffect : MFPEffect {
    int mHueChange;
    int mSaturationChange;
    int mLightnessChange;
}




+(id)GUID;
-(id)initWithHueChange:(int)arg0 saturationChange:(int)arg1 lightnessChange:(int)arg2 ;


@end


#endif