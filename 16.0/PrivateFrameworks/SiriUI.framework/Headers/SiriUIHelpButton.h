// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIHELPBUTTON_H
#define SIRIUIHELPBUTTON_H



#import "SiriUIContentButton.h"

@interface SiriUIHelpButton : SiriUIContentButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}




+(id)buttonWithHelpImageMask;
-(CGFloat)_targetAlpha;
-(void)pulse;
-(void)setEmphasized:(BOOL)arg0 ;


@end


#endif