// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUACTIVITYITEMSOURCECONFIGURATION_H
#define PUACTIVITYITEMSOURCECONFIGURATION_H

@class NSString, PHAsset, PHAssetExportRequestOptions, NSDictionary;

#import <Foundation/Foundation.h>


@interface PUActivityItemSourceConfiguration : NSObject

@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSInteger assetExportKind; // ivar: _assetExportKind
@property (readonly, nonatomic) PHAssetExportRequestOptions *assetExportRequestOptions; // ivar: _assetExportRequestOptions
@property (readonly, nonatomic) NSUInteger maxFileSizeLimit; // ivar: _maxFileSizeLimit
@property (readonly, nonatomic) NSInteger outputType; // ivar: _outputType
@property (readonly, nonatomic) BOOL requiresAssetExport; // ivar: _requiresAssetExport
@property (nonatomic) ? sharingPreferences; // ivar: _sharingPreferences
@property (copy, nonatomic) NSDictionary *sharingVariants; // ivar: _sharingVariants


+(BOOL)_dontAllowRAWForActivityType:(id)arg0 ;
+(BOOL)isAssetBundleSupportedByActivityType:(id)arg0 ;
+(BOOL)isIndividualItemPreparationSupportedByActivityType:(id)arg0 ;
+(BOOL)isLivePhotoBundleSupportedByActivityType:(id)arg0 ;
+(BOOL)isMomentShareLinkSupportedByActivityType:(id)arg0 ;
+(BOOL)shouldExcludeAlternateVariantForActivityType:(id)arg0 ;
+(BOOL)shouldProvideAlternateVariantForActivityType:(id)arg0 forAsset:(id)arg1 withAvailableSharingVariants:(id)arg2 ;
+(BOOL)shouldProvideCompatibleFormatForActivityType:(id)arg0 forAsset:(id)arg1 withAvailableSharingVariants:(id)arg2 ;
+(BOOL)supportsAssetLocalIdentifierForActivityType:(id)arg0 ;
+(NSUInteger)maxFileSizeLimitForActivityType:(id)arg0 asset:(id)arg1 ;
+(id)_activitiesThatDontAllowRAW;
+(id)_activitiesThatDontRequireAssetExport;
+(id)_activitiesThatDontSupportMomentShareLinks;
+(id)_activitiesThatOnlySupportMomentShareLinks;
+(id)_activitiesThatSupportAssetBundles;
+(id)_activitiesThatSupportHEIFHEVC;
+(id)_activitiesThatSupportLivePhotoBundles;
+(id)_photosActionSheetActivities;
+(id)_photosInternalActivities;
+(id)_systemActivitiesThatDontSupportMomentShareLinks;
+(id)descriptionForAssetExportKind:(NSInteger)arg0 ;
+(id)descriptionForOutputType:(NSInteger)arg0 ;
-(BOOL)_requiresAssetExportForAsset:(id)arg0 forActivityType:(id)arg1 ;
-(BOOL)_requiresAssetsLibraryURLForAsset:(id)arg0 forActivityType:(id)arg1 ;
-(BOOL)_shouldFlattenSlomoVideoForActivityType:(id)arg0 ;
-(BOOL)_wantsAssetBundleForActivityType:(id)arg0 ;
-(BOOL)_wantsLivePhotoBundleForActivityType:(id)arg0 ;
-(id)_customAccessibilityLabel;
-(id)_videoExportFileTypeForActivityType:(id)arg0 ;
-(id)_videoExportPresetForActivityType:(id)arg0 ;
-(id)initWithAsset:(id)arg0 availableSharingVariants:(id)arg1 activityType:(id)arg2 preferences:(struct ? )arg3 ;
-(void)_configure;


@end


#endif