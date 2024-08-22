// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEKLIGHTINGFRAMECACHE_H
#define CEKLIGHTINGFRAMECACHE_H

@class NSIndexSet, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CEKLightingFrameCache : NSObject

@property (readonly, nonatomic) NSIndexSet *_availableAbsoluteAngles; // ivar: __availableAbsoluteAngles
@property (retain, nonatomic) NSDictionary *_backgroundFrameMapsByLightingType; // ivar: __backgroundFrameMapsByLightingType
@property (retain, nonatomic) NSMutableDictionary *_foregroundFramesByAvailableAngle; // ivar: __foregroundFramesByAvailableAngle
@property (readonly, nonatomic) NSUInteger angleCount;


-(BOOL)_needsBackgroundFrame;
-(BOOL)_needsForegroundFrames;
-(NSInteger)angleOfAvailableFrameForAngle:(NSInteger)arg0 ;
-(id)_appearanceForLightingType:(NSInteger)arg0 ;
-(id)_renderBackgroundFramesForAbsoluteAngles:(id)arg0 lightingType:(NSInteger)arg1 scale:(CGFloat)arg2 ;
-(id)_renderForegroundFramesForAbsoluteAngles:(id)arg0 scale:(CGFloat)arg1 ;
-(id)_renderFrameForAngle:(NSInteger)arg0 scale:(CGFloat)arg1 components:(NSInteger)arg2 appearance:(id)arg3 ;
-(id)backgroundFrameForAngle:(NSInteger)arg0 lightingType:(NSInteger)arg1 ;
-(id)foregroundFrameForAngle:(NSInteger)arg0 ;
-(id)init;
-(void)preloadBackgroundFrames;
-(void)preloadForegroundFrames;


@end


#endif