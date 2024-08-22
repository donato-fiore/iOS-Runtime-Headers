// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUACTIVITYSHARINGCONFIGURATION_H
#define PUACTIVITYSHARINGCONFIGURATION_H

@class NSArray, NSDictionary, PHFetchResult, PHPerson, PXPhotosDataSource, NSString;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PUPhotoSelectionManager.h"

@interface PUActivitySharingConfiguration : NSObject

@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (nonatomic) BOOL allowsAirPlayActivity; // ivar: _allowsAirPlayActivity
@property (nonatomic) BOOL allowsEditDateTimeActivity; // ivar: _allowsEditDateTimeActivity
@property (nonatomic) BOOL allowsEditLocationActivity; // ivar: _allowsEditLocationActivity
@property (nonatomic) BOOL allowsRemoveFromFeaturedPhotosActivity; // ivar: _allowsRemoveFromFeaturedPhotosActivity
@property (nonatomic) BOOL allowsSuggestLessPersonActivity; // ivar: _allowsSuggestLessPersonActivity
@property (copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection; // ivar: _assetsFetchResultsByAssetCollection
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult; // ivar: _collectionListFetchResult
@property (nonatomic) BOOL excludeShareActivity; // ivar: _excludeShareActivity
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (retain, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (readonly, nonatomic) PUPhotoSelectionManager *selectionManager; // ivar: _selectionManager
@property (nonatomic) NSInteger sourceOrigin; // ivar: _sourceOrigin
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL wantsActionSheet; // ivar: _wantsActionSheet


-(id)initWithCollectionsFetchResult:(id)arg0 selectionManager:(id)arg1 ;


@end


#endif