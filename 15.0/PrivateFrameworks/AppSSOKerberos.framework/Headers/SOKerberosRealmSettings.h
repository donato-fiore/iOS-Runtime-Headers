// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOKERBEROSREALMSETTINGS_H
#define SOKERBEROSREALMSETTINGS_H

@class NSUUID, NSDate, NSNumber, NSUserDefaults, NSString, NSData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SOKerberosRealmSettings : NSObject

@property (retain, nonatomic) NSUUID *credentialUUID;
@property (retain, nonatomic) NSDate *dateADPasswordCanChange;
@property (retain, nonatomic) NSDate *dateADPasswordLastChangedWhenSynced;
@property (retain, nonatomic) NSDate *dateExpirationChecked;
@property (retain, nonatomic) NSDate *dateExpirationNotificationSent;
@property (retain, nonatomic) NSDate *dateLastLogin;
@property (retain, nonatomic) NSDate *dateLocalPasswordLastChanged;
@property (retain, nonatomic) NSDate *dateLocalPasswordLastChangedWhenSynced;
@property (retain, nonatomic) NSDate *dateNextPacRefresh;
@property (retain, nonatomic) NSDate *datePasswordExpires;
@property (retain, nonatomic) NSDate *datePasswordLastChanged;
@property (retain, nonatomic) NSDate *datePasswordLastChangedAtLogin;
@property (retain, nonatomic) NSDate *dateUserSignedOut;
@property (readonly, nonatomic) NSNumber *daysUntilExpiration;
@property (retain) NSUserDefaults *defaults; // ivar: _defaults
@property (nonatomic) BOOL delayUserSetupCleared;
@property (nonatomic) BOOL networkAvailable;
@property (retain, nonatomic) NSString *networkHomeDirectory;
@property (nonatomic) BOOL passwordChangeInProgress;
@property (nonatomic) BOOL passwordNeverExpires;
@property (retain, nonatomic) NSData *pkinitPersistientRef;
@property (retain) NSString *realm; // ivar: _realm
@property (retain, nonatomic) NSMutableArray *siteCodeCache; // ivar: _siteCodeCache
@property (retain, nonatomic) NSString *smartCardTokenID;
@property (nonatomic) BOOL userCancelledLogin;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *userPrincipalName;


-(id)dumpSiteCodeCache;
-(id)initWithRealm:(id)arg0 ;
-(id)realmKey:(id)arg0 ;
-(id)siteCodeForNetworkFingerprint:(id)arg0 ;
-(void)cacheSiteCode:(id)arg0 ;
-(void)dealloc;
-(void)loadSiteCodes;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeAllValues;
-(void)save;
-(void)saveSiteCodes;


@end


#endif