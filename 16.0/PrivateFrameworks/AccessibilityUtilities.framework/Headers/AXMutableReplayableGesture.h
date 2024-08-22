// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMUTABLEREPLAYABLEGESTURE_H
#define AXMUTABLEREPLAYABLEGESTURE_H



#import "AXReplayableGesture.h"

@interface AXMutableReplayableGesture : AXReplayableGesture



-(id)_forcesByFingerIdentifierAtEventIndex:(NSUInteger)arg0 ;
-(id)_pointsByFingerIdentifierAtEventIndex:(NSUInteger)arg0 ;
-(void)_addPoint:(struct CGPoint )arg0 force:(CGFloat)arg1 forFingerIdentifier:(id)arg2 atEventIndex:(NSUInteger)arg3 ;
-(void)_addPoint:(struct CGPoint )arg0 force:(CGFloat)arg1 forFingerIdentifier:(id)arg2 atTime:(CGFloat)arg3 ;
-(void)_removeFingersAtEventIndex:(NSUInteger)arg0 ;
-(void)addPointsByFingerIdentifier:(id)arg0 forces:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)addPointsFromReplayableGesture:(id)arg0 ;


@end


#endif