// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSOCKETHANDLER_H
#define WLSOCKETHANDLER_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface WLSocketHandler : NSObject {
    NSObject<OS_dispatch_queue> *_readQueue;
    NSMutableArray *_dataCache;
    NSObject<OS_dispatch_source> *_dataCacheReadSource;
    NSObject<OS_dispatch_semaphore> *_dataCacheSema;
}




+(id)_commandStringWithData:(id)arg0 ;
+(int)connectToHost:(id)arg0 address:(struct hostent *)arg1 port:(unsigned short)arg2 ;
+(void)lookupAndConnectToHost:(id)arg0 port:(unsigned short)arg1 completion:(id)arg2 ;
+(void)performDNSLookupForHost:(id)arg0 completion:(id)arg1 ;
-(BOOL)waitForCommand:(id)arg0 fromReadCacheReturningError:(*id)arg1 ;
-(char *)readBytesFromSocket:(int)arg0 maximumSize:(NSUInteger)arg1 bytesRead:(*NSInteger)arg2 ;
-(id)init;
-(id)observeSocket:(int)arg0 forSourceEventType:(struct dispatch_source_type_s *)arg1 handler:(id)arg2 ;
-(id)waitForBlobDataFromReadCacheReturningError:(*id)arg0 ;
-(id)waitForDataFromReadCacheReturningError:(*id)arg0 ;
-(id)waitForMessageFromReadCacheReturningError:(*id)arg0 ;
-(void)_readIntoCacheFromSocket:(int)arg0 ;
-(void)_writeBytes:(*void)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 toSocket:(int)arg3 completion:(id)arg4 ;
-(void)beginReadingIntoCacheFromSocket:(int)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)endReadingIntoCache;
-(void)sendCommand:(id)arg0 toSocket:(int)arg1 completion:(id)arg2 ;
-(void)sendData:(id)arg0 toSocket:(int)arg1 completion:(id)arg2 ;
-(void)writeBytes:(*void)arg0 length:(NSUInteger)arg1 toSocket:(int)arg2 completion:(id)arg3 ;


@end


#endif