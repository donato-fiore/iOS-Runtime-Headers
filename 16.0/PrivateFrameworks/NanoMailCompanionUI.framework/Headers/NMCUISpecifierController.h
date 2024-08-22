// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMCUISPECIFIERCONTROLLER_H
#define NMCUISPECIFIERCONTROLLER_H

@class PSListController;

#import <Foundation/Foundation.h>

#import "NMCUICloudNotificationAccountDataSource.h"

@interface NMCUISpecifierController : NSObject

@property (retain, nonatomic) NMCUICloudNotificationAccountDataSource *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL isTinker; // ivar: _isTinker
@property (weak, nonatomic) PSListController *listController; // ivar: _listController


+(id)settingSpecifierWithTarget:(id)arg0 set:(SEL)arg1 get:(SEL)arg2 ;
+(id)titleSettingSpecifier;
-(BOOL)hasCloudNotificationAccounts;
-(id)_cloudNotificationsEnabled:(id)arg0 ;
-(id)groupSpecifierForTinker:(BOOL)arg0 ;
-(id)initWithListController:(id)arg0 dataSource:(id)arg1 isTinker:(BOOL)arg2 ;
-(id)specifierForAccount:(id)arg0 onTap:(SEL)arg1 ;
-(id)specifiers;
-(void)_accountSpecifierTapped:(id)arg0 ;
-(void)_setCloudNotificationsEnabled:(id)arg0 withSpecifier:(id)arg1 ;


@end


#endif