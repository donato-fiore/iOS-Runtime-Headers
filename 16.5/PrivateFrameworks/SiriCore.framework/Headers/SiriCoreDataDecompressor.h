// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICOREDATADECOMPRESSOR_H
#define SIRICOREDATADECOMPRESSOR_H


#import <Foundation/Foundation.h>


@interface SiriCoreDataDecompressor : NSObject



-(id)decompressedDataForBytes:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)decompressedDataForData:(id)arg0 error:(*id)arg1 ;


@end


#endif