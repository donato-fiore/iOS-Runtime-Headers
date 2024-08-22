// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFREEHANDDRAWINGANIMATIONPLAYBACKSESSION_H
#define TSDFREEHANDDRAWINGANIMATIONPLAYBACKSESSION_H

@class NSString;
@protocol TSDDynamicOverrideProvider;

#import <Foundation/Foundation.h>

#import "TSDFreehandDrawingInfo.h"
#import "TSDFreehandDrawingAnimationPlaybackTiming.h"

@interface TSDFreehandDrawingAnimationPlaybackSession : NSObject <TSDDynamicOverrideProvider>

 {
    TSDFreehandDrawingInfo *_drawingInfo;
    TSDFreehandDrawingAnimationPlaybackTiming *_timing;
    CGFloat _framesPerSecond;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) BOOL shouldParameterizeStrokes; // ivar: _shouldParameterizeStrokes
@property (readonly) Class superclass;


-(CGFloat)visibilityOfChild:(id)arg0 ;
-(id)dynamicOverrideForLayout:(id)arg0 ;
-(id)dynamicOverrideForRep:(id)arg0 ;
-(id)initWithFreehandDrawingInfo:(id)arg0 duration:(CGFloat)arg1 framesPerSecond:(CGFloat)arg2 ;
-(void)p_updateShouldParameterizeStrokes;


@end


#endif