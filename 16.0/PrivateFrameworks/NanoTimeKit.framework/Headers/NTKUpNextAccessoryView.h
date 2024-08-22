// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUPNEXTACCESSORYVIEW_H
#define NTKUPNEXTACCESSORYVIEW_H

@class UIView, REAccessoryDescription, CLKUIColoringLabel;



@interface NTKUpNextAccessoryView : UIView {
    REAccessoryDescription *_accessoryDescription;
    CLKUIColoringLabel *_label;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(void)configureWithDescription:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif