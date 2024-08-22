// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTLISTTABLEVIEWCELL_H
#define CNCONTACTLISTTABLEVIEWCELL_H

@class UITableViewCell, CNContact, CNContactFormatter, CNContactMatchInfo;
@protocol CNCancelable;


#import "CNContactListStyleApplier.h"

@interface CNContactListTableViewCell : UITableViewCell

@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // ivar: _contactListStyleApplier
@property (retain, nonatomic) CNContactMatchInfo *contactMatchInfo; // ivar: _contactMatchInfo
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasBeenDisplayed; // ivar: _hasBeenDisplayed
@property (nonatomic) BOOL isEmergencyContact; // ivar: _isEmergencyContact
@property (nonatomic) BOOL isMeCard; // ivar: _isMeCard
@property (copy, nonatomic) id *selectedBackgroundViewConfiguration; // ivar: _selectedBackgroundViewConfiguration
@property (retain, nonatomic) NSObject<CNCancelable> *summaryCancelationToken; // ivar: _summaryCancelationToken


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)cancelAsyncOperations;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif