// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPERSITEPREFERENCESPOPOVERVIEWCONTROLLER_H
#define _SFPERSITEPREFERENCESPOPOVERVIEWCONTROLLER_H

@class UITableViewController, NSString, NSMutableDictionary, NSArray, UIBarButtonItem, NSIndexPath;
@protocol SFSwitchTableViewCellDelegate;


#import "_SFPerSitePreferencesVendor.h"

@interface _SFPerSitePreferencesPopoverViewController : UITableViewController <SFSwitchTableViewCellDelegate>

 {
    NSString *_domain;
    _SFPerSitePreferencesVendor *_perSitePreferencesVendor;
    BOOL _shouldShowSecurePagePreferences;
    NSMutableDictionary *_preferenceToValueCache;
    NSArray *_preferencesBySections;
    UIBarButtonItem *_doneButton;
    NSIndexPath *_expandedRowIndexPath;
    NSInteger _numberOfValuesInExpandedPreference;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_generalPageSection;
-(id)_indexPathForView:(id)arg0 ;
-(id)_preferenceAtIndexPath:(id)arg0 ;
-(id)_preferenceRowIndexPathForCellAtIndexPath:(id)arg0 ;
-(id)_securePageSection;
-(id)initWithDomain:(id)arg0 shouldShowSecurePreferences:(BOOL)arg1 perSitePreferencesVendor:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_didRetrieveValue:(id)arg0 forPreference:(id)arg1 ;
-(void)_done:(id)arg0 ;
-(void)_initializePreferences;
-(void)_setPreferenceValue:(id)arg0 forPreference:(id)arg1 ;
-(void)_setPreferenceValueIndex:(NSInteger)arg0 forView:(id)arg1 ;
-(void)reloadPreferences;
-(void)switchTableViewCell:(id)arg0 didChangeSwitchState:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;


@end


#endif