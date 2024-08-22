// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFKBUFFERMEMORYDESCRIPTOR_H
#define AFKBUFFERMEMORYDESCRIPTOR_H



#import "AFKMemoryDescriptor.h"

@interface AFKBufferMemoryDescriptor : AFKMemoryDescriptor



+(id)withManager:(id)arg0 capacity:(NSUInteger)arg1 ;
+(id)withManager:(id)arg0 capacity:(NSUInteger)arg1 token:(NSUInteger)arg2 ;
-(*void)getBytesNoCopy:(NSUInteger)arg0 withSize:(NSUInteger)arg1 ;
-(id)initWithManager:(id)arg0 capacity:(NSUInteger)arg1 buffer:(BOOL)arg2 ;
-(id)initWithManager:(id)arg0 capacity:(NSUInteger)arg1 token:(NSUInteger)arg2 ;
-(int)appendBytes:(*void)arg0 withSize:(NSUInteger)arg1 ;
-(int)assumeControlWithOffset:(NSUInteger)arg0 andSize:(NSUInteger)arg1 ;
-(int)releaseControl:(BOOL)arg0 withOffset:(NSUInteger)arg1 andSize:(NSUInteger)arg2 ;


@end


#endif