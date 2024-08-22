// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRMOBILEASSETPROVIDER_H
#define SSRMOBILEASSETPROVIDER_H

@class NSString;
@protocol SSRAssetProviding;

#import <Foundation/Foundation.h>


@interface SSRMobileAssetProvider : NSObject <SSRAssetProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_getEndpointAssetCurrentCompatibilityVersion;
-(NSUInteger)_getSSRAssetCurrentCompatibilityVersion;
-(NSUInteger)_getVoiceTriggerAssetCurrentCompatibilityVersion;
-(NSUInteger)getAssetProviderType;
-(id)_buildAssetQueryForAssetType:(NSUInteger)arg0 ;
-(id)_filteredAssets:(id)arg0 forLanguage:(id)arg1 ;
-(id)_findLatestInstalledAsset:(id)arg0 ;
-(id)_getEndpointAssetTypeString;
-(id)_getSSRAssetTypeString;
-(id)_getVoiceTriggerAssetTypeString;
-(id)_installedMobileAssetOfType:(NSUInteger)arg0 forLanguage:(id)arg1 ;
-(id)allInstalledAssetsOfType:(NSUInteger)arg0 forLanguage:(id)arg1 ;
-(id)installedAssetOfType:(NSUInteger)arg0 forLanguageCode:(id)arg1 ;


@end


#endif