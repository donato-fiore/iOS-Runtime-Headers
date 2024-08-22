// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBPREBUDDYMANAGER_H
#define MBPREBUDDYMANAGER_H

@protocol MBManagerDelegate;

#import <Foundation/Foundation.h>

#import "MBManagerClient.h"

@interface MBPrebuddyManager : NSObject <MBManagerDelegate>



@property (weak, nonatomic) NSObject<MBManagerDelegate> *delegate;
@property (retain) MBManagerClient *managerClient; // ivar: _managerClient
@property (readonly, nonatomic, getter=isPrebuddyMode) BOOL prebuddyMode;


+(BOOL)hasPrebuddyFollowUp;
+(id)backupToCloudImageName;
+(id)baseFollowupItem;
+(id)sharedManager;
+(id)twoDeviceImageName;
-(BOOL)beginPrebuddyBackupFromManualSignal:(BOOL)arg0 error:(*id)arg1 ;
-(id)dateOfLastBackup;
-(id)init;
-(void)beginPrebuddyBackupFromManualSignal:(BOOL)arg0 ;
-(void)cancelPrebuddy;
-(void)extendPrebuddy:(id)arg0 completion:(id)arg1 ;
-(void)followupAction:(id)arg0 ;
-(void)prebuddyBackupDeleted:(id)arg0 ;
-(void)shortenPrebuddyExpiration;
-(void)signalPrebuddy:(id)arg0 ;
-(void)turnOnBackup;
-(void)updateFollowUp;


@end


#endif