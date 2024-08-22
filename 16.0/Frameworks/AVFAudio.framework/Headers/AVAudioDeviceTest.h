// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIODEVICETEST_H
#define AVAUDIODEVICETEST_H

@class NSXPCConnection;
@protocol AVAudioDeviceTestServiceProtocol;

#import <Foundation/Foundation.h>


@interface AVAudioDeviceTest : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property BOOL processSequenceAsynchronously; // ivar: _processSequenceAsynchronously
@property (retain, nonatomic) NSObject<AVAudioDeviceTestServiceProtocol> *serviceDelegateAsync; // ivar: _serviceDelegateAsync
@property (retain, nonatomic) NSObject<AVAudioDeviceTestServiceProtocol> *serviceDelegateSync; // ivar: _serviceDelegateSync


-(id)init;
-(id)initWithXPCEndPoint:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)playback:(id)arg0 filePath:(id)arg1 completion:(id)arg2 ;
-(void)startRecording:(id)arg0 filePath:(id)arg1 completion:(id)arg2 ;
-(void)startWithSequence:(id)arg0 completion:(id)arg1 ;
-(void)stopRecording:(id)arg0 ;


@end


#endif