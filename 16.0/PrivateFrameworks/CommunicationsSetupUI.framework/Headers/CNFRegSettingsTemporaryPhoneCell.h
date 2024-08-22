// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNFREGSETTINGSTEMPORARYPHONECELL_H
#define CNFREGSETTINGSTEMPORARYPHONECELL_H

@class PSTableCell, UILabel;



@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell

@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UILabel *expirationLabel; // ivar: _expirationLabel
@property (retain, nonatomic) UILabel *phoneNumberLabel; // ivar: _phoneNumberLabel


-(NSUInteger)daysUntilExpiration:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif