// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUSAGEDETAILCONTROLLER_H
#define ICQUSAGEDETAILCONTROLLER_H

@class PSEditableListController, NSMutableArray, NSDictionary;


#import "ICQUsageStorageController.h"

@interface ICQUsageDetailController : PSEditableListController {
    BOOL _showingAll;
    NSMutableArray *_documentsGroup;
}


@property (readonly, nonatomic) NSDictionary *mediaCache; // ivar: _media
@property (weak, nonatomic) ICQUsageStorageController *storageController; // ivar: _storageController


+(BOOL)hasMediaForGroups:(id)arg0 ;
+(float)totalSizeForGroups:(id)arg0 ;
+(id)mediaGroups;
+(id)mpKeyTranslations;
+(void)setupSpecifier:(id)arg0 forMediaGroups:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)hasMedia;
-(BOOL)isAppController;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(BOOL)removeMediaEntry:(id)arg0 inSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)updateSizesAfterDeletingMediaKind:(id)arg0 deletedSection:(BOOL)arg1 shouldPop:(BOOL)arg2 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)copyMediaSpecifiers;
-(id)documentsAndDataSpecifiers;
-(id)dynamicSize:(id)arg0 ;
-(id)size:(id)arg0 ;
-(id)specifiers;
-(void)confirmAppDeletion;
-(void)deleteApp;
-(void)loadView;
-(void)showMore:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif