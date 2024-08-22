// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILESLIDERMARKVIEW_H
#define AVMOBILESLIDERMARKVIEW_H

@class UIView, CALayer, UIColor;



@interface AVMobileSliderMarkView : UIView {
    CALayer *_markColorLayer;
}


@property (retain, nonatomic) UIColor *markColor; // ivar: _markColor


-(id)init;
-(void)layoutSubviews;


@end


#endif