// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPCOLORBALANCEEFFECT_H
#define MFPCOLORBALANCEEFFECT_H



#import "MFPEffect.h"

@interface MFPColorBalanceEffect : MFPEffect {
    int mCyanRed;
    int mMagentaGreen;
    int mYellowBlue;
}




+(id)GUID;
-(id)initWithCyanRed:(int)arg0 magentaGreen:(int)arg1 yellowBlue:(int)arg2 ;


@end


#endif