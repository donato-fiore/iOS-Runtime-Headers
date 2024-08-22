// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNMEMOIZEDMLMODEL_H
#define SNMEMOIZEDMLMODEL_H

@class NSString, MLModelDescription;
@protocol MLCustomModel, SNMLModel;

#import <Foundation/Foundation.h>


@interface SNMemoizedMLModel : NSObject <MLCustomModel, SNMLModel>

 {
    NSUInteger _maxCacheSize;
    unordered_map<SoundAnalysis::MD5Hash, id<MLFeatureProvider>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, std::allocator<std::pair<const SoundAnalysis::MD5Hash, id<MLFeatureProvider>>>> _cacheStorage;
    list<SoundAnalysis::MD5Hash, std::allocator<SoundAnalysis::MD5Hash>> _cacheAccessRecency;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLModelDescription *modelDescription;
@property (readonly) Class superclass;
@property (readonly) NSObject<SNMLModel> *wrappedModel; // ivar: _wrappedModel


+(NSUInteger)defaultMaxCacheSize;
+(id)new;
+(id)withWrappedModel:(id)arg0 ;
+(id)withWrappedModel:(id)arg0 maxCacheSize:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)initWithWrappedModel:(id)arg0 ;
-(id)initWithWrappedModel:(id)arg0 maxCacheSize:(NSUInteger)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif