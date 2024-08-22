// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKENHANCEDMERCHANTSSHELFSECTIONCONTROLLER_H
#define PKENHANCEDMERCHANTSSHELFSECTIONCONTROLLER_H

@class PKAccountEnhancedMerchantsFetcher, NSUUID, UICollectionViewCellRegistration, NSString, NSArray;
@protocol PKDynamicSectionController, PKViewControllerPreflightable, PKRewardsHubSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKEnhancedMerchantsShelfSectionController : NSObject <PKDynamicSectionController, PKViewControllerPreflightable>

 {
    PKAccountEnhancedMerchantsFetcher *_fetcher;
    id<PKRewardsHubSectionControllerDelegate> *_delegate;
    NSUUID *_merchantsUpdateToken;
}


@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)initWithSectionIdentifier:(id)arg0 fetcher:(id)arg1 delegate:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureDataSource;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)didPressEnhancedMerchantsListButton;
-(void)didSelectItem:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;


@end


#endif