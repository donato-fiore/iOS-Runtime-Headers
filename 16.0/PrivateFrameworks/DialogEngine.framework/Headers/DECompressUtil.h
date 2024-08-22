// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DECOMPRESSUTIL_H
#define DECOMPRESSUTIL_H


#import <Foundation/Foundation.h>


@interface DECompressUtil : NSObject



+(BOOL)advanceZStream:(struct z_stream_s *)arg0 function:(*unk)arg1 input:(id)arg2 output:(id)arg3 flush:(int)arg4 streamEnded:(*BOOL)arg5 ;
+(void)initZStream:(struct z_stream_s *)arg0 ;


@end


#endif