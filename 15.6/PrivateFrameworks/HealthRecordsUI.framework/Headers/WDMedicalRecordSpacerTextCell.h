// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDMEDICALRECORDSPACERTEXTCELL_H
#define WDMEDICALRECORDSPACERTEXTCELL_H

@class UITableViewCell, NSString, UILabel, NSLayoutConstraint;



@interface WDMedicalRecordSpacerTextCell : UITableViewCell

@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (nonatomic) BOOL useTallTopPadding; // ivar: _useTallTopPadding


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupSubviews;


@end


#endif