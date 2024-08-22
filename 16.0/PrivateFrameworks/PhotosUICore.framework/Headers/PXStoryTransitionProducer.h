// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTRANSITIONPRODUCER_H
#define PXSTORYTRANSITIONPRODUCER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXStoryTransitionProducer : NSObject

@property (retain, nonatomic) NSArray *fallbackTransitionReasons; // ivar: _fallbackTransitionReasons


+(BOOL)isSupportedTransitionWithKind:(char)arg0 betweenSegmentWithClipComposition:(struct ? )arg1 andSegmentWithClipComposition:(struct ? )arg2 ;
+(BOOL)isSupportedTransitionWithKind:(char)arg0 fromSegmentIdentifier:(NSInteger)arg1 toSegmentIdentifier:(NSInteger)arg2 inTimeline:(id)arg3 ;
+(id)supportedTransitionKinds;
-(id)_panTransitionsForOrderOutSegment:(id)arg0 orderInSegment:(id)arg1 viewportSize:(struct CGSize )arg2 transitionInfo:(struct ? )arg3 ;
-(id)_wipeTransitionsForOrderOutSegment:(id)arg0 orderInSegment:(id)arg1 viewportSize:(struct CGSize )arg2 dividerWidth:(CGFloat)arg3 transitionInfo:(struct ? )arg4 ;
-(id)transitionsWithConfiguration:(id)arg0 ;
-(void)_recordFallbackToCutTransitionBetweenSegmentWithIdentifier:(NSInteger)arg0 andSegmentWithIdentifier:(NSInteger)arg1 reason:(id)arg2 ;


@end


#endif