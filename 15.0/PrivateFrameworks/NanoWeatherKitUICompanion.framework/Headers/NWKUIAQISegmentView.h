// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWKUIAQISEGMENTVIEW_H
#define NWKUIAQISEGMENTVIEW_H

@class UIView, CALayer, UIColor;



@interface NWKUIAQISegmentView : UIView {
    CGFloat _lastLayoutHeight;
    CALayer *_bodyLayer;
    CALayer *_capLayer;
}


@property (readonly, getter=isActive) BOOL active; // ivar: _active
@property (readonly) UIColor *color; // ivar: _color
@property (readonly) NSUInteger mode; // ivar: _mode


-(id)initWithColor:(id)arg0 active:(BOOL)arg1 mode:(NSUInteger)arg2 ;
-(void)layoutSubviews;


@end


#endif