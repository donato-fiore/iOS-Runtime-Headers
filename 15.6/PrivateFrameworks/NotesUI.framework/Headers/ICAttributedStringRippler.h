// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTRIBUTEDSTRINGRIPPLER_H
#define ICATTRIBUTEDSTRINGRIPPLER_H

@class NSArray, UIColor, UIFont, NSAttributedString;

#import <Foundation/Foundation.h>


@interface ICAttributedStringRippler : NSObject

@property (nonatomic) NSUInteger animateFrames; // ivar: _animateFrames
@property (copy, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, nonatomic) NSUInteger currentTimeIndex;
@property (nonatomic) NSUInteger delayFrames; // ivar: _delayFrames
@property (retain, nonatomic) UIColor *endColor; // ivar: _endColor
@property (readonly, nonatomic) NSUInteger finishedTimeIndex;
@property (retain, nonatomic) UIFont *initialFont; // ivar: _initialFont
@property (nonatomic) CGFloat initialFontSize; // ivar: _initialFontSize
@property (nonatomic) NSUInteger postFrames; // ivar: _postFrames
@property (nonatomic) NSUInteger preFrames; // ivar: _preFrames
@property (nonatomic) BOOL reduceMotion; // ivar: _reduceMotion
@property (copy, nonatomic) NSArray *scales; // ivar: _scales
@property (copy, nonatomic) NSArray *shadowColors; // ivar: _shadowColors
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (copy, nonatomic) NSAttributedString *string; // ivar: _string


+(BOOL)canAnimateString:(id)arg0 ;
+(CGFloat)refreshInterval;
+(NSUInteger)framesPerSecond;
-(BOOL)finishedForTimeIndex:(NSUInteger)arg0 ;
-(CGFloat)currentScaleForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(NSUInteger)currentIndexForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 isFinished:(*BOOL)arg3 ;
-(id)attributedStringForTimeIndex:(NSUInteger)arg0 ;
-(id)currentColorForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(id)currentShadowColorForGlyphIndex:(NSUInteger)arg0 numberOfGlyphs:(NSUInteger)arg1 timeIndex:(NSUInteger)arg2 ;
-(id)initWithAttributedString:(id)arg0 endColor:(id)arg1 ;
-(void)generateValues;
-(void)start;


@end


#endif