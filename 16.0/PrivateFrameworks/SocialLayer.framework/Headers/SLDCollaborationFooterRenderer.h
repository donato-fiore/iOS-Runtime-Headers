// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCOLLABORATIONFOOTERRENDERER_H
#define SLDCOLLABORATIONFOOTERRENDERER_H

@class UISSlotStyle;

#import <Foundation/Foundation.h>

#import "SLDCollaborationFooterMetrics.h"
#import "SLDCollaborationFooterSlotTag.h"

@interface SLDCollaborationFooterRenderer : NSObject

@property (readonly, nonatomic) SLDCollaborationFooterMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) UISSlotStyle *slotStyle; // ivar: _slotStyle
@property (retain, nonatomic) SLDCollaborationFooterSlotTag *slotTag; // ivar: _slotTag


-(id)initWithStyle:(id)arg0 tag:(id)arg1 ;
-(void)_renderString:(id)arg0 inRect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;
-(void)_renderSubtitleInContext:(struct CGContext *)arg0 titleRect:(struct CGRect )arg1 ;
-(void)_renderTitleInContext:(struct CGContext *)arg0 resultingRect:(struct CGRect *)arg1 ;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif