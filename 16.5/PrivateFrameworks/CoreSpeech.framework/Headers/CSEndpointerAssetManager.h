// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSENDPOINTERASSETMANAGER_H
#define CSENDPOINTERASSETMANAGER_H

@class NSDictionary, CSAsset, NSString, NSHashTable;
@protocol CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, CESRTrialAssetDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, CESRTrialAssetDelegate>



@property (retain, nonatomic) NSDictionary *asrDatapackInstallationStatus; // ivar: _asrDatapackInstallationStatus
@property (retain, nonatomic) CSAsset *currentHEPAsset; // ivar: _currentHEPAsset
@property (retain, nonatomic) CSAsset *currentOEPAsset; // ivar: _currentOEPAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_isOSDIncludedInAsset:(id)arg0 ;
-(id)_fetchEndpointMobileAssetWithLanguage:(id)arg0 ;
-(id)_getCurrentHEPAsset;
-(id)_getFakeEndpointAsset;
-(id)_getModelPathFromInstallationStatusString:(id)arg0 ;
-(id)_getOEPVersionFromPath:(id)arg0 ;
-(id)getCurrentEndpointerAsset;
-(id)getCurrentOSDAsset;
-(id)init;
-(void)CSAssetManagerDidDownloadNewAsset:(id)arg0 ;
-(void)CSFirstUnlockMonitor:(id)arg0 didReceiveFirstUnlock:(BOOL)arg1 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)_notifyAssetsUpdate;
-(void)_updateAssetWithCurrentLanguageForAssetType:(NSUInteger)arg0 ;
-(void)_updateAssetWithLanguage:(id)arg0 assetType:(NSUInteger)arg1 ;
-(void)_updateOEPAssetsWithLanguage:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)assetStatus:(id)arg0 ;
-(void)checkFirstUnlocked;
-(void)removeObserver:(id)arg0 ;


@end


#endif