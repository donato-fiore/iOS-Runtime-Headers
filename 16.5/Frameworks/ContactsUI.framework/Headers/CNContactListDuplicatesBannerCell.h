// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTDUPLICATESBANNERCELL_H
#define CNCONTACTLISTDUPLICATESBANNERCELL_H

@class UICollectionViewListCell, NSString;
@protocol CNContactListDuplicatesBannerViewDelegate, CNContactListDuplicatesBannerCellDelegate;


#import "CNContactListStyleApplier.h"
#import "CNContactListDuplicatesBannerView.h"

@interface CNContactListDuplicatesBannerCell : UICollectionViewListCell <CNContactListDuplicatesBannerViewDelegate>



@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // ivar: _contactListStyleApplier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactListDuplicatesBannerCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNContactListDuplicatesBannerView *duplicatesBannerView; // ivar: _duplicatesBannerView
@property (nonatomic) NSInteger duplicatesCount; // ivar: _duplicatesCount
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)duplicatesBannerViewDidTapDismiss:(id)arg0 ;
-(void)duplicatesBannerViewDidTapViewDuplicates:(id)arg0 ;
-(void)removeBannerView;
-(void)updateText:(id)arg0 ;
-(void)updateWithCount:(NSInteger)arg0 ;
-(void)updateWithDuplicatesFoundBannerWithCount:(NSInteger)arg0 ;
-(void)updateWithState:(NSUInteger)arg0 ;


@end


#endif