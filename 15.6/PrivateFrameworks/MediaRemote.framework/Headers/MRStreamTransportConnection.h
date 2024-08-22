// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSTREAMTRANSPORTCONNECTION_H
#define MRSTREAMTRANSPORTCONNECTION_H

@class NSInputStream, NSOutputStream, NSRunLoop, NSString;
@protocol NSStreamDelegate;


#import "MRExternalDeviceTransportConnection.h"

@interface MRStreamTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate>

 {
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSRunLoop *_runLoop;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isValid;
-(NSUInteger)sendTransportData:(id)arg0 options:(id)arg1 ;
-(id)initWithInputStream:(id)arg0 outputStream:(id)arg1 ;
-(id)runLoop;
-(void)_closeAllStreams;
-(void)_closeStream:(id)arg0 ;
-(void)_openStream:(id)arg0 ;
-(void)_setQOSPropertiesOnStream:(id)arg0 ;
-(void)_stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)close;
-(void)setRunLoop:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif