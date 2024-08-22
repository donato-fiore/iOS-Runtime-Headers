// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPTINTEFFECT_H
#define MFPTINTEFFECT_H



#import "MFPEffect.h"

@interface MFPTintEffect : MFPEffect {
    int mHue;
    int mAmount;
}




+(id)GUID;
-(id)initWithHue:(int)arg0 amount:(int)arg1 ;


@end


#endif