// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CRKDEBUGOVERLAYVIEW_H
#define _CRKDEBUGOVERLAYVIEW_H

@class CRKHitTestPassThroughView, UILabel, UIColor, NSString;



@interface _CRKDebugOverlayView : CRKHitTestPassThroughView {
    UILabel *_label;
}


@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSString *debugText; // ivar: _debugText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif