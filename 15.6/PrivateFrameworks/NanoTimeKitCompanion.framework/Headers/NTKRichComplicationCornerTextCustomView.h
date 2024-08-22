// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONCORNERTEXTCUSTOMVIEW_H
#define NTKRICHCOMPLICATIONCORNERTEXTCUSTOMVIEW_H

@class UIView;


#import "NTKRichComplicationCornerBaseTextView.h"

@interface NTKRichComplicationCornerTextCustomView : NTKRichComplicationCornerBaseTextView {
    UIView *_outerView;
}




-(CGFloat)_outerViewDiameter;
-(id)_outerView;
-(id)init;
-(void)layoutSubviews;


@end


#endif