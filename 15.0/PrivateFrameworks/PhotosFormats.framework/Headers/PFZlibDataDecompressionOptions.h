// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFZLIBDATADECOMPRESSIONOPTIONS_H
#define PFZLIBDATADECOMPRESSIONOPTIONS_H


#import <Foundation/Foundation.h>


@interface PFZlibDataDecompressionOptions : NSObject

@property (copy, nonatomic) id *createBuffer; // ivar: _createBuffer
@property (nonatomic) BOOL decompressAllAtOnce; // ivar: _decompressAllAtOnce
@property (copy, nonatomic) id *growData; // ivar: _growData
@property (nonatomic) int windowBits; // ivar: _windowBits


+(id)defaultOptions;


@end


#endif