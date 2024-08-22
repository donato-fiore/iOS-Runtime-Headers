// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXKEYASSETSCOLLECTIONFETCHOPERATION_H
#define PXKEYASSETSCOLLECTIONFETCHOPERATION_H

@class NSDictionary;


#import "PXCollectionFetchOperation.h"

@interface PXKeyAssetsCollectionFetchOperation : PXCollectionFetchOperation

@property (nonatomic) NSInteger maxKeyAssets; // ivar: _maxKeyAssets
@property (retain, nonatomic) NSDictionary *outputOtherFetchResultsByAssetCollection; // ivar: _outputOtherFetchResultsByAssetCollection


-(void)main;


@end


#endif