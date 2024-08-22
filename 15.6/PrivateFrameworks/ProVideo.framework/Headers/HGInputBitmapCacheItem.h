// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HGINPUTBITMAPCACHEITEM_H
#define HGINPUTBITMAPCACHEITEM_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PVColorSpace.h"

@interface HGInputBitmapCacheItem : NSObject {
    vector<HGRef<HGBitmap>, std::allocator<HGRef<HGBitmap>>> _bitmaps;
}


@property ? bitmaps;
@property (readonly, nonatomic) PVColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) CGSize fullSize; // ivar: _fullSize
@property (readonly, nonatomic) HGRef<HGBitmap> gainMap; // ivar: _gainMap
@property (readonly, nonatomic) NSDate *lastUsedTime; // ivar: _lastUsedTime


-(id)initWithHGBitmap:(*void)arg0 fullSize:(struct CGSize )arg1 colorSpace:(id)arg2 gainMap:(struct HGRef<HGBitmap> )arg3 ;


@end


#endif