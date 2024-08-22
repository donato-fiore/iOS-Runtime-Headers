// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERCONFIGURATIONUPDATER_H
#define PUWALLPAPERCONFIGURATIONUPDATER_H

@class PHPhotoLibrary, PFPosterConfiguration, NSURL;
@protocol PUPosterOverrideConfiguration;

#import <Foundation/Foundation.h>


@interface PUWallpaperConfigurationUpdater : NSObject

@property (readonly, nonatomic) NSObject<PUPosterOverrideConfiguration> *overrideConfiguration; // ivar: _overrideConfiguration
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PFPosterConfiguration *sourceConfiguration; // ivar: _sourceConfiguration
@property (readonly, nonatomic) NSURL *targetAssetDirectory; // ivar: _targetAssetDirectory


-(id)initWithPhotoLibrary:(id)arg0 sourceConfiguration:(id)arg1 targetAssetDirectory:(id)arg2 overrideConfiguration:(id)arg3 ;
-(void)_handleSegmentationItem:(id)arg0 error:(id)arg1 completionBlock:(id)arg2 ;
-(void)attemptUpdateWithCompletionBlock:(id)arg0 ;


@end


#endif