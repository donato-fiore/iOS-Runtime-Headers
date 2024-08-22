// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKMEDIAFEEDERPHOTOKIT_H
#define OKMEDIAFEEDERPHOTOKIT_H

@class NSString, NSDictionary, NSArray, PHAssetCollection, PHFetchResult, PHFetchOptions;
@protocol PHPhotoLibraryChangeObserver;


#import "OKMediaFeeder.h"

@interface OKMediaFeederPhotoKit : OKMediaFeeder <PHPhotoLibraryChangeObserver>

 {
    NSUInteger _type;
    NSString *_collectionIdentifier;
    NSDictionary *_predicate;
    NSArray *_sortDescriptors;
}


@property (retain) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly) NSUInteger hash;
@property (retain) PHFetchOptions *options; // ivar: _options
@property (readonly) Class superclass;


+(BOOL)isRemote;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithAllAssetsWithOptions:(id)arg0 ;
+(id)mediaFeederWithAssetCollection:(id)arg0 andOptions:(id)arg1 ;
+(id)mediaFeederWithFetchResult:(id)arg0 ;
+(id)supportedSettings;
-(BOOL)canBePersisted;
-(NSUInteger)numberOfMediaObjects;
-(id)feederSettings;
-(id)indexesForMediaObjects:(id)arg0 ;
-(id)init;
-(id)initWithAllAssetsWithOptions:(id)arg0 ;
-(id)initWithAssetCollection:(id)arg0 andOptions:(id)arg1 ;
-(id)initWithFetchResult:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)mediaObjectURLsAtIndexes:(id)arg0 ;
-(id)mediaObjectsAtIndexes:(id)arg0 ;
-(id)photoLibrary;
-(id)reloadMediaObjectsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif