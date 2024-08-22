// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPPTCONFIGURATION_H
#define PXSTORYPPTCONFIGURATION_H

@class PHAssetCollection, NSString;

#import <Foundation/Foundation.h>


@interface PXStoryPPTConfiguration : NSObject

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (readonly, nonatomic) NSUInteger assetType; // ivar: _assetType
@property (readonly, nonatomic) NSInteger collectionType; // ivar: _collectionType
@property (readonly, nonatomic) NSString *contentDescription; // ivar: _contentDescription
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) CGFloat preferredStoryDuration; // ivar: _preferredStoryDuration
@property (nonatomic) NSUInteger subpreset; // ivar: _subpreset
@property (readonly, nonatomic) BOOL useDefaultMemory; // ivar: _useDefaultMemory


+(id)configurationsForPreset:(NSUInteger)arg0 subpreset:(NSUInteger)arg1 testOptions:(id)arg2 ;
+(void)_configureConfiguration:(id)arg0 forSubpreset:(NSUInteger)arg1 ;
+(void)_fetchLatestMemoriesWithMaximumCount:(NSInteger)arg0 resultHandler:(id)arg1 ;
+(void)_requestPhotoLibraryWithResultHandler:(id)arg0 ;
-(id)_stringFromAssetCount:(NSUInteger)arg0 ;
-(id)_stringFromAssetType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 name:(id)arg1 ;
-(id)initWithAssetType:(NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(id)initWithDefaultMemory;
-(id)initWithLatestCollectionOfType:(NSInteger)arg0 ;
-(id)initWithPreset:(NSUInteger)arg0 ;
-(void)_completeConfigurationRequestWithAssetCollection:(id)arg0 resultHandler:(id)arg1 ;
-(void)_completeConfigurationRequestWithFetchResult:(id)arg0 resultHandler:(id)arg1 ;
-(void)_completeConfigurationRequestWithStoryConfiguration:(id)arg0 resultHandler:(id)arg1 ;
// -(void)_configureWithMemoryFetchResultProvider:(id)arg0 resultHandler:(unk)arg1  ;
-(void)_createSyntheticAssetsWithResultHandler:(id)arg0 ;
-(void)_fetchAssetsWithResultHandler:(id)arg0 ;
-(void)_fetchDefaultMemoryWithResultHandler:(id)arg0 ;
-(void)_fetchLatestAssetCollectionOfType:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(void)_fetchMemoryByLocalIdentifier:(id)arg0 resultHandler:(id)arg1 ;
-(void)_fetchMemoryByName:(id)arg0 resultHandler:(id)arg1 ;
-(void)_performPhotoLibraryFetch:(id)arg0 ;
-(void)requestStoryConfigurationWithOptions:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif