// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSTREAM_H
#define MFSTREAM_H

@class NSInputStream, NSOutputStream, NSMutableDictionary, NSCondition, NSString, NSError;
@protocol NSStreamDelegate, NSURLSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFStream : NSObject <NSStreamDelegate, NSURLSessionDelegate>

 {
    NSInputStream *_rStream;
    NSOutputStream *_wStream;
    NSMutableDictionary *_properties;
    id *_callback;
    NSObject<OS_dispatch_queue> *_location;
    NSUInteger _capacity;
    NSUInteger _length;
    char * _buffer;
    BOOL _streamCanRead;
    BOOL _streamCanWrite;
    BOOL _dispatchedBytesAvailable;
    NSUInteger _bytesRead;
    NSUInteger _bytesWritten;
    NSCondition *_condition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) NSError *streamError; // ivar: _error
@property (readonly) Class superclass;


+(id)_networkDispatchQueue;
+(id)networkThread;
+(void)setNetworkThread:(id)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(id)_copyPropertyForKey:(id)arg0 ;
// -(id)initCallBack:(id)arg0 onDispatchQueue:(unk)arg1  ;
-(id)propertyForKey:(id)arg0 ;
-(void)_closeAndReleaseStream:(id)arg0 logMessage:(id)arg1 ;
-(void)_createPairWithSocketToHostName:(id)arg0 port:(NSInteger)arg1 ;
-(void)_readBytesFromStream;
-(void)close;
-(void)dealloc;
-(void)openToHostName:(id)arg0 port:(NSInteger)arg1 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif