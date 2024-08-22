// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVROUTINGSESSIONMANAGER_H
#define AVROUTINGSESSIONMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVRoutingSessionManagerInternal.h"
#import "AVRoutingSession.h"

@interface AVRoutingSessionManager : NSObject {
    AVRoutingSessionManagerInternal *_ivars;
}


@property (readonly) NSArray *allLikelyDestinations;
@property (readonly) AVRoutingSession *currentRoutingSession;
@property (readonly) NSArray *likelyExternalDestinations;
@property (readonly) BOOL prefersLikelyDestinationsOverCurrentRoutingSession;


+(id)longFormVideoRoutingSessionManager;
+(void)initialize;
-(BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(*id)arg0 ;
-(BOOL)stopSuppressingLikelyDestinationsAndReturnError:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager *)arg0 ;
-(void)dealloc;
-(void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(id)arg0 ;
-(void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(id)arg0 ;


@end


#endif