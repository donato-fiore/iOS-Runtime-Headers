// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPLISTSECTIONCONTROLLER_H
#define PKPAYMENTSETUPLISTSECTIONCONTROLLER_H

@class UICollectionViewCellRegistration, NSString, NSArray;
@protocol PKDynamicSectionController;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupListSectionController : NSObject <PKDynamicSectionController>



@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSDirectionalEdgeInsets headerDirectionalLayoutMargins; // ivar: _headerDirectionalLayoutMargins
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;


-(id)decoratePaymentSetListCell:(id)arg0 forItem:(id)arg1 ;
-(id)defaultListLayout;
-(id)footerAttributedStringForIdentifier:(id)arg0 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)applyHeaderConfigurationProperties:(id)arg0 sectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif