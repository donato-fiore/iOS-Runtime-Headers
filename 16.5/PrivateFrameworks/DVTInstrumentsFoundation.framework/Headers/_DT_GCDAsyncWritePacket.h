// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DT_GCDASYNCWRITEPACKET_H
#define _DT_GCDASYNCWRITEPACKET_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _DT_GCDAsyncWritePacket : NSObject {
    NSData *buffer;
    NSUInteger bytesDone;
    NSInteger tag;
    CGFloat timeout;
}




-(id)initWithData:(id)arg0 timeout:(CGFloat)arg1 tag:(NSInteger)arg2 ;


@end


#endif