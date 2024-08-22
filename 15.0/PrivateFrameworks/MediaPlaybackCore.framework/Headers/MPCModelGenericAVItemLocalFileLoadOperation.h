// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELGENERICAVITEMLOCALFILELOADOPERATION_H
#define MPCMODELGENERICAVITEMLOCALFILELOADOPERATION_H

@class MPAsyncOperation;


#import "MPCModelGenericAVItemAssetLoadProperties.h"

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // ivar: _assetLoadProperties
@property (nonatomic) BOOL requirePreferredAssetQuality; // ivar: _requirePreferredAssetQuality
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(BOOL)isHLSFileAsset:(id)arg0 ;
-(NSInteger)_loadedAudioAssetTypeForFileAsset:(id)arg0 ;
-(void)execute;


@end


#endif