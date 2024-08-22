// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTIVEDEVICELINKCELL_H
#define ACTIVEDEVICELINKCELL_H

@class PSTableCell, NSLayoutConstraint, UILabel;



@interface ActiveDeviceLinkCell : PSTableCell

@property (retain, nonatomic) NSLayoutConstraint *detailsHeightContraint; // ivar: _detailsHeightContraint
@property (retain, nonatomic) UILabel *detailsLabel; // ivar: _detailsLabel
@property (retain, nonatomic) UILabel *deviceNameLabel; // ivar: _deviceNameLabel
@property (retain, nonatomic) UILabel *fromLabel; // ivar: _fromLabel


+(NSInteger)cellStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setupConstraints;
-(void)setupSubviews;


@end


#endif