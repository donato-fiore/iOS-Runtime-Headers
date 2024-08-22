// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFKMEMORYDESCRIPTOR_H
#define AFKMEMORYDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "AFKMemoryDescriptorManager.h"

@interface AFKMemoryDescriptor : NSObject {
    NSUInteger _cachedLength;
}


@property (readonly, nonatomic) char * buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (nonatomic) NSUInteger length;
@property (readonly, nonatomic) AFKMemoryDescriptorManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSUInteger regID; // ivar: _regID
@property (readonly, nonatomic) NSUInteger token; // ivar: _token


+(id)withManager:(id)arg0 capacity:(NSUInteger)arg1 ;
+(id)withManager:(id)arg0 capacity:(NSUInteger)arg1 token:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mapDescriptor;
-(id)initWithManager:(id)arg0 capacity:(NSUInteger)arg1 buffer:(BOOL)arg2 ;
-(id)initWithManager:(id)arg0 capacity:(NSUInteger)arg1 token:(NSUInteger)arg2 ;
-(int)assertPower:(BOOL)arg0 ;
-(int)assumeControl;
-(int)readBytes:(*void)arg0 size:(NSUInteger)arg1 fromOffset:(NSUInteger)arg2 ;
-(int)releaseControl:(BOOL)arg0 ;
-(int)writeBytes:(*void)arg0 size:(NSUInteger)arg1 toOffset:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)handleEnqueue;


@end


#endif