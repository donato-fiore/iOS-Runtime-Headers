// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXGMEDIAREQUEST_H
#define _PXGMEDIAREQUEST_H

@protocol PXGDisplayAssetAdjustment, PXDisplayAsset, PXGDisplayAssetRequestObserver;

#import <Foundation/Foundation.h>


@interface _PXGMediaRequest : NSObject

@property (retain, nonatomic) NSObject<PXGDisplayAssetAdjustment> *adjustment; // ivar: _adjustment
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (nonatomic) CGSize bestReceivedSize; // ivar: _bestReceivedSize
@property (nonatomic) BOOL gotAnyResult; // ivar: _gotAnyResult
@property (readonly, nonatomic) NSObject<PXGDisplayAssetRequestObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSUInteger postProcessOptions; // ivar: _postProcessOptions


-(id)initWithAsset:(id)arg0 observer:(id)arg1 postProcessOptions:(NSUInteger)arg2 ;


@end


#endif