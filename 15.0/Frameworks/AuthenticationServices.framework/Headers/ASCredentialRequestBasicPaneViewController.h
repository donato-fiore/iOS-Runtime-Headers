// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCREDENTIALREQUESTBASICPANEVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTBASICPANEVIEWCONTROLLER_H

@class NSString, UIImage;


#import "ASCredentialRequestPaneViewController.h"
#import "ASCredentialRequestInfoLabelSubPane.h"

@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController {
    NSString *_title;
    NSString *_subtitle;
    UIImage *_icon;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}




-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;
-(void)_addBottomFillerView;
-(void)_addTopFillerViewWithMargin:(CGFloat)arg0 ;
-(void)_setUpIconView;
-(void)_setUpSubtitleLabel;
-(void)_setUpTitleLabel;
-(void)_setUpView;
-(void)updateSubtitle:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif