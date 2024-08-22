// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUSAGEBUNDLEDETAILCONTROLLER_H
#define PSUSAGEBUNDLEDETAILCONTROLLER_H



#import "PSEditableListController.h"

@interface PSUsageBundleDetailController : PSEditableListController



+(id)mediaGroups;
+(void)setupSpecifier:(id)arg0 forMediaGroups:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)size:(id)arg0 ;
-(id)sizeForSpecifier:(id)arg0 ;
-(id)specifiers;
-(void)loadView;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSizesAfterDeletingSize:(float)arg0 shouldPop:(BOOL)arg1 ;


@end


#endif