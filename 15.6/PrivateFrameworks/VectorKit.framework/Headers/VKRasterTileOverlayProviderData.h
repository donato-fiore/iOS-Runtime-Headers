// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKRASTERTILEOVERLAYPROVIDERDATA_H
#define VKRASTERTILEOVERLAYPROVIDERDATA_H

@protocol VKRasterTileOverlayProviderDelegate;

#import <Foundation/Foundation.h>


@interface VKRasterTileOverlayProviderData : NSObject {
    CGFloat _alpha;
}


@property (nonatomic) CGFloat alpha;
@property (nonatomic) *CGImage colorMap; // ivar: _colorMap
@property (readonly, nonatomic) BOOL crossfadeKeyframes; // ivar: _crossfadeKeyframes
@property (nonatomic) NSObject<VKRasterTileOverlayProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) int keyframeIndexOverride; // ivar: _keyframeIndexOverride
@property (readonly, nonatomic) unsigned short keyframesCount; // ivar: _keyframesCount
@property (readonly, nonatomic) unsigned int maximumZ; // ivar: _maximumZ
@property (readonly, nonatomic) unsigned int minimumZ; // ivar: _minimumZ
@property (readonly, nonatomic) unsigned int providerID; // ivar: _providerID
@property (readonly, nonatomic) unsigned int tileSize; // ivar: _tileSize
@property (nonatomic) unsigned int visibleKeyframeIndex; // ivar: _visibleKeyframeIndex


-(id)initWithProviderID:(unsigned int)arg0 tileSize:(unsigned int)arg1 minimumZ:(unsigned int)arg2 maximumZ:(unsigned int)arg3 keyframesCount:(unsigned short)arg4 duration:(CGFloat)arg5 crossfadeKeyframes:(BOOL)arg6 ;
-(void)dealloc;


@end


#endif