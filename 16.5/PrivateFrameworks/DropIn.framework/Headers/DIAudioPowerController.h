// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAUDIOPOWERCONTROLLER_H
#define DIAUDIOPOWERCONTROLLER_H

@protocol DIAudioPowerDelegate, DIXPCManagerCheckInObserver, DIAudioPowerControllerDelegate;

#import <Foundation/Foundation.h>

#import "DIXPCConnectionManager.h"

@interface DIAudioPowerController : NSObject <DIAudioPowerDelegate, DIXPCManagerCheckInObserver>



@property (readonly, weak, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (weak, nonatomic) NSObject<DIAudioPowerControllerDelegate> *delegate; // ivar: _delegate


-(id)initWithConnectionManager:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateAudioPower:(float)arg0 ;
-(void)xpcManagerDidPerformDaemonCheckIn:(id)arg0 ;


@end


#endif