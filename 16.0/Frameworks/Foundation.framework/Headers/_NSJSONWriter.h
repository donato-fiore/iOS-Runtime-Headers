// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSJSONWRITER_H
#define _NSJSONWRITER_H

@class NSOutputStream;

#import <Foundation/Foundation.h>

#import "NSError.h"

@interface _NSJSONWriter : NSObject {
    NSOutputStream *outputStream;
    int kind;
    char * dataBuffer;
    NSUInteger dataBufferLen;
    NSUInteger dataLen;
    BOOL freeDataBuffer;
    char * tempBuffer;
    NSUInteger tempBufferLen;
    NSInteger totalDataWritten;
}


@property (retain) NSError *failure; // ivar: _failure


-(BOOL)appendString:(id)arg0 range:(struct _NSRange )arg1 ;
-(NSInteger)writeRootObject:(id)arg0 toStream:(id)arg1 options:(NSUInteger)arg2 ;
-(id)dataWithRootObject:(id)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif