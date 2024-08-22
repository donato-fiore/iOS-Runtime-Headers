// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDMULTILINETEXTCELL_H
#define WDMEDICALRECORDMULTILINETEXTCELL_H

@class UITableViewCell, UIView, UILabel, NSAttributedString;



@interface WDMedicalRecordMultilineTextCell : UITableViewCell

@property (retain, nonatomic) UIView *background; // ivar: _background
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSAttributedString *text; // ivar: _text


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupSubviews;


@end


#endif