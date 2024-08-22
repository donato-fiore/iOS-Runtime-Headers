// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSOCKET_H
#define ATSOCKET_H

@class NSMutableArray;
@protocol NSSecureCoding, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATSocket : NSObject <NSSecureCoding>

 {
    NSObject<OS_dispatch_source> *_source;
    NSMutableArray *_delegates;
    char _readBuffer;
    char * _writeBuffer;
    unsigned int _writeBufferOffset;
    NSUInteger _totalBytesSent;
    NSUInteger _totalBytesReceived;
}


@property (nonatomic) int descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSInteger socketMode; // ivar: _socketMode
@property (nonatomic) NSUInteger suggestedBufferSize; // ivar: _suggestedBufferSize
@property (readonly, nonatomic) int transportUpdgradeExceptionCount; // ivar: _transportUpdgradeExceptionCount
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo
@property (nonatomic) unsigned int writeBufferSize; // ivar: _writeBufferSize


+(BOOL)supportsSecureCoding;
+(id)createBoundPair:(id)arg0 ;
-(BOOL)isOpen;
-(BOOL)open;
-(BOOL)writeAllData:(id)arg0 error:(*id)arg1 ;
-(id)_flush;
-(id)flush;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)_send:(char *)arg0 offset:(unsigned int)arg1 len:(unsigned int)arg2 error:(*id)arg3 ;
-(int)recv:(char *)arg0 offset:(unsigned int)arg1 len:(unsigned int)arg2 error:(*id)arg3 ;
-(int)send:(char *)arg0 offset:(unsigned int)arg1 len:(unsigned int)arg2 error:(*id)arg3 ;
-(void)addDelegate:(id)arg0 ;
-(void)addTransportUpgradeException;
-(void)close;
-(void)closeDescriptor;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyHasDataAvailable:(char *)arg0 length:(NSInteger)arg1 ;
-(void)notifySocketDidClose;
-(void)removeDelegate:(id)arg0 ;
-(void)removeTransportUpgradeException;
-(void)writeData:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif