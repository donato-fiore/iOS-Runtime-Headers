// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLDEBUGFUNCTION_H
#define MTLDEBUGFUNCTION_H

@class MTLFunctionConstantValues;


#import "MTLToolsFunction.h"

@interface MTLDebugFunction : MTLToolsFunction

@property (retain, nonatomic) MTLFunctionConstantValues *constantValues; // ivar: _constantValues


-(id)bitcodeData;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)importedLibraries;
-(id)importedSymbols;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 pipelineLibrary:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 binaryArchives:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 pipelineLibrary:(id)arg2 ;
-(void)dealloc;


@end


#endif