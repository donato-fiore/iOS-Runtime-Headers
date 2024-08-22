// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKSMALLCALLOUTPASSTHROUGHBUTTON_H
#define _MKSMALLCALLOUTPASSTHROUGHBUTTON_H

@class UIControl, UIView;



@interface _MKSmallCalloutPassthroughButton : UIControl {
    UIView *_highlightView;
}


@property (retain, nonatomic) UIControl *targetControl; // ivar: _targetControl


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif