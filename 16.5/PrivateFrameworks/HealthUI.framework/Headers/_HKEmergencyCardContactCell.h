// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKEMERGENCYCARDCONTACTCELL_H
#define _HKEMERGENCYCARDCONTACTCELL_H

@class UITableViewCell, _HKEmergencyContact, UILabel;



@interface _HKEmergencyCardContactCell : UITableViewCell

@property (retain, nonatomic) _HKEmergencyContact *contact; // ivar: _contact
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *phoneNumberLabel; // ivar: _phoneNumberLabel
@property (retain, nonatomic) UILabel *relationshipLabel; // ivar: _relationshipLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_setupIndividualViews;
-(void)dealloc;
-(void)setupConstraints;
-(void)setupViewHeirarchy;


@end


#endif