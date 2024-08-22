// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXACTIVITYSHARINGCONTEXT_H
#define PXACTIVITYSHARINGCONTEXT_H

@class NSArray, PHFetchResult, PHPerson, NSString;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXPhotosDataSource.h"

@interface PXActivitySharingContext : NSObject

@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (readonly, copy, nonatomic) PHFetchResult *assetCollectionsFetchResult; // ivar: _assetCollectionsFetchResult
@property (nonatomic) BOOL excludeShareActivity; // ivar: _excludeShareActivity
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (retain, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (nonatomic) NSInteger sourceOrigin; // ivar: _sourceOrigin
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL wantsActionSheet; // ivar: _wantsActionSheet


-(id)init;
-(id)initWithAssetCollection:(id)arg0 assetsDataSource:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg0 photosDataSource:(id)arg1 ;


@end


#endif