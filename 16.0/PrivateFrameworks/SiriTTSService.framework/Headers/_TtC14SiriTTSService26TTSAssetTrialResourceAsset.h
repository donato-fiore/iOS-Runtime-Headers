// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14SIRITTSSERVICE26TTSASSETTRIALRESOURCEASSET_H
#define _TTC14SIRITTSSERVICE26TTSASSETTRIALRESOURCEASSET_H

@class TtC14SiriTTSService18TTSAssetTrialAsset, NSNumber, NSDictionary, NSString;


#import "TTSAssetType.h"
#import "TTSAssetQuality.h"
#import "TTSAssetTechnology.h"

@interface _TtC14SiriTTSService26TTSAssetTrialResourceAsset : TtC14SiriTTSService18TTSAssetTrialAsset

@property (nonatomic, readonly) NSNumber *age;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSInteger gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) TTSAssetTechnology *technology;




@end


#endif