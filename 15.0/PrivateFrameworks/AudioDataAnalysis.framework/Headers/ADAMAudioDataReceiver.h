// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADAMAUDIODATARECEIVER_H
#define ADAMAUDIODATARECEIVER_H

@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ADAMClientDelegate, ADAMAudioDataReceiverDelegate;

#import <Foundation/Foundation.h>


@interface ADAMAudioDataReceiver : NSObject <ADAMClientDelegate>

 {
    NSString *_name;
    NSMutableDictionary *_sensorStatus;
    NSMutableDictionary *_callbacks;
    NSMutableDictionary *_configs;
    NSXPCConnection *_connection;
    os_unfair_lock_s _lock;
}


@property BOOL connectionDidInvalidate; // ivar: _connectionDidInvalidate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ADAMAudioDataReceiverDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isMeasurementOnForAudioSampleType:(unsigned int)arg0 ;
-(BOOL)verifyInvariants;
-(id)getCurrentConfigurationForAudioSampleType:(unsigned int)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)setupConnection;
-(void)configureAudioSampleType:(unsigned int)arg0 configuration:(id)arg1 ;
-(void)dealloc;
-(void)handleAndLogError:(id)arg0 ;
-(void)receiveAudioSample:(id)arg0 ;
-(void)receiveAudioSample:(id)arg0 type:(unsigned int)arg1 metadata:(id)arg2 ;
-(void)reconnect;
-(void)reset;
-(void)startMeasuringAudioSampleType:(unsigned int)arg0 withConfiguration:(id)arg1 ;
-(void)startReceivingAudioSampleType:(unsigned int)arg0 ;
-(void)startReceivingAudioSampleType:(unsigned int)arg0 withCallback:(id)arg1 ;
-(void)stopMeasuringAudioSampleType:(unsigned int)arg0 ;
-(void)stopReceivingAudioSampleType:(unsigned int)arg0 ;


@end


#endif