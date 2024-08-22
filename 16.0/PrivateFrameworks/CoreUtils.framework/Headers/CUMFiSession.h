// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUMFISESSION_H
#define CUMFISESSION_H

@class EASession, NSInputStream, NSOutputStream, NSString, EAAccessory;
@protocol NSStreamDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUMFiReadRequest.h"
#import "CUMFiWriteRequest.h"

@interface CUMFiSession : NSObject <NSStreamDelegate>

 {
    EASession *_eaSession;
    NSInputStream *_eaInputStream;
    NSOutputStream *_eaOutputStream;
    CUMFiReadRequest *_readRequestList;
    *id _readRequestNext;
    CUMFiReadRequest *_readRequestCurr;
    char * _readBuffer;
    NSUInteger _readLen;
    CUMFiWriteRequest *_writeRequestList;
    *id _writeRequestNext;
    CUMFiWriteRequest *_writeRequestCurr;
    char * _writeBase;
    char * _writePtr;
    char * _writeEnd;
    *LogCategory _ucat;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EAAccessory *device; // ivar: _device
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *protocolString; // ivar: _protocolString
@property (readonly) Class superclass;


-(id)init;
-(void)_activate;
-(void)_completeReadRequest:(id)arg0 error:(id)arg1 ;
-(void)_handleError:(id)arg0 ;
-(void)_invalidate;
-(void)_processReadRequests;
-(void)_processWriteRequests;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)readMinLength:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)writeData:(id)arg0 completion:(id)arg1 ;


@end


#endif