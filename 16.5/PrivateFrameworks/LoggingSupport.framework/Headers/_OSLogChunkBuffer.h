// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSLOGCHUNKBUFFER_H
#define _OSLOGCHUNKBUFFER_H


#import <Foundation/Foundation.h>


@interface _OSLogChunkBuffer : NSObject {
    BOOL _allocated;
}


@property (readonly, nonatomic) char * data; // ivar: _data
@property (readonly, nonatomic) NSUInteger size; // ivar: _sz


-(id)initWithChunk:(struct tracev3_chunk_s *)arg0 subchunk:(struct catalog_subchunk_s *)arg1 ;
-(void)dealloc;


@end


#endif