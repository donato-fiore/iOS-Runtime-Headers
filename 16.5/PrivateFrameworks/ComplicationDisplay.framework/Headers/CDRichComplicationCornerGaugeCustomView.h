// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONCORNERGAUGECUSTOMVIEW_H
#define CDRICHCOMPLICATIONCORNERGAUGECUSTOMVIEW_H

@class UIView;


#import "CDRichComplicationCornerBaseGaugeView.h"

@interface CDRichComplicationCornerGaugeCustomView : CDRichComplicationCornerBaseGaugeView {
    UIView *_outerView;
}




-(id)_outerView;
-(id)initWithFontFallback:(NSInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif