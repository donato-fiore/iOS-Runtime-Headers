// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTCOUNTFOOTERVIEW_H
#define CNCONTACTLISTCOUNTFOOTERVIEW_H

@class UICollectionViewListCell;
@protocol CNContactListCountViewDelegate;



@interface CNContactListCountFooterView : UICollectionViewListCell

@property (nonatomic) NSInteger contactCount; // ivar: _contactCount
@property (weak, nonatomic) NSObject<CNContactListCountViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger duplicateCount; // ivar: _duplicateCount
@property (nonatomic) NSInteger selectedCount; // ivar: _selectedCount


-(BOOL)shouldDisplayContactCount;
-(BOOL)shouldDisplayDuplicateCount;
-(BOOL)shouldDisplaySelectedCount;
-(id)countStringForLocalizedStringKey:(id)arg0 count:(NSInteger)arg1 ;
-(id)countViewConfiguration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryText;
-(id)secondaryText;
-(void)didSelectViewAllDuplicates;


@end


#endif