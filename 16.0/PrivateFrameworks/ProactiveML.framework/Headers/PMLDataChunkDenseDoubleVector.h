// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLDATACHUNKDENSEDOUBLEVECTOR_H
#define PMLDATACHUNKDENSEDOUBLEVECTOR_H



#import "PMLDataChunk.h"

@interface PMLDataChunkDenseDoubleVector : PMLDataChunk

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) *CGFloat vector;


+(id)chunkWithVector:(*CGFloat)arg0 count:(int)arg1 ;
+(unsigned int)dataChunkType;


@end


#endif