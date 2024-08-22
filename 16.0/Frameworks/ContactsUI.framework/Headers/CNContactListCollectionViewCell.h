// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTCOLLECTIONVIEWCELL_H
#define CNCONTACTLISTCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, CNContact, CNContactFormatter, CNContactMatchInfo;
@protocol CNCancelable;


#import "CNContactListStyleApplier.h"

@interface CNContactListCollectionViewCell : UICollectionViewListCell

@property (nonatomic) BOOL allowsMultiSelectContextMenus; // ivar: _allowsMultiSelectContextMenus
@property (nonatomic) BOOL allowsMultiSelection; // ivar: _allowsMultiSelection
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // ivar: _contactListStyleApplier
@property (retain, nonatomic) CNContactMatchInfo *contactMatchInfo; // ivar: _contactMatchInfo
@property (nonatomic) BOOL hasBeenDisplayed; // ivar: _hasBeenDisplayed
@property (nonatomic) BOOL isEmergencyContact; // ivar: _isEmergencyContact
@property (nonatomic) BOOL isMeCard; // ivar: _isMeCard
@property (retain, nonatomic) NSObject<CNCancelable> *summaryCancelationToken; // ivar: _summaryCancelationToken


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyAccessories;
-(void)cancelAsyncOperations;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSubtitleAttributedText:(id)arg0 ;


@end


#endif