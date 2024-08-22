// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPDISCOVERCARDSECTIONCONTROLLER_H
#define PKPAYMENTSETUPDISCOVERCARDSECTIONCONTROLLER_H

@class UICollectionViewCellRegistration, NSString, NSArray;
@protocol PKDynamicSectionController;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupDiscoverCardSectionController : NSObject <PKDynamicSectionController>



@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)init;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif