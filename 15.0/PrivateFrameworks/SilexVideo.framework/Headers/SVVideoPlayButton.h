// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SVVIDEOPLAYBUTTON_H
#define SVVIDEOPLAYBUTTON_H



#import "SVButton.h"

@interface SVVideoPlayButton : SVButton



+(id)playImage;
-(BOOL)isAccessibilityElement;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)displayAsPaused;
-(void)layoutSubviews;
-(void)updateBackgroundColor;


@end


#endif