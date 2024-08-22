// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDATABUFFERPOOL_H
#define BWDATABUFFERPOOL_H

@class NSString, NSDictionary;
@protocol BWDataBufferBackedFormat;

#import <Foundation/Foundation.h>


@interface BWDataBufferPool : NSObject {
    id<BWDataBufferBackedFormat> *_format;
    NSUInteger _capacity;
    NSString *_name;
    BOOL _clientProvidesPool;
    NSDictionary *_additionalDataBufferAttributes;
    os_unfair_lock_s _dataBufferPoolConfigurationLock;
    *__CVDataBufferPool _dataBufferPool;
    NSDictionary *_dataBufferPoolAuxAttributes;
    int _dataBufferPoolCreateError;
}


@property (readonly, nonatomic) NSUInteger capacity;
@property (readonly, nonatomic) *__CVDataBufferPool cvDataBufferPool;
@property (readonly, nonatomic) *__CFDictionary cvDataBufferPoolAuxAttributes;
@property (readonly, nonatomic) unsigned int dataFormat;
@property (readonly) NSString *name;


+(void)initialize;
-(id)initWithFormat:(id)arg0 capacity:(NSUInteger)arg1 name:(id)arg2 clientProvidesPool:(BOOL)arg3 ;
-(struct __CVBuffer *)newDataBuffer;
-(void)dealloc;
-(void)enumerateSurfacesUsingBlock:(id)arg0 ;
-(void)flushToMinimumCapacity:(NSUInteger)arg0 ;
-(void)prefetchWithCompletionHandler:(id)arg0 ;
-(void)setCVDataBufferPool:(struct __CVDataBufferPool *)arg0 attributes:(struct __CFDictionary *)arg1 ;


@end


#endif