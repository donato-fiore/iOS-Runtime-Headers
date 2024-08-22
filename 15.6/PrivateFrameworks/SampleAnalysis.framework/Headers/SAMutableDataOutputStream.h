// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMUTABLEDATAOUTPUTSTREAM_H
#define SAMUTABLEDATAOUTPUTSTREAM_H

@class NSMutableData;


#import "SAOutputStream.h"

@interface SAMutableDataOutputStream : SAOutputStream {
    NSMutableData *_outputData;
}




-(BOOL)hasSpaceAvailable;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(int)appendData:(id)arg0 ;


@end


#endif