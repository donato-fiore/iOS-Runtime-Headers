// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUIMISDENYLISTSETTINGSDETAILCONTROLLER_H
#define MCUIMISDENYLISTSETTINGSDETAILCONTROLLER_H

@class PSListController;



@interface MCUIMISDenylistSettingsDetailController : PSListController

@property BOOL reenabled; // ivar: _reenabled


-(BOOL)overridden;
-(id)_reenableButtonSpecifier;
-(id)init;
-(id)specifiers;
-(void)_askForReenableConfirmation;
-(void)_blockedAppsUpdated;
-(void)dealloc;
-(void)setOverride:(id)arg0 ;


@end


#endif