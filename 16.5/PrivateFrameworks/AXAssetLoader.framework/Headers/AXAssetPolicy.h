// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXASSETPOLICY_H
#define AXASSETPOLICY_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface AXAssetPolicy : NSObject

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetTypeSuffix;
@property (retain, nonatomic) NSNumber *compatibilityVersion; // ivar: _compatibilityVersion
@property (nonatomic) BOOL daemonShouldDownloadInBackgroundIfNeeded; // ivar: _daemonShouldDownloadInBackgroundIfNeeded
@property (nonatomic) CGFloat downloadResourceTimeout; // ivar: _downloadResourceTimeout
@property (nonatomic) CGFloat downloadRetryInterval; // ivar: _downloadRetryInterval
@property (retain, nonatomic) NSString *launchActivityIdentifier; // ivar: _launchActivityIdentifier
@property (retain, nonatomic) NSNumber *maxSupportedFormatVersion; // ivar: _maxSupportedFormatVersion
@property (retain, nonatomic) NSNumber *minSupportedFormatVersion; // ivar: _minSupportedFormatVersion
@property (nonatomic) CGFloat refreshRetryInterval; // ivar: _refreshRetryInterval
@property (readonly, nonatomic) BOOL shouldCopyLocally;
@property (nonatomic) CGFloat updateCatalogTimeout; // ivar: _updateCatalogTimeout
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval


+(id)policy;
-(BOOL)_isAssetSupportedBasedOnCompatibilityVersion:(id)arg0 ;
-(BOOL)_isAssetSupportedBasedOnMinMaxFormatVersion:(id)arg0 ;
-(BOOL)isAssetContentVersion:(id)arg0 greatherThanInstalledAssets:(id)arg1 ;
-(BOOL)isAssetSupported:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldDownloadAsset:(id)arg0 withInstalledAssets:(id)arg1 ;
-(NSUInteger)hash;
-(id)assetsToDownloadFromRefreshedAssets:(id)arg0 ;
-(id)assetsToPurgeFromInstalledAssets:(id)arg0 ;
-(id)assetsToPurgeFromInstalledAssets:(id)arg0 withRefreshedAssets:(id)arg1 ;
-(id)description;
-(id)downloadOptionsForOperation:(NSUInteger)arg0 userInitiated:(BOOL)arg1 ;
-(id)init;
-(id)newAssetQuery;


@end


#endif