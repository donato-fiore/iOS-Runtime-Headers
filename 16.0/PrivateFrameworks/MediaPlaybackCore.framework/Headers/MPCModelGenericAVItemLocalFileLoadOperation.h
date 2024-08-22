// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMODELGENERICAVITEMLOCALFILELOADOPERATION_H
#define MPCMODELGENERICAVITEMLOCALFILELOADOPERATION_H

@class MPAsyncOperation;


#import "MPCModelGenericAVItemAssetLoadProperties.h"
#import "MPCAssetLoadPropertiesLocalFileEvaluation.h"

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation

@property (readonly, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // ivar: _assetLoadProperties
@property (readonly, nonatomic) MPCAssetLoadPropertiesLocalFileEvaluation *fileAssetEvaluation; // ivar: _fileAssetEvaluation
@property (nonatomic) BOOL requirePreferredAssetQuality; // ivar: _requirePreferredAssetQuality
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)initWithEvaluation:(id)arg0 properties:(id)arg1 ;
-(void)execute;


@end


#endif