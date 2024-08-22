// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCPBUFFERPOOL_H
#define TCPBUFFERPOOL_H


#import <Foundation/Foundation.h>


@interface TCPBufferPool : NSObject {
    int poolSize;
    *tagBufferNode head;
    *tagBufferNode tail;
    *tagBufferNode avail;
    int poolLock;
}




-(char *)getBufferFromPool:(int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)monitorBufferPool;
-(void)returnBufferToPool:(char *)arg0 ;


@end


#endif