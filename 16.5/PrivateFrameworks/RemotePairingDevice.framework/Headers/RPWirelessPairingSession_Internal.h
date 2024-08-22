// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPWIRELESSPAIRINGSESSION_INTERNAL_H
#define RPWIRELESSPAIRINGSESSION_INTERNAL_H


#import <Foundation/Foundation.h>


@interface RPWirelessPairingSession_Internal : NSObject {
    ? _connection;
    ? _lock;
    ? _invalidationHandlers;
    ? _state;
}


@property (nonatomic, readonly) BOOL invalidated;


-(id)init;
-(void)endSession;
-(void)registerInvalidationHandlerWithInvokingOnQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif