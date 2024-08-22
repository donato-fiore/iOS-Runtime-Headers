// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKONBOARDINGBALLOONVIEW_H
#define CKONBOARDINGBALLOONVIEW_H

@class UIImage;


#import "CKTextBalloonView.h"

@interface CKOnboardingBalloonView : CKTextBalloonView

@property (retain, nonatomic) UIImage *largeBalloonImage; // ivar: _largeBalloonImage


-(void)prepareForDisplay;


@end


#endif