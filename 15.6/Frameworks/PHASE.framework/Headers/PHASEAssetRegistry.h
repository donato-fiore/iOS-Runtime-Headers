// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEASSETREGISTRY_H
#define PHASEASSETREGISTRY_H

@class NSDictionary, NSMutableDictionary;
@protocol MetaParameterValueProtocol;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEAssetRegistry : NSObject <MetaParameterValueProtocol>

 {
    PHASEEngine *_engine;
    unordered_map<unsigned long long, PHASEAsset *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PHASEAsset *>>> _assetLookup;
    unordered_map<unsigned long long, std::unique_ptr<Phase::StringPool>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::unique_ptr<Phase::StringPool>>>> _stringPools;
}


@property (readonly, copy) NSDictionary *globalMetaParameters;
@property (retain, nonatomic) NSMutableDictionary *metaParameterDictionary; // ivar: _metaParameterDictionary


+(id)new;
-(*void)getActionTree:(NSUInteger)arg0 ;
-(*void)getChannelMapping:(NSUInteger)arg0 ;
-(*void)getGlobalMetaParameter:(NSUInteger)arg0 ;
-(BOOL)addAssetInternal:(id)arg0 assetId:(NSUInteger)arg1 outError:(*id)arg2 ;
-(BOOL)addAssetInternal:(id)arg0 assetId:(NSUInteger)arg1 stringPoolBuilder:(*void)arg2 outError:(*id)arg3 ;
-(BOOL)removeAssetInternal:(id)arg0 ;
-(char *)getString:(NSUInteger)arg0 ;
-(char *)getStringEmpty:(NSUInteger)arg0 ;
-(id)assetForIdentifier:(id)arg0 ;
-(id)getAssetForUID:(id)arg0 ;
-(id)getMixerInformationForActionTreeWithUID:(id)arg0 ;
-(id)getUniqueIdentifier;
-(id)init;
-(id)initWithEngine:(id)arg0 ;
-(id)makeMetaParameterFromDefinition:(id)arg0 ;
-(id)makeSoundAssetWithURL:(id)arg0 uid:(id)arg1 assetType:(NSInteger)arg2 channelLayout:(id)arg3 normalizationMode:(NSInteger)arg4 outError:(*id)arg5 ;
-(id)mixerInformationForActionTreeWithIdentifier:(id)arg0 ;
-(id)registerActionTreeWithRootNode:(id)arg0 uid:(id)arg1 outError:(*id)arg2 ;
-(id)registerGlobalMetaParameter:(id)arg0 error:(*id)arg1 ;
-(id)registerJSONDataBundleWithURL:(id)arg0 assetBaseURL:(id)arg1 identifier:(id)arg2 error:(*id)arg3 ;
-(id)registerJSONDataBundleWithURL:(id)arg0 assetBaseURL:(id)arg1 uid:(id)arg2 outError:(*id)arg3 ;
-(id)registerSoundAssetAtURL:(id)arg0 identifier:(id)arg1 assetType:(NSInteger)arg2 channelLayout:(id)arg3 normalizationMode:(NSInteger)arg4 error:(*id)arg5 ;
-(id)registerSoundAssetWithAudioFileData:(id)arg0 identifier:(id)arg1 assetType:(NSInteger)arg2 fileTypeHint:(unsigned int)arg3 channelLayout:(id)arg4 error:(*id)arg5 ;
-(id)registerSoundAssetWithAudioFileData:(id)arg0 identifier:(id)arg1 assetType:(NSInteger)arg2 fileTypeHint:(unsigned int)arg3 channelLayout:(id)arg4 normalizationMode:(NSInteger)arg5 error:(*id)arg6 ;
-(id)registerSoundAssetWithAudioFileData:(id)arg0 uid:(id)arg1 assetType:(NSInteger)arg2 fileTypeHint:(unsigned int)arg3 channelLayout:(id)arg4 referenceGainDBSPL:(CGFloat)arg5 outError:(*id)arg6 ;
-(id)registerSoundAssetWithData:(id)arg0 identifier:(id)arg1 format:(id)arg2 normalizationMode:(NSInteger)arg3 error:(*id)arg4 ;
-(id)registerSoundAssetWithData:(id)arg0 uid:(id)arg1 format:(id)arg2 referenceGainDBSPL:(CGFloat)arg3 outError:(*id)arg4 ;
-(id)registerSoundAssetWithURL:(id)arg0 uid:(id)arg1 assetType:(NSInteger)arg2 channelLayout:(id)arg3 referenceGainDBSPL:(CGFloat)arg4 outError:(*id)arg5 ;
-(id)registerSoundEventAssetWithRootNode:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
-(id)registerSoundEventAssetWithRootNode:(id)arg0 uid:(id)arg1 error:(*id)arg2 ;
-(struct SoundAssetInfo *)getSoundAssetInfo:(NSUInteger)arg0 ;
-(void)setMetaParameter:(id)arg0 value:(CGFloat)arg1 withTimeInterval:(CGFloat)arg2 ;
-(void)setMetaParameter:(id)arg0 value:(id)arg1 ;
-(void)unregisterAssetWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)unregisterAssetWithIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)unregisterAssetWithUID:(id)arg0 ;
-(void)unregisterAssetWithUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif