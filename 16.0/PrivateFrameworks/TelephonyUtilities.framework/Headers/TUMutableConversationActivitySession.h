// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUMUTABLECONVERSATIONACTIVITYSESSION_H
#define TUMUTABLECONVERSATIONACTIVITYSESSION_H

@class NSUUID, NSSet, NSXPCListenerEndpoint, NSString, NSDate;


#import "TUConversationActivitySession.h"
#import "TUConversationActivity.h"
#import "TUHandle.h"

@interface TUMutableConversationActivitySession : TUConversationActivitySession

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) TUConversationActivity *activity;
@property (nonatomic) NSUInteger applicationState;
@property (nonatomic) NSUInteger distributionCount;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) BOOL isFirstJoin;
@property (nonatomic) BOOL isLightweightPrimaryInitiated;
@property (nonatomic) BOOL isLocallyInitiated;
@property (nonatomic, getter=isPermittedToJoin) BOOL permittedToJoin;
@property (retain, nonatomic) NSString *persistentSceneIdentifier;
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) TUHandle *terminatingHandle;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic, getter=isUsingAirplay) BOOL usingAirplay;




@end


#endif