// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLENAMEPICKERCELL_H
#define PXPEOPLENAMEPICKERCELL_H

@class UITableViewCell, NSArray, UILabel;



@interface PXPeopleNamePickerCell : UITableViewCell

@property (retain, nonatomic) NSArray *baseConstraints; // ivar: _baseConstraints
@property (readonly, weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif