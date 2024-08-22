// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUBADGEVIEW_H
#define MUBADGEVIEW_H

@class UIView, NSString;



@interface MUBadgeView : UIView {
    ? label;
    ? labelVibrantView;
    ? blurView;
}


@property (nonatomic, copy) NSString *badgeString;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif