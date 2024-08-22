// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTRANSITWALKINGSEGMENTINSTRUCTION_H
#define MNTRANSITWALKINGSEGMENTINSTRUCTION_H

@class GEOComposedWalkingRouteSegment;


#import "MNTransitInstruction.h"

@interface MNTransitWalkingSegmentInstruction : MNTransitInstruction

@property (readonly, nonatomic) GEOComposedWalkingRouteSegment *walkingSegment; // ivar: _walkingSegment


+(id)instructionForWalkingSegment:(id)arg0 context:(NSInteger)arg1 ;
-(id)initWithWalkingSegment:(id)arg0 context:(NSInteger)arg1 ;
-(id)instructionSet;
-(id)overridenInstructionsMapping;


@end


#endif