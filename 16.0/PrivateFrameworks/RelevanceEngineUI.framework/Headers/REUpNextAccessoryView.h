// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REUPNEXTACCESSORYVIEW_H
#define REUPNEXTACCESSORYVIEW_H

@class UIView, REAccessoryDescription, UILabel, UIVisualEffectView;



@interface REUpNextAccessoryView : UIView {
    REAccessoryDescription *_accessoryDescription;
    UILabel *_label;
    UIVisualEffectView *_labelEffectView;
}




+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(id)viewForLastBaselineLayout;
-(void)configureWithDescription:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif