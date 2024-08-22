// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8TTSASSET18TTSASSETPROXYASSET_H
#define _TTC8TTSASSET18TTSASSETPROXYASSET_H

@class NSNumber, NSDictionary, NSBundle, NSString, NSArray;


#import "TTSAsset.h"
#import "TTSAssetSource.h"
#import "TTSAssetType.h"
#import "TTSAssetQuality.h"
#import "TTSAssetTechnology.h"

@interface _TtC8TTSAsset18TTSAssetProxyAsset : TTSAsset {
    ? cookie;
    ? assetQuality;
    ? bundlePath;
    ? authorizedBundle;
    ? proxy_attr;
    ? isDownloading;
}


@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) NSInteger gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSInteger versionNumber;


-(id)init;
-(void)cancelDownloadingThen:(id)arg0 ;
// -(void)downloadWithReservation:(id)arg0 useBattery:(BOOL)arg1 progress:(id)arg2 then:(unk)arg3  ;
-(void)purge;


@end


#endif