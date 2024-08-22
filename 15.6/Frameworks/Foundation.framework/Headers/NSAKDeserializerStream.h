// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSAKDESERIALIZERSTREAM_H
#define NSAKDESERIALIZERSTREAM_H

@protocol NSDeserializerStream;

#import <Foundation/Foundation.h>


@interface NSAKDeserializerStream : NSObject <NSDeserializerStream>

 {
    *void memory;
    char * current;
    NSUInteger left;
    NSUInteger max;
    BOOL freeWhenDone;
}




-(NSUInteger)readAlignedDataSize;
-(id)initFromMemoryNoCopy:(*void)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initFromPath:(id)arg0 ;
-(int)readInt;
-(void)dealloc;
-(void)readData:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif