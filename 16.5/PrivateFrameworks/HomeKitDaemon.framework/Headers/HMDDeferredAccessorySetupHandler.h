// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEFERREDACCESSORYSETUPHANDLER_H
#define HMDDEFERREDACCESSORYSETUPHANDLER_H

@class HMFObject, HAPAccessoryServer, HMFTimer;


#import "HMDAccessoryPairingEvent.h"

@interface HMDDeferredAccessorySetupHandler : HMFObject

@property (readonly) id *callback; // ivar: _callback
@property (readonly) HMFObject *context; // ivar: _context
@property (readonly) HMDAccessoryPairingEvent *pairingEvent; // ivar: _pairingEvent
@property (readonly) HAPAccessoryServer *server; // ivar: _server
@property (readonly) HMFTimer *timer; // ivar: _timer


// -(id)initWithServer:(id)arg0 timer:(id)arg1 pairingEvent:(id)arg2 callback:(id)arg3 context:(unk)arg4  ;


@end


#endif