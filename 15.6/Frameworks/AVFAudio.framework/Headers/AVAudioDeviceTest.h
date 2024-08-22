// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIODEVICETEST_H
#define AVAUDIODEVICETEST_H

@class NSXPCConnection;
@protocol AVAudioDeviceTestServiceProtocol;

#import <Foundation/Foundation.h>


@interface AVAudioDeviceTest : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection
@property BOOL processSequenceAsynchronously; // ivar: _processSequenceAsynchronously
@property (retain) NSObject<AVAudioDeviceTestServiceProtocol> *serviceDelegateAsync; // ivar: _serviceDelegateAsync
@property (retain) NSObject<AVAudioDeviceTestServiceProtocol> *serviceDelegateSync; // ivar: _serviceDelegateSync


-(id)init;
-(id)initWithXPCEndPoint:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)startWithSequence:(id)arg0 completion:(id)arg1 ;


@end


#endif