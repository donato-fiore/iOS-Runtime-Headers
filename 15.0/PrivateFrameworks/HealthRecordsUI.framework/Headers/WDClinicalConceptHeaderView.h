// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCLINICALCONCEPTHEADERVIEW_H
#define WDCLINICALCONCEPTHEADERVIEW_H

@class UITableViewHeaderFooterView, NSString, UILabel;



@interface WDClinicalConceptHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_setupSubviews;


@end


#endif