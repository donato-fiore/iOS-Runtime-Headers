// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXASSETSSCENEANCHOR_H
#define _PXASSETSSCENEANCHOR_H


#import <Foundation/Foundation.h>

#import "PXAssetReference.h"

@interface _PXAssetsSceneAnchor : NSObject

@property (readonly, nonatomic) CGPoint anchorOrigin; // ivar: _anchorOrigin
@property (readonly, nonatomic) PXAssetReference *assetReference; // ivar: _assetReference
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance


-(id)initWithAssetReference:(id)arg0 anchorOrigin:(struct CGPoint )arg1 distance:(CGFloat)arg2 ;


@end


#endif