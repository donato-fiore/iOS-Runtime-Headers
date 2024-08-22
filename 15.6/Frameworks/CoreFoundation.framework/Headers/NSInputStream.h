// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSINPUTSTREAM_H
#define NSINPUTSTREAM_H



#import "NSStream.h"

@interface NSInputStream : NSStream {
    unsigned char _reserved;
}


@property (readonly) BOOL hasBytesAvailable;




@end


#endif