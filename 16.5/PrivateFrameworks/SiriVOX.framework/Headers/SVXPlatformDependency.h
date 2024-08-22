// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXPLATFORMDEPENDENCY_H
#define SVXPLATFORMDEPENDENCY_H

@protocol SVXSessionActivityListening, SVXAudioPowerUpdateListening, SVXAudioStreamingListening, SVXClientAudioSystemServicing, SVXServiceCommandHandling, SVXSiriModesManaging, SVXSpeechSynthesisListening;

#import <Foundation/Foundation.h>


@interface SVXPlatformDependency : NSObject

@property (readonly, nonatomic) NSObject<SVXSessionActivityListening> *activityListener; // ivar: _activityListener
@property (readonly, nonatomic) NSObject<SVXAudioPowerUpdateListening> *audioPowerUpdateListener; // ivar: _audioPowerUpdateListener
@property (readonly, nonatomic) NSObject<SVXAudioStreamingListening> *audioStreamingListener; // ivar: _audioStreamingListener
@property (readonly, nonatomic) NSObject<SVXClientAudioSystemServicing> *clientAudioSystemService; // ivar: _clientAudioSystemService
@property (readonly, nonatomic) NSObject<SVXServiceCommandHandling> *serviceCommandHandler; // ivar: _serviceCommandHandler
@property (readonly, nonatomic) NSObject<SVXSiriModesManaging> *siriModesManager; // ivar: _siriModesManager
@property (readonly, nonatomic) NSObject<SVXSpeechSynthesisListening> *speechSynthesisListener; // ivar: _speechSynthesisListener
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithAudioPowerUpdateListener:(id)arg0 ;
-(id)initWithAudioStreamingListener:(id)arg0 ;
-(id)initWithClientAudioSystemService:(id)arg0 ;
-(id)initWithServiceCommandHandler:(id)arg0 ;
-(id)initWithSessionActivityListener:(id)arg0 ;
-(id)initWithSiriModesManager:(id)arg0 ;
-(id)initWithSpeechSynthesisListener:(id)arg0 ;


@end


#endif