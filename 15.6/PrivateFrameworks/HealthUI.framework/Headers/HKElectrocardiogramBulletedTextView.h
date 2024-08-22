// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMBULLETEDTEXTVIEW_H
#define HKELECTROCARDIOGRAMBULLETEDTEXTVIEW_H

@class UIView, NSMutableArray, UILabel, NSString;



@interface HKElectrocardiogramBulletedTextView : UIView

@property (retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints; // ivar: _bodyFirstBaselineConstraints
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) NSString *detailText;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText;


-(id)init;
-(void)_setUpUI;
-(void)_setupConstraints;
-(void)_updateLeadingDetailAttributedTextSize;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif