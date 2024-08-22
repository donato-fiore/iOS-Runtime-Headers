// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14SIRITTSSERVICE22TTSASSETSTATICRESOURCE_H
#define _TTC14SIRITTSSERVICE22TTSASSETSTATICRESOURCE_H

@class NSDictionary, NSBundle, NSNumber, NSString, NSArray;


#import "TTSAsset.h"
#import "TTSAssetSource.h"
#import "TTSAssetType.h"
#import "TTSAssetQuality.h"
#import "TTSAssetTechnology.h"

@interface _TtC14SiriTTSService22TTSAssetStaticResource : TTSAsset {
    ? asset;
    ? assetAttr;
}


@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) TTSAssetType *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) TTSAssetQuality *quality;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) TTSAssetTechnology *technology;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) NSInteger versionNumber;


-(id)init;


@end


#endif