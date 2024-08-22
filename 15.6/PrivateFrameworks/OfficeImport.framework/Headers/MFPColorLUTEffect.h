// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPCOLORLUTEFFECT_H
#define MFPCOLORLUTEFFECT_H



#import "MFPEffect.h"

@interface MFPColorLUTEffect : MFPEffect {
    unsigned char mLutA;
    unsigned char mLutR;
    unsigned char mLutG;
    unsigned char mLutB;
}




+(id)GUID;
-(id)initWithLUTA:(unsigned char)arg0 LUTR:(unsigned char)arg1 LUTG:(unsigned char)arg2 LUTB:(unsigned char)arg3 ;


@end


#endif