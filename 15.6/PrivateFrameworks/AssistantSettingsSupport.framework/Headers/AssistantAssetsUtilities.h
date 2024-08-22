// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTASSETSUTILITIES_H
#define ASSISTANTASSETSUTILITIES_H

@class TRIClient, AFSettingsConnection, NSString;

#import <Foundation/Foundation.h>


@interface AssistantAssetsUtilities : NSObject {
    TRIClient *_client;
    AFSettingsConnection *_connection;
}


@property (copy, nonatomic) NSString *requestedLanguage; // ivar: _requestedLanguage


-(BOOL)_assetsAreAvailable;
-(BOOL)_deviceSupportsUOD;
-(BOOL)_downloadAssetsWithState:(*NSUInteger)arg0 context:(*id)arg1 ;
-(BOOL)_hasInexpensiveNetwork;
-(BOOL)_supportsCurrentLocale;
-(NSInteger)_cacheDeleteAvailableWithStats:(struct statfs *)arg0 ;
-(NSUInteger)_getMockAssetStateWithContext:(*id)arg0 ;
-(id)_assetSpaceRequired;
-(id)_beginDownloadNamespaces:(id)arg0 ;
-(id)_currentLanguage;
-(id)_lowPoweredNamespaces;
-(id)_regionCodeFromLocale:(id)arg0 ;
-(id)_requiredNamespaces;
-(id)init;
-(unsigned int)_veryLowDiskThresholdWithStats:(struct statfs *)arg0 ;
-(void)_beginDownloadFactor:(id)arg0 inNamespace:(id)arg1 ;
// -(void)_downloadAssetsWithStatusHandler:(id)arg0 availableAttempts:(unk)arg1  ;
-(void)_emitDownloadTriggerEventWithLanguage:(id)arg0 hasExistingAssets:(BOOL)arg1 retryCount:(NSUInteger)arg2 ;
-(void)_statMountPoint:(struct statfs *)arg0 ;
-(void)_subscribeOnDemandAssetsForLanguage:(id)arg0 ;
-(void)checkAssetsWithStatusHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif