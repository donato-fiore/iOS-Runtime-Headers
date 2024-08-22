// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONSTATUSCELL_H
#define PKTRANSACTIONSTATUSCELL_H

@class UITableViewCell, UILabel, UIButton, NSString, UIColor, NSAttributedString, NSURL;



@interface PKTransactionStatusCell : UITableViewCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryTitleLabel;
    UIButton *_secondaryTitleButton;
    id *_secondaryTitleButtonAction;
    UILabel *_secondaryValueLabel;
    BOOL _templateLayout;
}


@property (nonatomic) BOOL isBridge; // ivar: _isBridge
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) UIColor *primaryTextOverrideColor; // ivar: _primaryTextOverrideColor
@property (retain, nonatomic) UIColor *secondaryTextOverrideColor; // ivar: _secondaryTextOverrideColor
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSAttributedString *secondaryTitleAttributed; // ivar: _secondaryTitleAttributed
@property (copy, nonatomic) NSString *secondaryTitleLinkText; // ivar: _secondaryTitleLinkText
@property (copy, nonatomic) NSURL *secondaryTitleLinkURL; // ivar: _secondaryTitleLinkURL
@property (copy, nonatomic) NSString *secondaryValue; // ivar: _secondaryValue


-(BOOL)hasCompleteSecondaryLink;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateTextColors;
-(void)didPressSecondaryTitleButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif