// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASCOMPRESSION_H
#define _PASCOMPRESSION_H


#import <Foundation/Foundation.h>


@interface _PASCompression : NSObject



+(id)_compress:(id)arg0 fast:(BOOL)arg1 lowMemory:(BOOL)arg2 ;
+(id)compress:(id)arg0 fast:(BOOL)arg1 ;
+(id)compress:(id)arg0 lowMemory:(BOOL)arg1 ;
+(id)decompress:(id)arg0 ;
+(id)decompress:(id)arg0 maxLength:(NSInteger)arg1 ;
+(id)fastCompress:(id)arg0 ;


@end


#endif