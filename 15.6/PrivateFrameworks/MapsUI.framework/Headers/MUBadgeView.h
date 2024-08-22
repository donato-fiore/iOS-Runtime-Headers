// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUBADGEVIEW_H
#define MUBADGEVIEW_H

@class UIView, UILabel, UIVisualEffectView, NSString;



@interface MUBadgeView : UIView {
    UILabel *_label;
    UIVisualEffectView *_blurView;
}


@property (retain, nonatomic) NSString *badgeString;


-(id)attributionFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;


@end


#endif