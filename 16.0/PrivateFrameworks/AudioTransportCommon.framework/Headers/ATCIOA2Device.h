// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATCIOA2DEVICE_H
#define ATCIOA2DEVICE_H

@class IOKService, IOKConnection, IOKNotificationPort, NSArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ATCIOA2Device : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificationPort;
    NSObject<OS_dispatch_source> *_notificationSource;
    *IOAudio2EngineStatus _engineStatus;
}


@property (copy, nonatomic) NSArray *availableSampleRates; // ivar: _availableSampleRates
@property (readonly, nonatomic) unsigned int clockDomain;
@property (readonly, nonatomic) unsigned int inputLatency;
@property (readonly, nonatomic) unsigned int inputSafetyOffset;
@property (copy, nonatomic) NSArray *inputStreams; // ivar: _inputStreams
@property (readonly, nonatomic) unsigned int ioBufferSize;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int outputLatency;
@property (readonly, nonatomic) unsigned int outputSafetyOffset;
@property (copy, nonatomic) NSArray *outputStreams; // ivar: _outputStreams
@property (readonly, nonatomic) CGFloat sampleRate;
@property (readonly, copy, nonatomic) NSString *uid; // ivar: _uid


+(id)iokitMatchingDictionary;
-(BOOL)changeToSampleRate:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)performConfiigChangeForNotification:(struct IOAudio2Notification *)arg0 error:(*id)arg1 ;
-(BOOL)startIOError:(*id)arg0 ;
-(BOOL)stopIOError:(*id)arg0 ;
-(id)_buildInputStreams;
-(id)_buildOutputStreams;
-(id)initWithService:(id)arg0 ;
-(void)dealloc;
-(void)handleNotification:(struct IOAudio2Notification *)arg0 ;


@end


#endif