// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIXPCDISPATCHER_H
#define DIXPCDISPATCHER_H

@protocol DIXPCClientInterface, DIAudioPowerDelegate, DIAudioStatusDelegate, DIDeviceListDelegate, DIDeviceStatusDelegate, DISessionStatusDelegate;

#import <Foundation/Foundation.h>


@interface DIXPCDispatcher : NSObject <DIXPCClientInterface>

 {
    ? clientContext;
    ? logger;
}


@property (nonatomic, weak) NSObject<DIAudioPowerDelegate> *audioPowerDelegate; // ivar: audioPowerDelegate
@property (nonatomic, weak) NSObject<DIAudioStatusDelegate> *audioStatusDelegate; // ivar: audioStatusDelegate
@property (nonatomic, weak) NSObject<DIDeviceListDelegate> *deviceListDelegate; // ivar: deviceListDelegate
@property (nonatomic, weak) NSObject<DIDeviceStatusDelegate> *deviceStatusDelegate; // ivar: deviceStatusDelegate
@property (nonatomic, weak) NSObject<DISessionStatusDelegate> *sessionStatusDelegate; // ivar: sessionStatusDelegate


-(?)fetchClientContextWithCompletionHandler;
-(id)init;
-(id)initWithClientContext:(id)arg0 ;
-(void)didAddDevice:(id)arg0 ;
-(void)didAddSession:(id)arg0 ;
-(void)didLoadDevices:(id)arg0 ;
-(void)didRemoveDevice:(id)arg0 ;
-(void)didRemoveSession:(id)arg0 ;
-(void)didUpdateAudioPower:(float)arg0 ;
-(void)didUpdateDevice:(id)arg0 ;
-(void)didUpdateDownlinkMuteStatus:(BOOL)arg0 ;
-(void)didUpdateSession:(id)arg0 ;
-(void)didUpdateUplinkMuteStatus:(BOOL)arg0 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didUpdateUplinkMuteStatus:(BOOL)arg1 ;


@end


#endif