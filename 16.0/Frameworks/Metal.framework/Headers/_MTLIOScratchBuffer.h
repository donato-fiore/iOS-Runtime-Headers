// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLIOSCRATCHBUFFER_H
#define _MTLIOSCRATCHBUFFER_H

@class NSString;
@protocol MTLIOScratchBuffer, MTLBuffer;

#import <Foundation/Foundation.h>


@interface _MTLIOScratchBuffer : NSObject <MTLIOScratchBuffer>

 {
    *MTLIOScratchBufferPrivate _priv;
}


@property (readonly) NSObject<MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init:(struct MTLIOScratchBufferPrivate *)arg0 ;
-(void)dealloc;


@end


#endif