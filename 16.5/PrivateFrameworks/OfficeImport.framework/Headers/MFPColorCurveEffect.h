// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPCOLORCURVEEFFECT_H
#define MFPCOLORCURVEEFFECT_H



#import "MFPEffect.h"

@interface MFPColorCurveEffect : MFPEffect {
    int mAdjustment;
    int mChannel;
    int mAdjustValue;
}




+(id)GUID;
-(id)initWithAdjustment:(int)arg0 channel:(int)arg1 adjustValue:(int)arg2 ;


@end


#endif