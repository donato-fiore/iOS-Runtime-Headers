// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRELECTROCARDIOGRAMWATCHAPPINSTALLABILITY_H
#define HRELECTROCARDIOGRAMWATCHAPPINSTALLABILITY_H

@class HKWatchAppAvailability;

#import <Foundation/Foundation.h>


@interface HRElectrocardiogramWatchAppInstallability : NSObject

@property (retain, nonatomic) HKWatchAppAvailability *ecgAppAvailability; // ivar: _ecgAppAvailability


+(BOOL)isElectrocardiogramAppDeletableForActiveWatch;
+(void)installElectrocardiogramAppOnActiveWatch:(id)arg0 ;
-(id)init;
// -(id)installElectrocardiogramAppAlertController:(id)arg0 cancel:(unk)arg1  ;
-(void)checkElectrocardiogramAppInstallStateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)electrocardiogramAppInstallStateOnActiveWatch:(id)arg0 ;
-(void)setAllowInstallingElectrocardiogramWatchApp:(BOOL)arg0 ;


@end


#endif