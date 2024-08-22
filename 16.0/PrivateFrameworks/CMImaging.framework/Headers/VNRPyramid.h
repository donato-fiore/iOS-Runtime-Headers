// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRPYRAMID_H
#define VNRPYRAMID_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VNRPyramid : NSObject

@property (readonly) NSArray *chromaLevels; // ivar: _chromaLevels
@property (readonly) NSArray *lumaLevels; // ivar: _lumaLevels


-(id)initWithMetalDevice:(id)arg0 isForDeghosting:(BOOL)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 nLumaLevels:(NSUInteger)arg4 nChromaLevels:(NSUInteger)arg5 lumaStartingLevel:(NSUInteger)arg6 chromaStartingLevel:(NSUInteger)arg7 ;


@end


#endif