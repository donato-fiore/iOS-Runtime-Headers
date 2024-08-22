// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVPIXELBUFFERCACHEITEM_H
#define CVPIXELBUFFERCACHEITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PVColorSpace.h"

@interface CVPixelBufferCacheItem : NSObject

@property (readonly, nonatomic) NSArray *DODs; // ivar: _DODs
@property (readonly, nonatomic) NSArray *buffers; // ivar: _buffers
@property (readonly, nonatomic) PVColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) CGSize fullSize; // ivar: _fullSize


-(id)initWithCVPixelBuffers:(id)arg0 DODs:(id)arg1 fullSize:(struct CGSize )arg2 colorSpace:(id)arg3 ;


@end


#endif