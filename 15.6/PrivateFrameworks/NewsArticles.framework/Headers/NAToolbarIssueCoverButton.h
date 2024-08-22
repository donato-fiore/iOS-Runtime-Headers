// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NATOOLBARISSUECOVERBUTTON_H
#define NATOOLBARISSUECOVERBUTTON_H

@class UIButton;



@interface NAToolbarIssueCoverButton : UIButton {
    ? coverView;
    ? highlightView;
    ? highlightColor;
}


@property (nonatomic) CGRect accessibilityFrame;
@property (nonatomic) BOOL highlighted;


+(void)updateBarButtonItemWidth:(id)arg0 in:(id)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif