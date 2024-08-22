// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI18CALLTOACTIONBUTTON_H
#define _TTC9SEYMOURUI18CALLTOACTIONBUTTON_H

@class UIButton;



@interface _TtC9SeymourUI18CallToActionButton : UIButton {
    ? currentState;
    ? indefiniteSpinner;
    ? defaults;
    ? layout;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;


@end


#endif