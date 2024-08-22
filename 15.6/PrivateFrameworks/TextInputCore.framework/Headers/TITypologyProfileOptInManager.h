// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYPROFILEOPTINMANAGER_H
#define TITYPOLOGYPROFILEOPTINMANAGER_H

@protocol TITypologyProfileOptInManaging;

#import <Foundation/Foundation.h>

#import "TITypologyProfileState.h"

@interface TITypologyProfileOptInManager : NSObject <TITypologyProfileOptInManaging>



@property (readonly, nonatomic) BOOL isProfileInstalledAndUserEnabled;
@property (readonly, nonatomic) BOOL isTypologyProfileInstalled;
@property (retain, nonatomic) TITypologyProfileState *typologyProfileState; // ivar: _typologyProfileState


+(id)localizedStringForKey:(id)arg0 ;
-(BOOL)devicePasscodeSet;
-(BOOL)iCloudAccountAvailable;
-(id)init;
-(id)notificationDetailsForType:(NSInteger)arg0 ;
-(void)_askUserToAllow;
-(void)_launchVPNAndDeviceManagementSettings;
-(void)dismissDialogWithCompletionHandler:(id)arg0 ;
-(void)presentDialogForType:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif