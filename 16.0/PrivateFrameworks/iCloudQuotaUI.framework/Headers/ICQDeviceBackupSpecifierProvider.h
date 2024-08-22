// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQDEVICEBACKUPSPECIFIERPROVIDER_H
#define ICQDEVICEBACKUPSPECIFIERPROVIDER_H

@class ACAccount, PSListController<AAUISpecifierProviderDelegate>, ICQBackupInfo, NSString, NSArray;
@protocol DelayedPushDelegate, AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface ICQDeviceBackupSpecifierProvider : NSObject <DelayedPushDelegate, AAUISpecifierProvider>

 {
    ACAccount *_account;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    ICQBackupInfo *_backupInfo;
    id *_backupChangesNotificationObserver;
    BOOL _isBackupRequestInProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(id)_backupDevicesSpecififers:(id)arg0 ;
-(id)_specifierForSpinner;
-(id)_valueForBackUpDevice:(id)arg0 ;
-(id)initWithAccount:(id)arg0 presenter:(id)arg1 ;
-(id)initWithAccountManager:(id)arg0 ;
-(void)_fetchBackupInfo;
-(void)_reloadSpecifiers;
-(void)_startObservingBackupChanges;
-(void)dealloc;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;


@end


#endif