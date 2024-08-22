// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPROXIMITYHANDSHAKEACTION_H
#define SASPROXIMITYHANDSHAKEACTION_H



#import "SASProximityAction.h"
#import "SASProximityHandshake.h"

@interface SASProximityHandshakeAction : SASProximityAction

@property (retain) SASProximityHandshake *handshake; // ivar: _handshake


+(NSUInteger)actionID;
-(BOOL)hasResponse;
-(id)init;
-(id)responsePayload;
-(void)setResponseFromData:(id)arg0 ;


@end


#endif