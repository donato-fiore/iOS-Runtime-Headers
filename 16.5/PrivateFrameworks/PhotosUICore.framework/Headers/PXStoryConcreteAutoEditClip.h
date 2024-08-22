// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETEAUTOEDITCLIP_H
#define PXSTORYCONCRETEAUTOEDITCLIP_H

@class NSDictionary, NSArray;
@protocol PXStoryMutableAutoEditClip;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteAutoEditClip : NSObject <PXStoryMutableAutoEditClip>



@property (nonatomic) ? audioInfo; // ivar: _audioInfo
@property (copy, nonatomic) NSDictionary *debugInfo; // ivar: _debugInfo
@property (readonly, nonatomic) NSArray *displayAssets; // ivar: _displayAssets
@property (nonatomic) ? durationInfo; // ivar: _durationInfo
@property (nonatomic) CGFloat durationMultiplier; // ivar: _durationMultiplier
@property (nonatomic) ? moduleInfo; // ivar: _moduleInfo
@property (nonatomic) ? motionInfo; // ivar: _motionInfo
@property (nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (nonatomic) ? transitionInfo; // ivar: _transitionInfo


+(id)composedClipWithClips:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDisplayAsset:(id)arg0 ;
-(id)initWithDisplayAssets:(id)arg0 ;


@end


#endif