// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNRRESOURCEMANAGER_H
#define PNRRESOURCEMANAGER_H

@class NSDate, NSCache, NSMutableSet;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PNRResourceManager : NSObject {
    NSDate *_lastCatalogLoadTime;
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileDataCache;
    NSUInteger _stateCaptureHandle;
    NSObject<OS_os_log> *_log;
    NSMutableSet *_downloadsInflight;
    os_unfair_lock_s _downloadsInflightLock;
}




+(id)sharedManager;
-(BOOL)_lookupString:(id)arg0 inTrieMemory:(*void)arg1 value:(*unsigned int)arg2 ;
-(id)_assetQueryForPNRResource:(id)arg0 ;
-(id)_checkCacheForAssetName:(id)arg0 logId:(id)arg1 ;
-(id)_lastCatalogLoadTime;
-(id)_readAndCacheDataFrom:(id)arg0 forAssetName:(id)arg1 zeroCacheCost:(BOOL)arg2 logId:(id)arg3 ;
-(id)init;
-(struct os_state_data_s *)_stateCaptureWithHints:(struct os_state_hints_s *)arg0 ;
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
-(void)openNANPFileUsingLogId:(id)arg0 withResultBlock:(id)arg1 ;
-(void)openPNRFileForPrefix:(id)arg0 logId:(id)arg1 withResult:(id)arg2 ;
-(void)openPNRSFileForPrefix:(id)arg0 logId:(id)arg1 withResult:(id)arg2 ;


@end


#endif