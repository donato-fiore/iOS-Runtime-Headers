// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKAUTHENTICATIONREQUESTEVENT_H
#define SKAUTHENTICATIONREQUESTEVENT_H



#import "SKEvent.h"

@interface SKAuthenticationRequestEvent : SKEvent

@property (readonly, nonatomic) unsigned int pairingFlags; // ivar: _pairingFlags
@property (readonly, nonatomic) int passwordType; // ivar: _passwordType
@property (readonly, nonatomic) int throttleSeconds; // ivar: _throttleSeconds


-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithPasswordType:(int)arg0 pairingFlags:(unsigned int)arg1 throttleSeconds:(int)arg2 ;


@end


#endif