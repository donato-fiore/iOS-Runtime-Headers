// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCCERTIFICATEPICKERCELL_H
#define MCCERTIFICATEPICKERCELL_H

@class PSTableCell, UILabel;



@interface MCCertificatePickerCell : PSTableCell {
    UILabel *_issuedByLabel;
    UILabel *_issuerLabel;
    UILabel *_expiresByLabel;
    UILabel *_expiryDateLabel;
}




+(float)_attributeLabelSpace;
+(float)defaultCellHeight;
+(id)_attributeFont;
+(id)_dateFormatter;
-(id)_attributeLabelCopy;
-(id)_checkmarkView;
-(id)_labelColor;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg0 ;
-(void)setExpirationDate:(id)arg0 ;
-(void)setIssuer:(id)arg0 ;


@end


#endif