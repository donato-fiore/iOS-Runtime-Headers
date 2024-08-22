// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OIPIESLICECGRENDERER_H
#define OIPIESLICECGRENDERER_H

@protocol OIPieSliceRenderer;

#import <Foundation/Foundation.h>


@interface OIPieSliceCGRenderer : NSObject <OIPieSliceRenderer>



@property *__OIChart chart; // ivar: _chart


-(id)initWithChart:(struct __OIChart *)arg0 ;
-(void)dealloc;
-(void)renderPieSliceFromSeries:(struct __OISeries *)arg0 radius:(CGFloat)arg1 angle:(CGFloat)arg2 newAngle:(CGFloat)arg3 xOffset:(CGFloat)arg4 yOffset:(CGFloat)arg5 thickness:(CGFloat)arg6 ;


@end


#endif