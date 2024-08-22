// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIFRAMEANIMATION_H
#define UIFRAMEANIMATION_H



#import "UIAnimation.h"

@interface UIFrameAnimation : UIAnimation {
    CGRect _startFrame;
    CGRect _endFrame;
    int _fieldsToChange;
}




-(id)initWithTarget:(id)arg0 ;
-(struct CGRect )endFrame;
-(void)setEndFrame:(struct CGRect )arg0 ;
-(void)setProgress:(float)arg0 ;
-(void)setSignificantRectFields:(int)arg0 ;
-(void)setStartFrame:(struct CGRect )arg0 ;


@end


#endif