// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DT_GCDASYNCSOCKETPREBUFFER_H
#define _DT_GCDASYNCSOCKETPREBUFFER_H


#import <Foundation/Foundation.h>


@interface _DT_GCDAsyncSocketPreBuffer : NSObject {
    char * preBuffer;
    NSUInteger preBufferSize;
    char * readPointer;
    char * writePointer;
}




-(NSUInteger)availableBytes;
-(NSUInteger)availableSpace;
-(char *)readBuffer;
-(char *)writeBuffer;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)didRead:(NSUInteger)arg0 ;
-(void)didWrite:(NSUInteger)arg0 ;
-(void)ensureCapacityForWrite:(NSUInteger)arg0 ;
-(void)getReadBuffer:(*char *)arg0 availableBytes:(*NSUInteger)arg1 ;
-(void)getWriteBuffer:(*char *)arg0 availableSpace:(*NSUInteger)arg1 ;
-(void)reset;


@end


#endif