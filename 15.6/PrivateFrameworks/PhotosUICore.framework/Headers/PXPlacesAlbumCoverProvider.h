// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESALBUMCOVERPROVIDER_H
#define PXPLACESALBUMCOVERPROVIDER_H

@class UIImage, NSString, NSMutableDictionary, PXPlacesSnapshotFactory, PHAssetCollection;
@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;

#import <Foundation/Foundation.h>


@interface PXPlacesAlbumCoverProvider : NSObject {
    UIImage *_cachedSnapshotImage;
    NSString *_cachedSnapshotImageIdentifier;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
}


@property (nonatomic) NSInteger cachedCount; // ivar: _cachedCount
@property (retain, nonatomic) NSMutableDictionary *cachedPlaceholders; // ivar: _cachedPlaceholders
@property (retain, nonatomic) PXPlacesSnapshotFactory *factory; // ivar: _factory
@property (retain, nonatomic) NSObject<PXPlacesSnapshotFactoryDelegate> *factoryDelegate; // ivar: _factoryDelegate
@property (retain, nonatomic) PHAssetCollection *placesCollection; // ivar: _placesCollection


+(id)_cachedSnapshotPathDark;
+(id)_cachedSnapshotPathForFilename:(id)arg0 ;
+(id)_cachedSnapshotPathLight;
-(BOOL)_fetchCachedSnapshotImage:(*id)arg0 andIdentifier:(*id)arg1 forUserInterfaceStyle:(NSInteger)arg2 ;
-(BOOL)_imageExistsWithLocalIdentifier:(id)arg0 ;
-(id)_placeHolderImageForExtendedTraitCollection:(id)arg0 ;
-(id)backgroundImageNameForType:(NSUInteger)arg0 usingTraitCollection:(id)arg1 ;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 andPlacesCollection:(id)arg1 ;
-(id)placesAlbumCoverProviderLog;
-(void)preloadCachedSnapshotForUserInterfaceStyle:(NSInteger)arg0 ;
-(void)preloadPlaceholderForTraitCollection:(id)arg0 ;
-(void)requestAssetCountWithForcedRefresh:(BOOL)arg0 completion:(id)arg1 ;
-(void)requestPlacesAlbumCover:(id)arg0 snapshotTraitCollection:(id)arg1 completion:(id)arg2 ;


@end


#endif