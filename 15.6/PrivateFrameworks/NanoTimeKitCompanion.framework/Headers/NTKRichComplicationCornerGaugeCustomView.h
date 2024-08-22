// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONCORNERGAUGECUSTOMVIEW_H
#define NTKRICHCOMPLICATIONCORNERGAUGECUSTOMVIEW_H

@class UIView;


#import "NTKRichComplicationCornerBaseGaugeView.h"

@interface NTKRichComplicationCornerGaugeCustomView : NTKRichComplicationCornerBaseGaugeView {
    UIView *_outerView;
}




-(id)_outerView;
-(id)init;
-(void)layoutSubviews;


@end


#endif