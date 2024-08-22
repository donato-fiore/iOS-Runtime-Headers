// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACCOUNTDETAILTOTPTABLEVIEWCELL_H
#define SFACCOUNTDETAILTOTPTABLEVIEWCELL_H

@class UITableViewCell, UILabel, WBSTOTPGenerator, NSTimer, UIListContentView, UIStackView;



@interface SFAccountDetailTOTPTableViewCell : UITableViewCell {
    UILabel *_subtitleLabel;
    WBSTOTPGenerator *_generator;
    NSTimer *_codeUpdateTimer;
    UIListContentView *_verificationCodeContentView;
    UIStackView *_labelStackView;
}




-(id)_attributedSubtitleString;
-(id)_attributedSubtitleStringWithRemainingSeconds:(NSUInteger)arg0 ;
-(id)_formattedCode;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_startTOTPTimer;
-(void)_updateCodeAndLabels;
-(void)configureWithGenerator:(id)arg0 ;
-(void)dealloc;


@end


#endif