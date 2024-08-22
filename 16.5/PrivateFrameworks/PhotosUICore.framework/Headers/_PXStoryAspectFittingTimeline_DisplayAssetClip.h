// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYASPECTFITTINGTIMELINE_DISPLAYASSETCLIP_H
#define _PXSTORYASPECTFITTINGTIMELINE_DISPLAYASSETCLIP_H

@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXStoryAspectFittingTimeline_DisplayAssetClip : NSObject

@property (nonatomic) CGRect clipFrame; // ivar: _clipFrame
@property (nonatomic) ? clipInfo; // ivar: _clipInfo
@property (nonatomic) ? clipTimeRange; // ivar: _clipTimeRange
@property (retain, nonatomic) NSObject<PXDisplayAsset> *displayAsset; // ivar: _displayAsset
@property (readonly, nonatomic) NSUInteger orientation;
@property (nonatomic) CGRect transformedFrame; // ivar: _transformedFrame
@property (nonatomic) CGFloat weight; // ivar: _weight


-(NSInteger)compareByClipFrameOriginX:(id)arg0 ;
-(NSInteger)compareByClipFrameOriginY:(id)arg0 ;


@end


#endif