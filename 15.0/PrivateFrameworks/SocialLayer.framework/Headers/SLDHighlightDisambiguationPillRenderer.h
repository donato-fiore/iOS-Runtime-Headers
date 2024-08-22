// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLDHIGHLIGHTDISAMBIGUATIONPILLRENDERER_H
#define SLDHIGHLIGHTDISAMBIGUATIONPILLRENDERER_H

@class NSArray, UISSlotStyle;

#import <Foundation/Foundation.h>

#import "SLHighlightDisambiguationPillMetrics.h"
#import "SLDHighlightDisambiguationPillSlotTag.h"

@interface SLDHighlightDisambiguationPillRenderer : NSObject

@property (nonatomic, getter=isRTL) BOOL RTL; // ivar: _RTL
@property (retain, nonatomic) NSArray *contactImages; // ivar: _contactImages
@property (retain, nonatomic) SLHighlightDisambiguationPillMetrics *metricsProvider; // ivar: _metricsProvider
@property (retain, nonatomic) UISSlotStyle *slotStyle; // ivar: _slotStyle
@property (retain, nonatomic) SLDHighlightDisambiguationPillSlotTag *slotTag; // ivar: _slotTag


-(id)initWithStyle:(id)arg0 tag:(id)arg1 ;
-(void)_renderAvatarInContext:(struct CGContext *)arg0 ;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif