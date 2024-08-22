// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPSNAPPYCOMPONENTWRITECHANNEL_H
#define TSPSNAPPYCOMPONENTWRITECHANNEL_H

@class NSString;
@protocol TSPComponentWriteChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel>

 {
    NSObject<OS_dispatch_queue> *_writeQueue;
    char _uncompressedBuffer;
    NSUInteger _uncompressedLength;
    id<TSPComponentWriteChannel> *_writeChannel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWriteChannel:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)writeBlock;
-(void)writeData:(id)arg0 ;


@end


#endif