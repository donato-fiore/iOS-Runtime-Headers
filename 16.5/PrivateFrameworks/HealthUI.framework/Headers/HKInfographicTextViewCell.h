// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICTEXTVIEWCELL_H
#define HKINFOGRAPHICTEXTVIEWCELL_H

@class UITableViewCell, UILabel, NSLayoutConstraint;



@interface HKInfographicTextViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint


-(id)_descriptionFont;
-(id)_descriptionTextColor;
-(id)_labelWithFont:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif