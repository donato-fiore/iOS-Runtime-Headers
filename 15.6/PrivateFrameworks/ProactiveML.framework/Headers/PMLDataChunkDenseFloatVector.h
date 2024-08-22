// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLDATACHUNKDENSEFLOATVECTOR_H
#define PMLDATACHUNKDENSEFLOATVECTOR_H



#import "PMLDataChunk.h"

@interface PMLDataChunkDenseFloatVector : PMLDataChunk

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) *float vector;


+(id)chunkWithVector:(*float)arg0 count:(int)arg1 ;
+(unsigned int)dataChunkType;
-(id)toVec;


@end


#endif