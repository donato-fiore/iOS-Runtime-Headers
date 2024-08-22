// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTOURNAMENTPARTICIPANTREQUEST_H
#define GKTOURNAMENTPARTICIPANTREQUEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKTournamentParticipantRequestInternal.h"

@interface GKTournamentParticipantRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL friendsOnly;
@property (retain) GKTournamentParticipantRequestInternal *internal; // ivar: _internal
@property (retain, nonatomic) NSArray *participantStates;
@property (nonatomic) _NSRange range;


+(BOOL)supportsSecureCoding;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif