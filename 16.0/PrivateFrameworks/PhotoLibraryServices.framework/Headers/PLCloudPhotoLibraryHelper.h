// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDPHOTOLIBRARYHELPER_H
#define PLCLOUDPHOTOLIBRARYHELPER_H


#import <Foundation/Foundation.h>


@interface PLCloudPhotoLibraryHelper : NSObject



+(BOOL)shouldClearPurgeableResourcesOnce;
+(BOOL)shouldHandleOptimizeModeChange;
+(BOOL)shouldMarkPurgeableResourcesOnce;
+(BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+(BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+(BOOL)shouldRepushVideoAssetsMetadataOnce;
+(BOOL)shouldSendOptimizeFeedbackOnce;
+(void)_donateTipsAppEnablementSignal;
+(void)disableCPL:(id)arg0 ;
+(void)enableCPL:(id)arg0 ;
+(void)setShouldClearPurgeableResourcesOnce:(BOOL)arg0 ;
+(void)setShouldHandleOptimizeModeChange:(BOOL)arg0 ;
+(void)setShouldMarkPurgeableResourcesOnce:(BOOL)arg0 ;
+(void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)arg0 ;
+(void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)arg0 ;
+(void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)arg0 ;
+(void)setShouldSendOptimizeFeedbackOnce:(BOOL)arg0 ;


@end


#endif