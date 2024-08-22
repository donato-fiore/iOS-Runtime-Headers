// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPWIRELESSPAIRINGSESSION_H
#define RPWIRELESSPAIRINGSESSION_H


#import <Foundation/Foundation.h>

#import "RPWirelessPairingSession_Internal.h"

@interface RPWirelessPairingSession : NSObject

@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) RPWirelessPairingSession_Internal *underlyingObject; // ivar: _underlyingObject


-(id)initWithUnderlyingObject:(id)arg0 ;
-(void)endSession;
-(void)registerInvalidationHandlerOnQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif