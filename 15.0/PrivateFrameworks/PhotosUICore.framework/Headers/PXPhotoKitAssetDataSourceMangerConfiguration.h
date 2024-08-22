// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETDATASOURCEMANGERCONFIGURATION_H
#define PXPHOTOKITASSETDATASOURCEMANGERCONFIGURATION_H

@class PHFetchResult, PHCollection, NSArray, PHPhotoLibrary;

#import <Foundation/Foundation.h>


@interface PXPhotoKitAssetDataSourceMangerConfiguration : NSObject {
    NSInteger _type;
    id *_content;
}


@property (readonly, nonatomic) PHFetchResult *assetCollections;
@property (retain, nonatomic) PHCollection *containerCollection; // ivar: _containerCollection
@property (retain, nonatomic) NSArray *fetchPropertySets; // ivar: _fetchPropertySets
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)initWithAssetCollections:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 content:(id)arg1 ;


@end


#endif