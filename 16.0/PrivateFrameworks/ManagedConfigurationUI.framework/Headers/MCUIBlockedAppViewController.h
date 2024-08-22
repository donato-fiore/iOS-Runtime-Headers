// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCUIBLOCKEDAPPVIEWCONTROLLER_H
#define MCUIBLOCKEDAPPVIEWCONTROLLER_H

@class PSListController;



@interface MCUIBlockedAppViewController : PSListController

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