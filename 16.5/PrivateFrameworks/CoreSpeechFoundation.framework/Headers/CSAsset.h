// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSASSET_H
#define CSASSET_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CSAsset : NSObject {
    NSDictionary *_decodedInfo;
}


@property (readonly, nonatomic) NSUInteger assetProvider; // ivar: _assetProvider
@property (readonly, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *hashFromResourcePath;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *resourcePath; // ivar: _resourcePath


+(BOOL)isLeftConfigVersion:(id)arg0 newerThanRightConfigVersion:(id)arg1 ;
+(NSUInteger)parseCompatibilityFromConfigVersion:(id)arg0 ;
+(id)assetForAssetType:(NSUInteger)arg0 resourcePath:(id)arg1 configVersion:(id)arg2 ;
+(id)assetForAssetType:(NSUInteger)arg0 resourcePath:(id)arg1 configVersion:(id)arg2 assetProvider:(NSUInteger)arg3 ;
+(id)decodeJson:(id)arg0 ;
+(id)defaultFallBackAssetForAdBlocker;
+(id)defaultFallBackAssetForHearst;
+(id)defaultFallBackAssetForSmartSiriVolume;
+(id)defaultFallBackAssetForVoiceTrigger;
+(id)getConfigFileNameForAssetType:(NSUInteger)arg0 ;
+(id)hybridEndpointerAssetFilename;
-(BOOL)containsCategory:(id)arg0 ;
-(BOOL)containsKey:(id)arg0 category:(id)arg1 ;
-(BOOL)getBoolForKey:(id)arg0 category:(id)arg1 default:(BOOL)arg2 ;
-(BOOL)isEqualAsset:(id)arg0 ;
-(id)_sha1ForString:(id)arg0 ;
-(id)assetHashForTrial:(id)arg0 ;
-(id)assetHashInResourcePath:(id)arg0 ;
-(id)description;
-(id)getNumberForKey:(id)arg0 category:(id)arg1 default:(id)arg2 ;
-(id)getStringForKey:(id)arg0 category:(id)arg1 default:(id)arg2 ;
-(id)getValueForKey:(id)arg0 category:(id)arg1 ;
-(id)initWithResourcePath:(id)arg0 configFile:(id)arg1 configVersion:(id)arg2 assetProvderType:(NSUInteger)arg3 ;
-(id)stringForCurrentAssetProviderType;


@end


#endif