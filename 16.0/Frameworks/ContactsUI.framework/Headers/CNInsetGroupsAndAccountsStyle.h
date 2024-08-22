// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNINSETGROUPSANDACCOUNTSSTYLE_H
#define CNINSETGROUPSANDACCOUNTSSTYLE_H



#import "CNAccountsAndGroupsStyle.h"

@interface CNInsetGroupsAndAccountsStyle : CNAccountsAndGroupsStyle



-(BOOL)isInset;
-(BOOL)shouldShowCellSelection;
-(NSInteger)buttonBehavior;
-(id)backgroundColor;
-(id)cellAccessoriesForItem:(id)arg0 ;
-(id)cellConfigurationUpdateHandler:(SEL)arg0 ;
-(id)parentCellConfigurationWithText:(id)arg0 ;
// -(id)sectionConfigurationForLayoutEnvironment:(id)arg0 withLeadingActionsProvider:(id)arg1 withTrailingActionsProvider:(unk)arg2 hasHeader:(id)arg3  ;


@end


#endif