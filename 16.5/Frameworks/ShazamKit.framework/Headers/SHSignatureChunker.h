// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSIGNATURECHUNKER_H
#define SHSIGNATURECHUNKER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SHSignature.h"

@interface SHSignatureChunker : NSObject

@property (readonly, nonatomic) NSMutableDictionary *chunkPositionsInOriginalSignature; // ivar: _chunkPositionsInOriginalSignature
@property (readonly, nonatomic) SHSignature *originalSignature; // ivar: _originalSignature


-(BOOL)containsChunk:(id)arg0 ;
-(CGFloat)offsetInOriginalSignatureForChunk:(id)arg0 ;
-(id)chunksWithMaximumDuration:(CGFloat)arg0 andOverlapDuration:(CGFloat)arg1 ;
-(id)cropSignatureData:(id)arg0 atPosition:(CGFloat)arg1 withLength:(CGFloat)arg2 error:(*id)arg3 ;
-(id)initWithSignature:(id)arg0 ;
-(id)splitSignature:(id)arg0 fromStartPosition:(CGFloat)arg1 intoDurationsOfSize:(CGFloat)arg2 overlapDuration:(CGFloat)arg3 ;


@end


#endif