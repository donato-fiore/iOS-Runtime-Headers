// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXCLIENTSERVICEMANAGER_H
#define SVXCLIENTSERVICEMANAGER_H

@class AFAnalytics, NSString;
@protocol SVXClientServiceConnectionDelegate, SVXClientServiceProviding, SVXPerforming, SVXClientActivationServicing, SVXClientAudioSystemServicing, SVXClientDeviceServicing, SVXClientAudioPowerServicing, SVXClientKeepAliveServicing, SVXClientSessionServicing, SVXClientSessionStateServicing, SVXClientSpeechSynthesisServicing;

#import <Foundation/Foundation.h>

#import "SVXClientServiceConnection.h"

@interface SVXClientServiceManager : NSObject <SVXClientServiceConnectionDelegate, SVXClientServiceProviding>

 {
    id<SVXPerforming> *_performer;
    AFAnalytics *_analytics;
    SVXClientServiceConnection *_connection;
}


@property (readonly, nonatomic) NSObject<SVXClientActivationServicing> *activationService; // ivar: _activationService
@property (readonly, nonatomic) NSObject<SVXClientAudioSystemServicing> *audioSystemService; // ivar: _audioSystemService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SVXClientDeviceServicing> *deviceService; // ivar: _deviceService
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SVXClientAudioPowerServicing> *inputAudioPowerService; // ivar: _inputAudioPowerService
@property (readonly, nonatomic) NSObject<SVXClientKeepAliveServicing> *keepAliveService; // ivar: _keepAliveService
@property (readonly, nonatomic) NSObject<SVXClientAudioPowerServicing> *outputAudioPowerService; // ivar: _outputAudioPowerService
@property (readonly, nonatomic) NSObject<SVXClientSessionServicing> *sessionService; // ivar: _sessionService
@property (readonly, nonatomic) NSObject<SVXClientSessionStateServicing> *sessionStateService; // ivar: _sessionStateService
@property (readonly, nonatomic) NSObject<SVXClientSpeechSynthesisServicing> *speechSynthesisService; // ivar: _speechSynthesisService
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)_connection;
-(id)clientServiceConnection:(id)arg0 performerForComponent:(NSInteger)arg1 ;
-(id)init;
-(void)_connect;
-(void)clientServiceConnectionDidInvalidate:(id)arg0 ;
// -(void)getClientServiceUsingBlock:(id)arg0 errorHandler:(unk)arg1  ;


@end


#endif