// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXSHAREDMEMORYTRANSPORT_H
#define DTXSHAREDMEMORYTRANSPORT_H

@protocol OS_dispatch_queue;


#import "DTXTransport.h"

@interface DTXSharedMemoryTransport : DTXTransport {
    NSObject<OS_dispatch_queue> *_listenQueue;
    BOOL _creator;
}


@property (nonatomic) int remotePid;
@property (readonly, nonatomic) *DTXSharedMemory sharedMemory; // ivar: _shm
@property (readonly, nonatomic) NSUInteger totalSharedMemorySize;


+(id)addressForMemory:(NSUInteger)arg0 inProcess:(int)arg1 ;
+(id)addressForPosixSharedMemoryWithName:(id)arg0 ;
+(id)schemes;
-(BOOL)_setupCreatingSharedMemory:(id)arg0 size:(int)arg1 ;
-(BOOL)_setupWithShm:(struct DTXSharedMemory *)arg0 asCreator:(BOOL)arg1 ;
-(NSUInteger)transmit:(*void)arg0 ofLength:(NSUInteger)arg1 ;
-(id)initWithLocalName:(id)arg0 size:(int)arg1 ;
-(id)initWithMappedMemory:(struct DTXSharedMemory *)arg0 ;
-(id)initWithMemoryAddress:(NSUInteger)arg0 inTask:(unsigned int)arg1 ;
-(id)initWithRemoteAddress:(id)arg0 ;
-(id)localAddresses;
-(id)permittedBlockCompressionTypes;
-(void)dealloc;
-(void)disconnect;


@end


#endif