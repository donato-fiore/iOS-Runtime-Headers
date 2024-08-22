// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PNRRESOURCEMANAGER_H
#define PNRRESOURCEMANAGER_H

@class NSDate, NSCache, NSMutableSet;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PNRResourceManager : NSObject {
    NSDate *_lastCatalogLoadTime;
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileDataCache;
    NSCache *_maURLCache;
    NSUInteger _stateCaptureHandle;
    NSObject<OS_os_log> *_log;
    NSMutableSet *_downloadsInflight;
    os_unfair_lock_s _downloadsInflightLock;
}




+(id)sharedManager;
-(BOOL)_lookupString:(id)arg0 inTrieMemory:(*void)arg1 value:(*unsigned int)arg2 ;
-(id)_assetQueryForPNRResource:(id)arg0 ;
-(id)_getDataFrom:(id)arg0 zeroCacheCost:(BOOL)arg1 logId:(id)arg2 ;
-(id)_lastCatalogLoadTime;
-(id)init;
-(void)_URLForInstalledResourceOfType:(id)arg0 logId:(id)arg1 resultBlock:(id)arg2 ;
-(void)_bestStringForInCountryPhoneNumber:(id)arg0 phoneNumberCC:(id)arg1 countryOfDevice:(id)arg2 countryTrieData:(id)arg3 countryStrings:(id)arg4 logId:(id)arg5 resultBlock:(id)arg6 ;
-(void)_catalogDownloadFinishedWithResult:(NSInteger)arg0 ;
-(void)_openLatestAssetWithBasename:(id)arg0 maType:(id)arg1 logId:(id)arg2 resultBlock:(id)arg3 ;
-(void)_setLastCatalogLoadTime:(id)arg0 ;
-(void)_updateCatalog;
-(void)_updateCatalogAfterDelay:(CGFloat)arg0 ;
-(void)catalogLoadThen:(id)arg0 ;
-(void)dealloc;
-(void)lookupCCForPhoneNumber:(id)arg0 logId:(id)arg1 withResult:(id)arg2 ;
-(void)lookupISOCountryCodeFromNANPNumber:(id)arg0 logId:(id)arg1 withResult:(id)arg2 ;
-(void)lookupStringForPhoneNumber:(id)arg0 inCC:(id)arg1 countryCodeOfDevice:(id)arg2 logId:(id)arg3 withResult:(id)arg4 ;
-(void)openCountryCodeFileUsingLogId:(id)arg0 withResult:(id)arg1 ;
-(void)openNANPFileUsingLogId:(id)arg0 withResult:(id)arg1 ;
-(void)openPNRFilesForPrefix:(id)arg0 logId:(id)arg1 withResult:(id)arg2 ;


@end


#endif