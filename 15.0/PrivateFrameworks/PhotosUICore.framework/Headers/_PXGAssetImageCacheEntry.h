// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXGASSETIMAGECACHEENTRY_H
#define _PXGASSETIMAGECACHEENTRY_H

@class NSMutableIndexSet;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXGAssetImageCacheEntry : NSObject

@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (nonatomic) *CGImage cgImage; // ivar: _cgImage
@property (nonatomic) unsigned int imageOrientation; // ivar: _imageOrientation
@property (readonly, nonatomic) CGSize imageSize;
@property (nonatomic) BOOL isDegraded; // ivar: _isDegraded
@property (readonly, nonatomic) NSMutableIndexSet *requestIDs; // ivar: _requestIDs
@property (nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)init;
-(void)dealloc;
-(void)prepareForReuse;


@end


#endif