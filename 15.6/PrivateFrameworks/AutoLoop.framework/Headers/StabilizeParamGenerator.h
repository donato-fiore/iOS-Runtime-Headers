// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STABILIZEPARAMGENERATOR_H
#define STABILIZEPARAMGENERATOR_H


#import <Foundation/Foundation.h>

#import "AutoLoopStabilizer.h"

@interface StabilizeParamGenerator : NSObject

@property (retain, nonatomic) AutoLoopStabilizer *stabilizer; // ivar: stabilizer


-(id)generatePassThruForAsset:(id)arg0 trimStart:(struct ? )arg1 trimLength:(struct ? )arg2 ;
-(id)generateStabilizeParams;
-(id)generateTrivialPassThruForFrameTimes:(*void)arg0 totalDuration:(struct ? )arg1 ;
-(id)initWithStabilizer:(id)arg0 ;
-(void)CopyCoordinateShiftedHomographies:(*void)arg0 firstIndex:(NSUInteger)arg1 lastIndex:(NSUInteger)arg2 toStabilizeParams:(id)arg3 withImageBounds:(struct CGSize )arg4 ;
-(void)ICGetIdentityHomographies:(*void)arg0 toStabilizeParams:(id)arg1 withImageBounds:(struct CGSize )arg2 firstFrameIndex:(NSUInteger)arg3 lastFrameIndex:(NSUInteger)arg4 ;


@end


#endif