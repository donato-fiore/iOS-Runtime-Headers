// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXAUDIOASSETIMAGEPROVIDERREQUEST_H
#define _PXAUDIOASSETIMAGEPROVIDERREQUEST_H

@class PHImageRequestOptions;
@protocol PXAudioAssetImageProviderRequest, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXAudioAssetImageProviderRequest : NSObject <PXAudioAssetImageProviderRequest>



@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, nonatomic) PHImageRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) NSInteger requestID; // ivar: _requestID
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) NSUInteger signpostID; // ivar: _signpostID
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)description;
-(id)init;
// -(id)initWithAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 requestID:(unk)arg5 signpostID:(NSInteger)arg6  ;


@end


#endif