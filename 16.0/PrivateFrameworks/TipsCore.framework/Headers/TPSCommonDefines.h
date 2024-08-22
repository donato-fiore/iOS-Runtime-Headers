// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCOMMONDEFINES_H
#define TPSCOMMONDEFINES_H

@class NSMutableArray, NSString, NSMutableDictionary, NSUserDefaults, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSTipStatusController.h"

@interface TPSCommonDefines : NSObject {
    NSMutableArray *_cloudDevices;
    NSString *_userLanguage;
}


@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap; // ivar: _appBundleIDMap
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults; // ivar: _appGroupDefaults
@property (readonly, nonatomic) NSInteger assetRatioType; // ivar: _assetRatioType
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap; // ivar: _collectionStatusMap
@property (readonly, nonatomic) NSInteger daysSinceLastMajorVersionUpdate;
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSDate *lastMajorVersionUpdateDate;
@property (readonly, nonatomic, getter=isMacUI) BOOL macUI;
@property (retain, nonatomic) NSString *majorVersion; // ivar: _majorVersion
@property (nonatomic) int maxVersion; // ivar: _maxVersion
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic, getter=isPadUI) BOOL padUI;
@property (readonly, nonatomic, getter=isPhoneUI) BOOL phoneUI; // ivar: _phoneUI
@property (nonatomic) BOOL supportsUIApplication; // ivar: _supportsUIApplication
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) TPSTipStatusController *tipStatusController; // ivar: _tipStatusController
@property (readonly, nonatomic) BOOL tipsAccessAllowed; // ivar: _tipsAccessAllowed
@property (copy, nonatomic) NSString *userLanguage;


+(BOOL)callerIsTipsdWithSource:(id)arg0 ;
+(BOOL)hardwareChanged;
+(BOOL)isGreenTeaDevice;
+(BOOL)isInternalBuild;
+(BOOL)isInternalDevice;
+(BOOL)isSeniorUser;
+(id)_tipStatusArchivalURL;
+(id)appGroupIdentifier;
+(id)clientBundleIdentifier;
+(id)deviceFamily;
+(id)notificationBundleIdentifier;
+(id)osBuild;
+(id)sharedInstance;
+(id)tipsCoreFrameworkBundle;
+(int)maxRequestVersion;
-(BOOL)hasLocaleChanged;
-(NSInteger)userType;
-(id)activateDateForCollectionIdentifier:(id)arg0 ;
-(id)appBundleIDForInstalledAppWithIdentifier:(id)arg0 ;
-(id)archivedTipStatuses;
-(id)collectionIdentifierToUseForCollectionIdentifiers:(id)arg0 ;
-(id)collectionStatusForCollectionIdentifier:(id)arg0 ;
-(id)dateForCollectionIdentifier:(id)arg0 dateType:(NSUInteger)arg1 ;
-(id)init;
-(id)reloadAppGroupDefaults;
-(void)activatedCollection:(id)arg0 ;
-(void)activatedCollections:(id)arg0 ;
-(void)clearDataCache;
-(void)deleteTipStatusArchivalDirectory;
-(void)featuredCollection:(id)arg0 ;
-(void)notifiedCollection:(id)arg0 ;
-(void)reloadModelInformation;
-(void)syncCollectionStatusMap;
-(void)updateCollectionStatus:(NSUInteger)arg0 collections:(id)arg1 ;
-(void)viewedCollection:(id)arg0 ;


@end


#endif