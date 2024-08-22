// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKORGANDONATIONREGISTEREDTABLEVIEWCELL_H
#define HKORGANDONATIONREGISTEREDTABLEVIEWCELL_H

@class UITableViewCell, UILabel;



@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *introLabel; // ivar: _introLabel
@property (retain, nonatomic) UILabel *registrarLabel; // ivar: _registrarLabel


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;


@end


#endif