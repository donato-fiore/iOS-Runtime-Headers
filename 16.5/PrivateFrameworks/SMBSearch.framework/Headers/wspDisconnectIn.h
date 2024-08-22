// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSPDISCONNECTIN_H
#define WSPDISCONNECTIN_H


#import <Foundation/Foundation.h>


@interface wspDisconnectIn : NSObject {
    ? msghdr;
}




-(id)init;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif