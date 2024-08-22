// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSUISETTINGSBUNDLECONTROLLER_H
#define CSUISETTINGSBUNDLECONTROLLER_H

@class PSBundleController;



@interface CSUISettingsBundleController : PSBundleController



-(BOOL)_cnfreg_overrideForController:(id)arg0 withDictionary:(id)arg1 ;
-(Class)controllerClassToInstantiate:(id)arg0 ;
-(NSInteger)serviceType;
-(id)initWithParentListController:(id)arg0 ;
-(id)name;
-(id)settingsClassName;
-(void)_resetSpecifierAction:(id)arg0 ;
-(void)bundleTappedWithSpecifier:(id)arg0 ;


@end


#endif