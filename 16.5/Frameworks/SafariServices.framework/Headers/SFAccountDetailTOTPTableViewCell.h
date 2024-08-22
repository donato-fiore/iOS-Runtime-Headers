// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFACCOUNTDETAILTOTPTABLEVIEWCELL_H
#define SFACCOUNTDETAILTOTPTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIStackView, WBSTOTPGenerator, NSTimer;



@interface SFAccountDetailTOTPTableViewCell : UITableViewCell {
    UILabel *_subtitleLabel;
    UILabel *_verificationCodeLabel;
    UIStackView *_titleAndVerificationCodeStackView;
    WBSTOTPGenerator *_generator;
    NSTimer *_codeUpdateTimer;
}




-(id)_attributedSubtitleString;
-(id)_attributedSubtitleStringWithRemainingSeconds:(NSUInteger)arg0 ;
-(id)_formattedCode;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_startTOTPTimer;
-(void)_updateCodeAndLabels;
-(void)_updateTitleAndVerificationCodeStackView;
-(void)configureWithGenerator:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif