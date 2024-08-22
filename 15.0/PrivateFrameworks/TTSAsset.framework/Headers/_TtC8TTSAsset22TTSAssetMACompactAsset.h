// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8TTSASSET22TTSASSETMACOMPACTASSET_H
#define _TTC8TTSASSET22TTSASSETMACOMPACTASSET_H

@class TtC8TTSAsset15TTSAssetMAAsset, NSBundle;


#import "TTSAssetQuality.h"

@interface _TtC8TTSAsset22TTSAssetMACompactAsset : TtC8TTSAsset15TTSAssetMAAsset

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) TTSAssetQuality *quality;


-(void)purge;


@end


#endif