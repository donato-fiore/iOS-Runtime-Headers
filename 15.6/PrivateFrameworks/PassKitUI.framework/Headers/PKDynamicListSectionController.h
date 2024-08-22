// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDYNAMICLISTSECTIONCONTROLLER_H
#define PKDYNAMICLISTSECTIONCONTROLLER_H

@class NSAttributedString, UICollectionViewCellRegistration, NSString, NSArray;
@protocol PKDynamicSectionController;

#import <Foundation/Foundation.h>


@interface PKDynamicListSectionController : NSObject <PKDynamicSectionController>



@property (copy, nonatomic) NSAttributedString *attributedFooterText; // ivar: _attributedFooterText
@property (copy, nonatomic) NSAttributedString *attributedHeaderText; // ivar: _attributedHeaderText
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (copy, nonatomic) id *leadingSwipeActionsConfigurationProvider; // ivar: _leadingSwipeActionsConfigurationProvider
@property (readonly) Class superclass;
@property (copy, nonatomic) id *trailingSwipeActionsConfigurationProvider; // ivar: _trailingSwipeActionsConfigurationProvider


-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif