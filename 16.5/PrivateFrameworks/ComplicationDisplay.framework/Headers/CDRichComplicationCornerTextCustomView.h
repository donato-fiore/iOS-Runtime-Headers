// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONCORNERTEXTCUSTOMVIEW_H
#define CDRICHCOMPLICATIONCORNERTEXTCUSTOMVIEW_H

@class UIView;


#import "CDRichComplicationCornerBaseTextView.h"

@interface CDRichComplicationCornerTextCustomView : CDRichComplicationCornerBaseTextView {
    UIView *_outerView;
}




-(CGFloat)_outerViewDiameter;
-(id)_outerView;
-(id)initWithFontFallback:(NSInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif