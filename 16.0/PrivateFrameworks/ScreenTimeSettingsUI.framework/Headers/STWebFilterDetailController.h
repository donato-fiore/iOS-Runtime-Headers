// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STWEBFILTERDETAILCONTROLLER_H
#define STWEBFILTERDETAILCONTROLLER_H

@class PSListController;
@protocol STContentPrivacyViewModelCoordinator;


#import "STContentPrivacyMediaRestrictionsDetailController.h"

@interface STWebFilterDetailController : PSListController

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (weak) STContentPrivacyMediaRestrictionsDetailController *parentMediaRestrictionsController; // ivar: _parentMediaRestrictionsController


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_addButtonSpecifierWithGroup:(id)arg0 action:(SEL)arg1 ;
-(id)_listItemSpecifiersForNamedSitesGroup:(id)arg0 ;
-(id)_listItemSpecifiersForSitesGroup:(id)arg0 ;
-(id)getItemSpecifierValue:(id)arg0 ;
-(id)groupSpecifierWithConfiguration:(id)arg0 key:(id)arg1 footerText:(id)arg2 radio:(BOOL)arg3 ;
-(id)init;
-(id)listItemSpecifierWithGroup:(id)arg0 name:(id)arg1 value:(id)arg2 ;
-(id)specifiers;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)addNamedSite:(id)arg0 ;
-(void)addSite:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)saveItemValue:(id)arg0 specifier:(id)arg1 ;
-(void)saveRemovingItem:(id)arg0 value:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateParent;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif