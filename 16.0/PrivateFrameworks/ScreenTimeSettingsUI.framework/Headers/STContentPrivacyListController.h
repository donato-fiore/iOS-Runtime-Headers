// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCONTENTPRIVACYLISTCONTROLLER_H
#define STCONTENTPRIVACYLISTCONTROLLER_H

@class PSSpecifier, NSArray;


#import "STPINListViewController.h"

@interface STContentPrivacyListController : STPINListViewController

@property (retain) PSSpecifier *contentRestrictionsSpecifier; // ivar: _contentRestrictionsSpecifier
@property (retain) PSSpecifier *enableRestrictionsSwitchSpecifier; // ivar: _enableRestrictionsSwitchSpecifier
@property (readonly, copy) NSArray *storeDetailSpecifiers;


-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(id)_allowChangesSpecifiers;
-(id)_privacySpecifiers;
-(id)_topLevelExternalSpecifierWithClass:(Class)arg0 name:(id)arg1 idTitle:(id)arg2 ;
-(id)_topLevelSpecifierWithAction:(SEL)arg0 name:(id)arg1 ;
-(id)_topLevelSpecifiers;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg0 key:(id)arg1 ;
-(id)defaultLinkListSpecifierWithItem:(id)arg0 ;
-(id)defaultRadioItemSpecifierWithGroup:(id)arg0 name:(id)arg1 value:(id)arg2 ;
-(id)getItemSpecifierValue:(id)arg0 ;
-(id)getRestrictionsEnabled:(id)arg0 ;
-(id)init;
-(id)radioGroupSpecifierWithName:(id)arg0 footerText:(id)arg1 item:(id)arg2 ;
-(id)specifiers;
-(id)tccSpecifierWithCapabilityKey:(id)arg0 id:(id)arg1 ;
-(void)_isLoadedDidChange:(BOOL)arg0 ;
-(void)_viewProfilesAndDeviceManagement:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;
-(void)setItemSpecifierValue:(id)arg0 specifier:(id)arg1 ;
-(void)setRestrictionsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)showAllowedAppsRestrictions:(id)arg0 ;
-(void)showMediaRestrictions:(id)arg0 ;
-(void)showiTunesPurchasesRestrictions:(id)arg0 ;


@end


#endif