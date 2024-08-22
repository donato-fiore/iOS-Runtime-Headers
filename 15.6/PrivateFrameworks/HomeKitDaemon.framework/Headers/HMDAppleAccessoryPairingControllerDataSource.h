// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEACCESSORYPAIRINGCONTROLLERDATASOURCE_H
#define HMDAPPLEACCESSORYPAIRINGCONTROLLERDATASOURCE_H

@class HAPPairingIdentity, NSArray;


#import "HMCContextProvider.h"

@interface HMDAppleAccessoryPairingControllerDataSource : HMCContextProvider

@property (retain, nonatomic) HAPPairingIdentity *controllerIdentity; // ivar: _controllerIdentity
@property (retain, nonatomic) NSArray *inProgressPairingAccessories; // ivar: _inProgressPairingAccessories


-(id)initWithContext:(id)arg0 ;
-(void)deletePairingAccessoryState:(id)arg0 ;
-(void)updateControllerIdentity:(id)arg0 ;
-(void)updatePairingAccessoryState:(id)arg0 ;


@end


#endif