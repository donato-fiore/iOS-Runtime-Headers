// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPBRIGHTNESSCONTRASTEFFECT_H
#define MFPBRIGHTNESSCONTRASTEFFECT_H



#import "MFPEffect.h"

@interface MFPBrightnessContrastEffect : MFPEffect {
    int mBrightness;
    int mContrast;
}




+(id)GUID;
-(id)initWithBrightness:(int)arg0 contrast:(int)arg1 ;


@end


#endif