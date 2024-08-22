// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLDATACHUNKRAW_H
#define PMLDATACHUNKRAW_H

@class NSData;


#import "PMLDataChunk.h"

@interface PMLDataChunkRaw : PMLDataChunk

@property (readonly, nonatomic) NSData *data;


+(id)chunkWithData:(id)arg0 ;


@end


#endif