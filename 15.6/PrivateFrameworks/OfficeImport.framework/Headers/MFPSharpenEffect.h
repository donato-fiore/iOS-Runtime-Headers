// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPSHARPENEFFECT_H
#define MFPSHARPENEFFECT_H



#import "MFPEffect.h"

@interface MFPSharpenEffect : MFPEffect {
    float mAmount;
    float mRadius;
}




+(id)GUID;
-(id)initWithAmount:(float)arg0 radius:(float)arg1 ;


@end


#endif