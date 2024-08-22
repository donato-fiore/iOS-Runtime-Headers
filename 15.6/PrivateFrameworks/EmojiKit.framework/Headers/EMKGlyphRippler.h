// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMKGLYPHRIPPLER_H
#define EMKGLYPHRIPPLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EMKGlyphRippler : NSObject {
    NSArray *_colors;
    NSArray *_darkModeColors;
    NSArray *_shadowColors;
    NSArray *_darkModeShadowColors;
    NSArray *_scales;
    NSArray *_offsets;
    CGFloat _startTime;
    NSUInteger _preFrames;
    NSUInteger _animateFrames;
    NSUInteger _postFrames;
    NSUInteger _delayFrames;
    BOOL _reduceMotion;
    BOOL _darkMode;
}




-(BOOL)finishedForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(CGFloat)currentScaleForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(NSUInteger)currentIndexForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 isFinished:(*BOOL)arg3 ;
-(NSUInteger)currentTimeIndex;
-(id)currentColorForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(id)currentShadowColorForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(id)init;
-(struct CGSize )currentOffsetForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(void)generateValues;
-(void)setDelayFrames:(NSUInteger)arg0 ;
-(void)setPostFrames:(NSUInteger)arg0 ;
-(void)setPreFrames:(NSUInteger)arg0 ;
-(void)start;
-(void)startWithDarkMode:(BOOL)arg0 ;


@end


#endif