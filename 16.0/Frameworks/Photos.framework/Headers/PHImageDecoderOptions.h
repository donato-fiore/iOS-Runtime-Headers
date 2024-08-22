// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMAGEDECODEROPTIONS_H
#define PHIMAGEDECODEROPTIONS_H


#import <Foundation/Foundation.h>


@interface PHImageDecoderOptions : NSObject

@property (nonatomic) BOOL allowFallbackDecoder; // ivar: _allowFallbackDecoder
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (readonly, nonatomic) NSInteger maximumLongSideLength;
@property (nonatomic) CGRect normalizedCropRect; // ivar: _normalizedCropRect
@property (nonatomic) BOOL optimizeForDrawing; // ivar: _optimizeForDrawing
@property (nonatomic) BOOL preferSWDecode; // ivar: _preferSWDecode
@property (nonatomic) NSInteger resizeMode; // ivar: _resizeMode
@property (readonly, nonatomic) BOOL shouldCrop;
@property (nonatomic) BOOL shouldLoadGainMap; // ivar: _shouldLoadGainMap
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (nonatomic) BOOL useLowMemoryMode; // ivar: _useLowMemoryMode
@property (nonatomic) BOOL waitUntilComplete; // ivar: _waitUntilComplete


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif