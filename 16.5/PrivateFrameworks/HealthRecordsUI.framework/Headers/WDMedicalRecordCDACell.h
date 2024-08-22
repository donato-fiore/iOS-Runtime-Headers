// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMEDICALRECORDCDACELL_H
#define WDMEDICALRECORDCDACELL_H

@class UITableViewCell, UIView, HKCDADocumentSample, UILabel, UIImageView, HKSeparatorLineView;



@interface WDMedicalRecordCDACell : UITableViewCell

@property (retain, nonatomic) UIView *background; // ivar: _background
@property (retain, nonatomic) HKCDADocumentSample *cdaSample; // ivar: _cdaSample
@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) UIImageView *discloseView; // ivar: _discloseView
@property (retain, nonatomic) UILabel *institutionLabel; // ivar: _institutionLabel
@property (retain, nonatomic) UILabel *institutionTitle; // ivar: _institutionTitle
@property (retain, nonatomic) UILabel *patientLabel; // ivar: _patientLabel
@property (retain, nonatomic) UILabel *patientTitle; // ivar: _patientTitle
@property (retain, nonatomic) HKSeparatorLineView *separator; // ivar: _separator
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_adjustFont;
-(void)_setupSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif