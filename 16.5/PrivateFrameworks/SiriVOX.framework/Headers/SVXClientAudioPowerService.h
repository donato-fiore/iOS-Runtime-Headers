// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXCLIENTAUDIOPOWERSERVICE_H
#define SVXCLIENTAUDIOPOWERSERVICE_H

@class AFAudioPowerUpdater, NSString;
@protocol AFAudioPowerUpdaterDelegate, SVXClientServiceConsuming, SVXClientAudioPowerServicing, SVXPerforming, SVXClientServiceProviding, AFAudioPowerProviding, SVXClientAudioPowerServiceDelegate;

#import <Foundation/Foundation.h>


@interface SVXClientAudioPowerService : NSObject <AFAudioPowerUpdaterDelegate, SVXClientServiceConsuming, SVXClientAudioPowerServicing>

 {
    id<SVXPerforming> *_performer;
    NSInteger _type;
    id<SVXClientServiceProviding> *_clientServiceProvider;
    BOOL _wantsUpdate;
    NSInteger _frequency;
    id<AFAudioPowerProviding> *_provider;
    os_unfair_lock_s _providerLock;
    AFAudioPowerUpdater *_updater;
}


@property (readonly, nonatomic) float averagePower;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SVXClientAudioPowerServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float peakPower;
@property (readonly) Class superclass;


-(id)_provider;
-(id)initWithClientServiceProvider:(id)arg0 analytics:(id)arg1 performer:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 clientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3 ;
-(void)_beginUpdateWithFrequency:(NSInteger)arg0 ;
-(void)_createUpdater;
-(void)_destroyUpdater;
-(void)_endUpdate;
-(void)_handleDidEndUpdateAudioPower;
-(void)_handleWillBeginUpdateAudioPowerWithProvider:(id)arg0 ;
-(void)_setProvider:(id)arg0 ;
-(void)audioPowerUpdaterDidUpdate:(id)arg0 averagePower:(float)arg1 peakPower:(float)arg2 ;
-(void)beginUpdateWithFrequency:(NSInteger)arg0 ;
-(void)clientServiceDidChange:(BOOL)arg0 ;
-(void)endUpdate;
-(void)handleDidEndUpdateAudioPower;
-(void)handleWillBeginUpdateAudioPowerWithProvider:(id)arg0 ;


@end


#endif