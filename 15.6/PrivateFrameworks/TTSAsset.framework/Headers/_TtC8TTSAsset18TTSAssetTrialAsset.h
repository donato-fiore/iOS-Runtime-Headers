// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8TTSASSET18TTSASSETTRIALASSET_H
#define _TTC8TTSASSET18TTSASSETTRIALASSET_H

@class NSBundle, NSNumber, NSArray, NSString;


#import "TTSAsset.h"
#import "TTSAssetSource.h"

@interface _TtC8TTSAsset18TTSAssetTrialAsset : TTSAsset {
    ? factorName;
    ? assetAttr;
    ? path;
    ? isDownloading;
    ? downloadToken;
}


@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSInteger versionNumber;


-(id)init;
-(void)cancelDownloadingThen:(id)arg0 ;
// -(void)downloadWithReservation:(id)arg0 useBattery:(BOOL)arg1 progress:(id)arg2 then:(unk)arg3  ;
-(void)purge;


@end


#endif