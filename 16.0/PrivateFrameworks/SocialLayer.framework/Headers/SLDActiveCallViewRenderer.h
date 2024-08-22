// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDACTIVECALLVIEWRENDERER_H
#define SLDACTIVECALLVIEWRENDERER_H

@class UISSlotStyle;

#import <Foundation/Foundation.h>

#import "SLDActiveCallViewSlotTag.h"

@interface SLDActiveCallViewRenderer : NSObject

@property (nonatomic, getter=isRTL) BOOL RTL; // ivar: _RTL
@property (retain, nonatomic) UISSlotStyle *slotStyle; // ivar: _slotStyle
@property (retain, nonatomic) SLDActiveCallViewSlotTag *slotTag; // ivar: _slotTag


-(id)initWithStyle:(id)arg0 tag:(id)arg1 ;
-(void)renderInContext:(struct CGContext *)arg0 ;


@end


#endif