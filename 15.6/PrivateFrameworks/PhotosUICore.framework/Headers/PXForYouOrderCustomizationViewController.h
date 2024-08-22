// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOUORDERCUSTOMIZATIONVIEWCONTROLLER_H
#define PXFORYOUORDERCUSTOMIZATIONVIEWCONTROLLER_H

@class UITableViewController;


#import "PXForYouGadgetRankStorage.h"

@interface PXForYouOrderCustomizationViewController : UITableViewController {
    PXForYouGadgetRankStorage *_storage;
}




-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)_rankForItem:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_currentGadgetTypesInOrderOfRank;
-(id)initWithStorage:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_fillDefaultRanks;
-(void)_handleDone;
-(void)_persistRanksOfGadgetTypes:(id)arg0 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif