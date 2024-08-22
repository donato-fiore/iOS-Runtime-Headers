// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFZLIBDATACOMPRESSIONOPTIONS_H
#define PFZLIBDATACOMPRESSIONOPTIONS_H


#import <Foundation/Foundation.h>


@interface PFZlibDataCompressionOptions : NSObject

@property (nonatomic) int chunkSize; // ivar: _chunkSize
@property (nonatomic) int compressionLevel; // ivar: _compressionLevel
@property (nonatomic) int memoryLevel; // ivar: _memoryLevel
@property (nonatomic) int strategy; // ivar: _strategy
@property (nonatomic) int windowBits; // ivar: _windowBits


+(id)defaultOptions;
-(void)setCompressionStrategy:(int)arg0 ;


@end


#endif