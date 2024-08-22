// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDSOSHEADERCELL_H
#define HKEMERGENCYCARDSOSHEADERCELL_H

@class UITableViewCell, UILabel;



@interface HKEmergencyCardSOSHeaderCell : UITableViewCell

@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateTextColor;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)tintColorDidChange;


@end


#endif