// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYPRIMARYACTIONSECTIONCONTROLLER_H
#define PKAPPLYPRIMARYACTIONSECTIONCONTROLLER_H



#import "PKApplyCollectionViewSectionController.h"

@interface PKApplyPrimaryActionSectionController : PKApplyCollectionViewSectionController

@property (nonatomic) BOOL primaryButtonLoading; // ivar: _primaryButtonLoading


-(id)identifiers;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)listLayoutConfigurationWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureContentSection:(id)arg0 ;


@end


#endif