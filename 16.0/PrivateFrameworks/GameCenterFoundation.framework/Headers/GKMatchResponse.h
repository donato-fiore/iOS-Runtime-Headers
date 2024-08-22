// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKMATCHRESPONSE_H
#define GKMATCHRESPONSE_H

@class NSData, NSArray, NSString, NSDictionary;


#import "GKInternalRepresentation.h"
#import "GKMatchRequestInternal.h"
#import "GKDispatchGroup.h"

@interface GKMatchResponse : GKInternalRepresentation

@property (retain) NSData *cdxTicket; // ivar: _cdxTicket
@property (retain) GKMatchRequestInternal *matchRequest; // ivar: _matchRequest
@property (retain) NSArray *matches; // ivar: _matches
@property GKDispatchGroup *matchingGroup; // ivar: _matchingGroup
@property (retain) NSArray *relayPushes; // ivar: _relayPushes
@property (retain) NSString *rid; // ivar: _rid
@property (readonly) int sequence; // ivar: _sequence
@property (retain) NSDictionary *serverRequest; // ivar: _serverRequest
@property (retain) NSData *sessionToken; // ivar: _sessionToken
@property (nonatomic) NSInteger state; // ivar: _state


+(id)secureCodedPropertyKeys;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isNetworkError;
-(BOOL)isTimeout;
-(BOOL)transitionToState:(NSInteger)arg0 ;
-(int)_incrementSequence;


@end


#endif