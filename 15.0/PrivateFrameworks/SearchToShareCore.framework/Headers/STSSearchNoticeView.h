// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSSEARCHNOTICEVIEW_H
#define STSSEARCHNOTICEVIEW_H

@class UIView, UILabel, UIButton, NSMutableArray, NSString, UIColor;



@interface STSSearchNoticeView : UIView {
    UILabel *_textLabel;
    UIButton *_continueButton;
    NSMutableArray *_constraints;
}


@property (nonatomic, getter=isContentCentered) BOOL contentCentered; // ivar: _contentCentered
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) id *continueButtonAction; // ivar: _continueButtonAction
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor;


-(id)init;
-(void)_continuePressed:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif