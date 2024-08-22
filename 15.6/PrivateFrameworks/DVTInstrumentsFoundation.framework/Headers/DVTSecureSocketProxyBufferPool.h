// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DVTSECURESOCKETPROXYBUFFERPOOL_H
#define DVTSECURESOCKETPROXYBUFFERPOOL_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface DVTSecureSocketProxyBufferPool : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferAvailable; // ivar: _bufferAvailable
@property (retain, nonatomic) NSMutableArray *dataBuffers; // ivar: _dataBuffers


-(id)blockingAcquireBuffer;
-(id)initWithCount:(int)arg0 bufferSize:(NSUInteger)arg1 ;
-(void)releaseBuffer:(id)arg0 ;


@end


#endif