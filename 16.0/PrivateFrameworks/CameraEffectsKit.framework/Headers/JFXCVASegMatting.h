// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCVASEGMATTING_H
#define JFXCVASEGMATTING_H



#import "JFXMatting.h"

@interface JFXCVASegMatting : JFXMatting {
    JFXMatting *_impl;
}




+(struct CGSize )mattingDepthInputSize;
-(BOOL)isValidForCameraFrameSet:(id)arg0 ;
-(id)initForFrameSet:(id)arg0 ;
-(void)alphaMatteForFrameSet:(id)arg0 mattingPerfState:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif