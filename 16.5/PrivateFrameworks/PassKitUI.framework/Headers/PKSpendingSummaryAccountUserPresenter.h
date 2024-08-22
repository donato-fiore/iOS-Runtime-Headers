// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSPENDINGSUMMARYACCOUNTUSERPRESENTER_H
#define PKSPENDINGSUMMARYACCOUNTUSERPRESENTER_H

@class PKTransactionSourceCollection, PKFamilyMemberCollection, NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKContactAvatarManager.h"
#import "PKSpendingSummaryAccountUserCell.h"

@interface PKSpendingSummaryAccountUserPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKContactAvatarManager *_avatarManager;
    PKSpendingSummaryAccountUserCell *_sampleCell;
    CGFloat _interimSpacing;
    NSInteger _numUsers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)initWithTransactionSourceCollection:(id)arg0 familyCollection:(id)arg1 avatarManager:(id)arg2 interimSpacing:(CGFloat)arg3 ;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureCell:(id)arg0 item:(id)arg1 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif