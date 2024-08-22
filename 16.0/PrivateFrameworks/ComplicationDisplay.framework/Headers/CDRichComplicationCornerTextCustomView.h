// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDRICHCOMPLICATIONCORNERTEXTCUSTOMVIEW_H
#define CDRICHCOMPLICATIONCORNERTEXTCUSTOMVIEW_H

@class UIView;


#import "CDRichComplicationCornerBaseTextView.h"

@interface CDRichComplicationCornerTextCustomView : CDRichComplicationCornerBaseTextView {
    UIView *_outerView;
}




-(CGFloat)_outerViewDiameter;
-(id)_outerView;
-(id)init;
-(void)layoutSubviews;


@end


#endif