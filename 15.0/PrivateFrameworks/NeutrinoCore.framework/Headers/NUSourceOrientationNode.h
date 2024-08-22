// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUSOURCEORIENTATIONNODE_H
#define NUSOURCEORIENTATIONNODE_H



#import "NUOrientationNode.h"

@interface NUSourceOrientationNode : NUOrientationNode

@property (readonly, nonatomic) BOOL skipOrientation; // ivar: _skipOrientation


+(NSInteger)originalOrientationToApplyToSource:(id)arg0 skipOrientation:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithInput:(id)arg0 source:(id)arg1 settings:(id)arg2 orientation:(NSInteger)arg3 ;
-(id)initWithOrientation:(NSInteger)arg0 input:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;


@end


#endif