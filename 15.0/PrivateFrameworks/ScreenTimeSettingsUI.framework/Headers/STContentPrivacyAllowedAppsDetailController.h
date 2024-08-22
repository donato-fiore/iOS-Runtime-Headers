// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCONTENTPRIVACYALLOWEDAPPSDETAILCONTROLLER_H
#define STCONTENTPRIVACYALLOWEDAPPSDETAILCONTROLLER_H

@class PSListController;
@protocol STContentPrivacyViewModelCoordinator;



@interface STContentPrivacyAllowedAppsDetailController : PSListController

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // ivar: _coordinator


-(id)defaultSwitchSpecifierWithConfiguration:(id)arg0 key:(id)arg1 fallbackLabel:(id)arg2 icon:(id)arg3 ;
-(id)getItemSpecifierValue:(id)arg0 ;
-(id)init;
-(id)nameForInstalledSystemApp:(id)arg0 ;
-(id)specifiers;
-(void)_addBlacklistAppSpecifier:(id)arg0 bundleID:(id)arg1 ;
-(void)_addBooleanAppSpecifier:(id)arg0 configuration:(id)arg1 key:(id)arg2 bundleID:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setItemSpecifierValue:(id)arg0 specifier:(id)arg1 ;


@end


#endif