// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCAPPLICATIONPROXY_H
#define DMCAPPLICATIONPROXY_H

@class NSString, LSApplicationProxy, NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface DMCApplicationProxy : NSObject

@property (readonly, nonatomic) NSString *appIDEntitlement; // ivar: _appIDEntitlement
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (readonly, nonatomic) BOOL isBetaApp; // ivar: _isBetaApp
@property (readonly, nonatomic) BOOL isBlocked; // ivar: _isBlocked
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL isUserApp; // ivar: _isUserApp
@property (retain, nonatomic) LSApplicationProxy *lsApp; // ivar: _lsApp
@property (readonly, nonatomic) NSData *misCDHash; // ivar: _misCDHash
@property (readonly, nonatomic) NSNumber *misHashType; // ivar: _misHashType
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *signerID; // ivar: _signerID


+(id)_allApplications;
+(id)blockedApplications;
+(id)bookIconForVariant:(NSUInteger)arg0 ;
+(id)userApplications;
-(BOOL)_hasAppContentFilter;
-(BOOL)_hasAppDNSProxy;
-(BOOL)_hasAppVPN;
-(BOOL)_hasAssociatedDomains;
-(BOOL)_hasManagedRestrictions;
-(BOOL)_isExcludedFromBackup;
-(BOOL)_isExcludedFromCloudSync;
-(BOOL)_isNotRemovable;
-(BOOL)_isUnableToExportToUnmanaged;
-(BOOL)_isUnableToImportFromUnmanaged;
-(BOOL)_isUnableToUseCellData;
-(BOOL)_isUnableToUseRoamingCellData;
-(BOOL)_isUninstalledOnMDMRemoval;
-(BOOL)checkIsBlocked;
-(NSUInteger)misStateIncludingPending:(BOOL)arg0 ;
-(id)_lsIconDataForVariant:(NSUInteger)arg0 scale:(CGFloat)arg1 ;
-(id)_managedAppAttribute:(id)arg0 ;
-(id)iconForVariant:(NSUInteger)arg0 ;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithLSApplicationProxy:(id)arg0 ;
-(id)initWithLSApplicationRecord:(id)arg0 ;
-(id)managedAppConfigurationInfo;
-(id)misStateString;


@end


#endif