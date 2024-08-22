// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMBUIALERTHEADERVIEW_H
#define NMBUIALERTHEADERVIEW_H

@class UIView, UIStackView, UILabel;



@interface NMBUIAlertHeaderView : UIView {
    UIView *_backgroundView;
    UIStackView *_contentStackView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}


@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UILabel *textLabel;


-(id)_backgroundView;
-(id)_contentStackView;
-(void)tintColorDidChange;


@end


#endif