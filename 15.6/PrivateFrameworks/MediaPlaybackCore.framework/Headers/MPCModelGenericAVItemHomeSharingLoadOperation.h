// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELGENERICAVITEMHOMESHARINGLOADOPERATION_H
#define MPCMODELGENERICAVITEMHOMESHARINGLOADOPERATION_H

@class MPAsyncOperation;


#import "MPCModelGenericAVItemAssetLoadProperties.h"

@interface MPCModelGenericAVItemHomeSharingLoadOperation : MPAsyncOperation

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // ivar: _assetLoadProperties
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)execute;


@end


#endif