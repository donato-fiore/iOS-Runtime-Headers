// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALREQUESTBASICPANEVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTBASICPANEVIEWCONTROLLER_H

@class NSString, UIImage;


#import "ASCredentialRequestPaneViewController.h"
#import "ASCredentialRequestInfoLabelSubPane.h"

@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController {
    NSString *_title;
    NSInteger _titleStyle;
    NSString *_subtitle;
    NSInteger _subtitleStyle;
    UIImage *_icon;
    NSInteger _iconStyle;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}




-(BOOL)_useBoldTitleLayout;
-(CGFloat)_boldTitle_customSpacingAfterTitle;
-(CGFloat)_boldTitle_stackViewTopSpacing;
-(CGFloat)_customSpacingAfterIcon;
-(CGFloat)_customSpacingAfterSubtitle;
-(CGFloat)_customSpacingAfterTitle;
-(CGFloat)_stackViewTopSpacing;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 titleStyle:(NSInteger)arg1 subtitle:(id)arg2 subtitleStyle:(NSInteger)arg3 icon:(id)arg4 iconStyle:(NSInteger)arg5 ;
-(void)_setUpIconView;
-(void)_setUpSubtitleLabel;
-(void)_setUpTitleLabel;
-(void)updateSubtitle:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif