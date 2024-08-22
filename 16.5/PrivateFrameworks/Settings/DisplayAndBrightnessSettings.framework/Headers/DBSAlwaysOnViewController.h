// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSALWAYSONVIEWCONTROLLER_H
#define DBSALWAYSONVIEWCONTROLLER_H

@class PSListController;



@interface DBSAlwaysOnViewController : PSListController



+(id)alwaysOnSpecifierNamed:(id)arg0 ;
+(id)isAlwaysOnEnabled:(id)arg0 ;
-(id)_alwaysOnDisplaySpecifier;
-(id)_showNotificationsSpecifier;
-(id)_showWallpaperSpecifier;
-(id)_updatesForSpecifiers:(id)arg0 isAlwaysOnEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)specifiers;
-(void)setAlwaysOnDisplayEnabled:(id)arg0 specifier:(id)arg1 ;


@end


#endif