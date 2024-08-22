// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDHIGHLIGHTPILLRENDERER_H
#define SLDHIGHLIGHTPILLRENDERER_H

@class NSArray, UISSlotStyle;

#import <Foundation/Foundation.h>

#import "SLHighlightPillMetrics.h"
#import "SLDHighlightPillSlotTag.h"

@interface SLDHighlightPillRenderer : NSObject

@property (nonatomic, getter=isRTL) BOOL RTL; // ivar: _RTL
@property (retain, nonatomic) NSArray *contactImages; // ivar: _contactImages
@property (nonatomic) *__CTFont font; // ivar: _font
@property (retain, nonatomic) SLHighlightPillMetrics *metricsProvider; // ivar: _metricsProvider
@property (retain, nonatomic) UISSlotStyle *slotStyle; // ivar: _slotStyle
@property (retain, nonatomic) SLDHighlightPillSlotTag *slotTag; // ivar: _slotTag


-(id)initWithStyle:(id)arg0 tag:(id)arg1 ;
-(struct CGImage *)_newAvatarImageFromImageData:(id)arg0 ;
-(void)_drawAvatarImage:(struct CGImage *)arg0 inContext:(struct CGContext *)arg1 atRect:(struct CGRect )arg2 ;
-(void)_drawKnockoutBorderWidth:(CGFloat)arg0 atXPosition:(CGFloat)arg1 aroundImageWithYPosition:(CGFloat)arg2 diameter:(CGFloat)arg3 inContext:(struct CGContext *)arg4 ;
-(void)_renderAvatarsInContext:(struct CGContext *)arg0 ;
-(void)dealloc;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif