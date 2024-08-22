// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSREMOTEPAIRINGWRAPPER_H
#define DSREMOTEPAIRINGWRAPPER_H


#import <Foundation/Foundation.h>

#import "_TtC15DSRemotePairing15DSRemotePairing.h"

@interface DSRemotePairingWrapper : NSObject

@property (retain, nonatomic) _TtC15DSRemotePairing15DSRemotePairing *remotePairing; // ivar: _remotePairing


-(NSInteger)getNumberOfPairedDevicesWithCompletion:(id)arg0 ;
-(id)init;
-(void)removeAllPairedDevicesOnQueue:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif