// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALIDNOVALUETABLEVIEWCELL_H
#define HKMEDICALIDNOVALUETABLEVIEWCELL_H

@class UITableViewCell, UILabel;



@interface HKMedicalIDNoValueTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *addValueLabel; // ivar: _addValueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)createAddValueLabel;


@end


#endif