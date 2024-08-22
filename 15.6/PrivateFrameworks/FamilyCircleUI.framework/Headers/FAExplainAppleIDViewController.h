// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAEXPLAINAPPLEIDVIEWCONTROLLER_H
#define FAEXPLAINAPPLEIDVIEWCONTROLLER_H

@class UIViewController, UIScrollView, UIView, UILabel, UIButton;



@interface FAExplainAppleIDViewController : UIViewController {
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_goToSettingsButton;
}


@property (nonatomic) BOOL shouldShowInviteeInstructions; // ivar: _shouldShowInviteeInstructions


-(CGFloat)_heightForText:(id)arg0 constrainedToWidth:(CGFloat)arg1 ;
-(void)_updateFonts;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif