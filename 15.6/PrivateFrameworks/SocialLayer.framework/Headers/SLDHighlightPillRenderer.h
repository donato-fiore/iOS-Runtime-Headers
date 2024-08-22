// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)_renderAvatarsInContext:(struct CGContext *)arg0 ;
-(void)dealloc;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif