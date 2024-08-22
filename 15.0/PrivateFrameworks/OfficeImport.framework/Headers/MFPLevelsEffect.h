// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPLEVELSEFFECT_H
#define MFPLEVELSEFFECT_H



#import "MFPEffect.h"

@interface MFPLevelsEffect : MFPEffect {
    int mHighlight;
    int mMidtone;
    int mShadow;
}




+(id)GUID;
-(id)initWithHighlight:(int)arg0 midtone:(int)arg1 shadow:(int)arg2 ;


@end


#endif