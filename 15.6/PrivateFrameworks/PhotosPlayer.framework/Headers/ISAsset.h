// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISASSET_H
#define ISASSET_H

@class AVAsset;

#import <Foundation/Foundation.h>


@interface ISAsset : NSObject {
    id *_UIImage;
}


@property (readonly, nonatomic) BOOL hasColorAdjustments;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) *CGImage photo; // ivar: _photo
@property (readonly, nonatomic) ? photoCMTime;
@property (readonly, nonatomic) int photoEXIFOrientation; // ivar: _photoEXIFOrientation
@property (readonly, nonatomic) CGFloat photoTime; // ivar: _photoTime
@property (readonly, copy, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset


+(id)assetForURL:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithVideoAsset:(id)arg0 UIImage:(id)arg1 photoTime:(CGFloat)arg2 photoEXIFOrientation:(int)arg3 options:(NSUInteger)arg4 ;
-(id)initWithVideoAsset:(id)arg0 photo:(struct CGImage *)arg1 photoTime:(CGFloat)arg2 ;
-(id)initWithVideoAsset:(id)arg0 photo:(struct CGImage *)arg1 photoTime:(CGFloat)arg2 options:(NSUInteger)arg3 ;
-(id)initWithVideoAsset:(id)arg0 photo:(struct CGImage *)arg1 photoTime:(CGFloat)arg2 photoEXIFOrientation:(int)arg3 ;
-(id)initWithVideoAsset:(id)arg0 photo:(struct CGImage *)arg1 photoTime:(CGFloat)arg2 photoEXIFOrientation:(int)arg3 options:(NSUInteger)arg4 ;
-(void)dealloc;
-(void)resetAVObjects;


@end


#endif