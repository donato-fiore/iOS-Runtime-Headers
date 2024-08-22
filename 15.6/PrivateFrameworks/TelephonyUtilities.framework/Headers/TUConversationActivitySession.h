// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCONVERSATIONACTIVITYSESSION_H
#define TUCONVERSATIONACTIVITYSESSION_H

@class NSUUID, NSSet, NSXPCListenerEndpoint, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationActivity.h"
#import "TUHandle.h"

@interface TUConversationActivitySession : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSSet *activeRemoteParticipants; // ivar: _activeRemoteParticipants
@property (retain, nonatomic) TUConversationActivity *activity; // ivar: _activity
@property (nonatomic) NSUInteger distributionCount; // ivar: _distributionCount
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) BOOL isFirstJoin; // ivar: _isFirstJoin
@property (nonatomic) BOOL isLightweightPrimaryInitiated; // ivar: _isLightweightPrimaryInitiated
@property (readonly, nonatomic) BOOL isLocallyInitiated; // ivar: _isLocallyInitiated
@property (nonatomic, getter=isPermittedToJoin) BOOL permittedToJoin; // ivar: _permittedToJoin
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) TUHandle *terminatingHandle; // ivar: _terminatingHandle
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationActivitySession:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActivity:(id)arg0 locallyInitiated:(BOOL)arg1 timestamp:(id)arg2 isFirstJoin:(BOOL)arg3 ;
-(id)initWithActivity:(id)arg0 state:(NSUInteger)arg1 endpoint:(id)arg2 locallyInitiated:(BOOL)arg3 timestamp:(id)arg4 isFirstJoin:(BOOL)arg5 ;
-(id)initWithActivity:(id)arg0 state:(NSUInteger)arg1 uuid:(id)arg2 endpoint:(id)arg3 locallyInitiated:(BOOL)arg4 timestamp:(id)arg5 isFirstJoin:(BOOL)arg6 activeRemoteParticipants:(id)arg7 ;
-(id)initWithActivity:(id)arg0 uuid:(id)arg1 locallyInitiated:(BOOL)arg2 timestamp:(id)arg3 isFirstJoin:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)publicCopy;
-(void)encodeWithCoder:(id)arg0 ;
-(void)launchApplicationWithForcedURL:(id)arg0 completion:(id)arg1 ;


@end


#endif