// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIDECARDISPLAYRECEIVINGMANAGER_H
#define SIDECARDISPLAYRECEIVINGMANAGER_H


#import <Foundation/Foundation.h>


@interface SidecarDisplayReceivingManager : NSObject



-(void)disconnectFromDeviceWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchSendingDeviceSessionStatesWithCompletion:(id)arg0 ;
-(void)requestConnectionFromDeviceWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif