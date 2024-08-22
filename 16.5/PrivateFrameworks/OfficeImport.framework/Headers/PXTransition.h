// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTRANSITION_H
#define PXTRANSITION_H


#import <Foundation/Foundation.h>


@interface PXTransition : NSObject



+(?)readDirectiondefaultValue;
+(?)readInOutdefaultValue;
+(?)readOrientation:(?)arg0 attributedefaultValue;
+(?)readReverseDirectiondefaultValue;
+(?)readTransitionFromNode:(?)arg0 tgtTransitiondrawingState;
+(BOOL)isPowerPoint2010TransitionType:(int)arg0 ;
+(BOOL)isPowerPoint2013TransitionType:(int)arg0 ;
+(BOOL)mapDirection:(id)arg0 outDir:(*int)arg1 ;
+(id)directionAttributeMap;
+(id)reverseDirectionAttributeMap;
+(id)transitionNodeMap;
+(void)writeDirection:(int)arg0 file:(id)arg1 ;
+(void)writeInOut:(int)arg0 file:(id)arg1 ;
+(void)writeOrientation:(int)arg0 withAttributeName:(id)arg1 file:(id)arg2 ;
+(void)writeReverseDirection:(int)arg0 file:(id)arg1 ;
+(void)writeReverseInOut:(int)arg0 file:(id)arg1 ;
+(void)writeReverseOrientation:(int)arg0 withAttributeName:(id)arg1 file:(id)arg2 ;
+(void)writeTransitionAttributes:(id)arg0 attributePrefix:(id)arg1 file:(id)arg2 ;
+(void)writeTransitionFromSlideBase:(id)arg0 file:(id)arg1 state:(id)arg2 ;
+(void)writeTransitionOptions:(id)arg0 transitionType:(int)arg1 file:(id)arg2 ;


@end


#endif