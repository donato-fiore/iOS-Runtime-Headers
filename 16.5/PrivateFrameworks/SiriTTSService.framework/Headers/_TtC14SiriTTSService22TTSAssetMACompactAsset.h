// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14SIRITTSSERVICE22TTSASSETMACOMPACTASSET_H
#define _TTC14SIRITTSSERVICE22TTSASSETMACOMPACTASSET_H

@class TtC14SiriTTSService15TTSAssetMAAsset, NSBundle;


#import "TTSAssetQuality.h"

@interface _TtC14SiriTTSService22TTSAssetMACompactAsset : TtC14SiriTTSService15TTSAssetMAAsset

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) TTSAssetQuality *quality;


-(void)purge;


@end


#endif