// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSAKSERIALIZERSTREAM_H
#define NSAKSERIALIZERSTREAM_H

@protocol NSSerializerStream;

#import <Foundation/Foundation.h>


@interface NSAKSerializerStream : NSObject <NSSerializerStream>

 {
    *void memory;
    NSUInteger current;
    NSUInteger max;
    *__CFDictionary roomForIntLocations;
}




-(BOOL)writeToPath:(id)arg0 safely:(BOOL)arg1 ;
-(NSUInteger)writeAlignedDataSize:(NSUInteger)arg0 ;
-(NSUInteger)writeData:(*void)arg0 length:(NSUInteger)arg1 ;
-(NSUInteger)writeInt:(NSUInteger)arg0 ;
-(NSUInteger)writeRoomForInt:(*int)arg0 ;
-(void)copySerializationInto:(*void)arg0 ;
-(void)dealloc;
-(void)writeDelayedInt:(NSUInteger)arg0 for:(int)arg1 ;


@end


#endif