// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIREPLICADEBUGVIEW_H
#define PBUIREPLICADEBUGVIEW_H

@class UIView, UILabel, UIColor, NSString;



@interface PBUIReplicaDebugView : UIView {
    UILabel *_labelView;
    UIView *_borderView;
    BOOL _labelViewNeedsLayout;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *title;


+(BOOL)requiresConstraintBasedLayout;
+(id)debugFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif