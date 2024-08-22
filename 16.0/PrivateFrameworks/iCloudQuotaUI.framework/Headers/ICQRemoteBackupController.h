// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQREMOTEBACKUPCONTROLLER_H
#define ICQREMOTEBACKUPCONTROLLER_H

@class PSListController, ACAccount, NSString, NSURL;
@protocol NSURLConnectionDelegate, DelayedPushDelegate;


#import "ICQDeviceIdentificationView.h"
#import "ICQSpinnerBezel.h"
#import "ICQPreferencesRemoteUIDelegate.h"

@interface ICQRemoteBackupController : PSListController <NSURLConnectionDelegate, DelayedPushDelegate>

 {
    ICQDeviceIdentificationView *_deviceIdentificationView;
    ICQSpinnerBezel *_deletionBezel;
    ACAccount *_account;
}


@property (retain, nonatomic) NSString *backupSizeString; // ivar: _backupSizeString
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *deletionURL; // ivar: _deletionURL
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSURL *deviceImageURL; // ivar: _deviceImageURL
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBackupEnabled; // ivar: _isBackupEnabled
@property (retain, nonatomic) NSString *lastBackupDateString; // ivar: _lastBackupDateString
@property (retain, nonatomic) ICQPreferencesRemoteUIDelegate *remoteDelegate; // ivar: _remoteDelegate
@property (readonly) Class superclass;


+(id)specifier;
+(id)specifierForAccount:(id)arg0 ;
-(id)specifiers;
-(void)_backupDeletionFailedWithCode:(NSInteger)arg0 ;
-(void)_backupDeletionSuccess;
-(void)confirmDelete:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackupConfirmed;
-(void)endDeletionBezel;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadPropertyValuesFromDictionary:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;
-(void)loadView;
-(void)setSpecifier:(id)arg0 ;
-(void)startDeletionBezel;


@end


#endif