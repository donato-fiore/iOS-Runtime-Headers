// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCOREP33_4DC64229D2ABB0B5306670C4AE3A9EED34PROMINENCEOBSERVATIONSERVICECLIENT_H
#define _TTC11SESSIONCOREP33_4DC64229D2ABB0B5306670C4AE3A9EED34PROMINENCEOBSERVATIONSERVICECLIENT_H

@protocol ACActivityProminenceObservationXPCServer;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_4DC64229D2ABB0B5306670C4AE3A9EED34ProminenceObservationServiceClient : NSObject <ACActivityProminenceObservationXPCServer>

 {
    ? delegate;
    ? connection;
    ? lock;
    ? _lock_bufferedProminenceUpdate;
    ? _lock_pendingAck;
    ? _lock_predicate;
}




-(BOOL)subscribeToActivityProminenceMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif