// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGIMAGEREQUESTSHAREDSTATE_H
#define PXGIMAGEREQUESTSHAREDSTATE_H

@protocol PXGDisplayAssetAdjustment, PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver;

#import <Foundation/Foundation.h>


@interface PXGImageRequestSharedState : NSObject

@property (readonly, nonatomic) NSObject<PXGDisplayAssetAdjustment> *adjustment; // ivar: _adjustment
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssetFetchResult; // ivar: _displayAssetFetchResult
@property (readonly, nonatomic) NSUInteger intent; // ivar: _intent
@property (readonly, nonatomic) NSObject<PXGDisplayAssetRequestObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSUInteger presentationStyles; // ivar: _presentationStyles
@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)initWithDisplayAssetFetchResult:(id)arg0 observer:(id)arg1 presentationStyles:(NSUInteger)arg2 targetSize:(struct CGSize )arg3 screenScale:(CGFloat)arg4 adjustment:(id)arg5 intent:(NSUInteger)arg6 ;


@end


#endif