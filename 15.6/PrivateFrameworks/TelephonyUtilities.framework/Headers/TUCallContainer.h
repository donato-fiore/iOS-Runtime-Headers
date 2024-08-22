// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLCONTAINER_H
#define TUCALLCONTAINER_H

@class NSArray, NSString;
@protocol TUCallContainerPrivate, TUCallContainer;

#import <Foundation/Foundation.h>

#import "TUCall.h"

@interface TUCallContainer : NSObject <TUCallContainerPrivate, TUCallContainer>



@property (readonly, copy, nonatomic) NSArray *_allCalls;
@property (readonly, nonatomic) TUCall *activeVideoCall;
@property (readonly, nonatomic) BOOL anyCallIsEndpointOnCurrentDevice;
@property (readonly, nonatomic) BOOL anyCallIsHostedOnCurrentDevice;
@property (readonly, nonatomic) NSUInteger callCountOnDefaultPairedDevice;
@property (readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property (copy, nonatomic) NSArray *calls; // ivar: _calls
@property (readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property (readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property (readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property (readonly, nonatomic) TUCall *conferenceCall;
@property (readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property (readonly, nonatomic) NSUInteger currentAudioAndVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property (readonly, nonatomic) NSUInteger currentCallCount;
@property (readonly, copy, nonatomic) NSArray *currentCallGroups;
@property (readonly, copy, nonatomic) NSArray *currentCalls;
@property (readonly, nonatomic) TUCall *currentVideoCall;
@property (readonly, nonatomic) NSUInteger currentVideoCallCount;
@property (readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *displayedAudioAndVideoCalls;
@property (readonly, nonatomic) TUCall *displayedCall;
@property (readonly, copy, nonatomic) NSArray *displayedCalls;
@property (readonly, nonatomic) BOOL existingCallsHaveMultipleProviders;
@property (readonly, retain, nonatomic) TUCall *frontmostAudioOrVideoCall;
@property (readonly, nonatomic) TUCall *frontmostCall;
@property (readonly, nonatomic) BOOL hasCurrentAudioCalls;
@property (readonly, nonatomic) BOOL hasCurrentCalls;
@property (readonly, nonatomic) BOOL hasCurrentVideoCalls;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TUCall *incomingCall;
@property (readonly, copy, nonatomic) NSArray *incomingCalls;
@property (readonly, nonatomic) TUCall *incomingVideoCall;
@property (readonly) Class superclass;


-(BOOL)allCallsAreOfService:(int)arg0 ;
-(BOOL)allCallsPassTest:(id)arg0 ;
-(BOOL)anyCallPassesTest:(id)arg0 ;
-(NSUInteger)countOfCallsPassingTest:(id)arg0 ;
-(id)_callGroupsFromCalls:(id)arg0 ;
-(id)audioAndVideoCallsWithStatus:(int)arg0 ;
-(id)audioOrVideoCallWithStatus:(int)arg0 ;
-(id)callPassingTest:(id)arg0 ;
// -(id)callPassingTest:(id)arg0 sortedUsingComparator:(unk)arg1  ;
// -(id)callPassingTest:(id)arg0 withOptions:(unk)arg1  ;
-(id)callWithCallUUID:(id)arg0 ;
-(id)callWithStatus:(int)arg0 ;
-(id)callWithUniqueProxyIdentifier:(id)arg0 ;
-(id)callsPassingTest:(id)arg0 ;
-(id)callsWithGroupUUID:(id)arg0 ;
-(id)callsWithStatus:(int)arg0 ;
-(id)displayedCallFromCalls:(id)arg0 ;
-(id)init;
-(id)initWithCalls:(id)arg0 ;
-(id)videoCallWithStatus:(int)arg0 ;
// -(void)enumerateCallsInvokingBlock:(id)arg0 forCallsPassingTest:(unk)arg1  ;
// -(void)enumerateCallsWithOptions:(NSUInteger)arg0 invokingBlock:(id)arg1 forCallsPassingTest:(unk)arg2  ;


@end


#endif