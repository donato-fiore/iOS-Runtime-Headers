// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNACCOUNTSANDGROUPSSTYLE_H
#define CNACCOUNTSANDGROUPSSTYLE_H


#import <Foundation/Foundation.h>


@interface CNAccountsAndGroupsStyle : NSObject



+(id)styleForTraitCollection:(id)arg0 ;
-(BOOL)isInset;
-(BOOL)shouldShowCellSelection;
-(NSInteger)buttonBehavior;
-(id)backgroundColor;
-(id)cellAccessoriesForContextMenuPreviewForItem:(id)arg0 ;
-(id)cellAccessoriesForItem:(id)arg0 ;
-(id)cellConfigurationUpdateHandler:(SEL)arg0 ;
-(id)parentCellAccessories;
-(id)parentCellConfigurationWithText:(id)arg0 ;
// -(id)sectionConfigurationForLayoutEnvironment:(id)arg0 withLeadingActionsProvider:(id)arg1 withTrailingActionsProvider:(unk)arg2 hasHeader:(id)arg3  ;


@end


#endif