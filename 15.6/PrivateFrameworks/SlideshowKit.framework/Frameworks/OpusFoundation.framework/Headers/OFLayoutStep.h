// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFLAYOUTSTEP_H
#define OFLAYOUTSTEP_H


#import <Foundation/Foundation.h>

#import "OFViewProxy.h"

@interface OFLayoutStep : NSObject

@property (readonly) NSUInteger anchorAttribute; // ivar: _anchorAttribute
@property (readonly) CGFloat anchorSizeMultiplier; // ivar: _anchorSizeMultiplier
@property (readonly) OFViewProxy *anchorView; // ivar: _anchorView
@property (readonly) CGFloat constant; // ivar: _constant
@property (readonly) CGFloat multiplier; // ivar: _multiplier
@property (readonly) NSInteger relation; // ivar: _relation
@property (readonly) NSUInteger targetAttribute; // ivar: _targetAttribute
@property (readonly) CGFloat targetSizeMultiplier; // ivar: _targetSizeMultiplier
@property (readonly) OFViewProxy *targetView; // ivar: _targetView


+(BOOL)_parseCGPoint:(struct CGPoint *)arg0 withScanner:(id)arg1 ;
+(NSUInteger)layoutAttributeFromScanner:(id)arg0 ;
+(id)_stepFrom1DString:(id)arg0 targetView:(id)arg1 anchorView:(id)arg2 ;
+(id)_stepsFrom2DString:(id)arg0 targetView:(id)arg1 anchorView:(id)arg2 ;
+(id)stepForTarget:(id)arg0 attribute:(NSUInteger)arg1 sizeMultiplier:(CGFloat)arg2 relatedBy:(NSInteger)arg3 toAnchorView:(id)arg4 attribute:(NSUInteger)arg5 sizeMultiplier:(CGFloat)arg6 multiplier:(CGFloat)arg7 constant:(CGFloat)arg8 ;
+(id)stepsFromString:(id)arg0 targetView:(id)arg1 anchorView:(id)arg2 ;
-(id)init;
-(void)run;


@end


#endif