// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSETTINGSMEANINGMOMENTDATACONTAINER_H
#define PXSETTINGSMEANINGMOMENTDATACONTAINER_H

@class PHAssetCollection, PHFetchResult;

#import <Foundation/Foundation.h>


@interface PXSettingsMeaningMomentDataContainer : NSObject

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PHFetchResult *curatedAssets; // ivar: _curatedAssets


-(id)initWithCuratedAssets:(id)arg0 assetCollection:(id)arg1 ;


@end


#endif