// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMDHOMEADMINISTRATORDYNAMICRELAY_H
#define __HMDHOMEADMINISTRATORDYNAMICRELAY_H

@class HMDHomeAdministratorReceiver;



@interface __HMDHomeAdministratorDynamicRelay : HMDHomeAdministratorReceiver



+(id)logCategory;
-(void)__handleRemoteMessage:(id)arg0 ;
-(void)__handleXPCMessage:(id)arg0 ;
-(void)registerForMessage:(id)arg0 policies:(id)arg1 ;


@end


#endif