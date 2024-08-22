// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUICONTACTSPRIVACYCONTROLLER_H
#define PUICONTACTSPRIVACYCONTROLLER_H

@class PSListController;



@interface PUIContactsPrivacyController : PSListController

@property (retain, nonatomic) id *controller; // ivar: _controller


-(id)appsUsingConactsSpecifiers;
-(id)authorizationLevelForSpecifier:(id)arg0 ;
-(id)createSpecifiers;
-(id)footerSpecifier;
-(id)specifierForBundleIdentifier:(id)arg0 ;
-(id)specifiers;
-(void)controller:(id)arg0 didRefreshInfoForAppsWithBundleIdentifiers:(id)arg1 ;
-(void)setAuthorizationLevel:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif