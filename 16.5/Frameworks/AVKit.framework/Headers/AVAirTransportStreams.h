// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAIRTRANSPORTSTREAMS_H
#define AVAIRTRANSPORTSTREAMS_H

@class NSString, NSInputStream, NSOutputStream;
@protocol NSStreamDelegate;


#import "AVAirTransport.h"

@interface AVAirTransportStreams : AVAirTransport <NSStreamDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly) Class superclass;


-(BOOL)canWrite;
-(BOOL)isReadyToSend;
-(NSInteger)_writeData:(id)arg0 ;
-(id)_readAvailableData;
-(id)_readDataNonBlockingUpToMaxLength:(NSUInteger)arg0 ;
-(id)initWithInput:(id)arg0 output:(id)arg1 ;
-(void)invalidate;
-(void)open;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif