// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPBLUREFFECT_H
#define MFPBLUREFFECT_H



#import "MFPEffect.h"

@interface MFPBlurEffect : MFPEffect {
    float mRadius;
    BOOL mExpandEdge;
}




+(id)GUID;
-(id)initWithRadius:(float)arg0 expandEdge:(BOOL)arg1 ;


@end


#endif